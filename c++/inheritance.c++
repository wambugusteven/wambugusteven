#include <iostream>
using namespace std;

class person
{
    public:
    string name, phonenumber, email;
    int idno, age;
};

class employee
{
    public:
    string name, phonenumber, email ;
    int idno, age, empno;
    float salary;
};

//Using inheritance

class employee: public person
{
    public: 
    int empno;
    float salary;
};