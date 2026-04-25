#include <iostream>
using namespace std;
class animal 
{
 public:
  int legs, wings;
  string name;
  void move();
  animal();//dc
  animal(int l, int w);//pc
  animal(animal& orig);
  ~animal(); //destructor...
};
void animal:: move() 
{
  cout<<"DC: Animal moving...\n";
} 

animal::~animal()
{
  cout << "killing..." << name <<endl;
}

animal::animal()
{
    name = "A";
  cout<<"PC: animal creating..\n";
  legs=2;
  wings=0;
};
animal::animal (int l, int w)
{
  name = "B";
  cout << "PC animal creating..\n";
  legs=l;
  wings=w;
}

animal::animal (animal& orig)
{
   name = "C";
  cout << "CC: cloning an creating..\n";
  legs=orig.legs;
  wings=orig.legs;
}
 int main () 
  {
    animal a;
    a.move();
    animal b(4,5);
    animal c(b);
    return 0;
  }