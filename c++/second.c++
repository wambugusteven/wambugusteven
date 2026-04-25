#include<iostream>
using namespace std;
int main () {
    int i = 9;
    int& m = i;
    cout << "value of i:" << i ;
    cout << "value of m:" << m;
    return 0;
}