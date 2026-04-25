#include <iostream>
using namespace std;

void swapByVal(int a, int b) 
{ 
    int temp = a;
    a = b;
    b = temp;
}

void swapByRef(int& a, int& b) 
{
   int temp = a;
    a = b;
    b = temp;  
}

void swapByPointer(int *a, int *b) {
     int temp = *a;
    *a = *b;
    *b = temp;
}

int main () 
{
    int i = 3, j = 5;

    cout<<"original values " << i << "" << j <<endl;

    swapByVal(i, j);
    cout<<" Swap by Value " << i <<" " << j <<endl;

    swapByRef(i, j);
    cout<<"Swap by Reference " << i <<" "<< j <<endl;

    swapByPointer(&i, &j);
    cout<<"Swap by pointer" << i <<" "<< j <<endl;
}