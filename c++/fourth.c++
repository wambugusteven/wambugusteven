#include <iostream>
using namespace std;
 class add 
 {
   int x, y, z;
  public: 
   void getdata() {
    cout<<"Enter two values";
    cin>>x >>y;
   }
   void calculate();
   void dispay();
 };

 void add :: calculate()
 {
   z = x + y;
 };

 void add :: dispay()
 {
    cout<< "The sum of x and y is: " << z <<endl;
 };

 int main () 
 {
    add ax;

    ax.getdata();
    ax.calculate();
    ax.dispay();
 }