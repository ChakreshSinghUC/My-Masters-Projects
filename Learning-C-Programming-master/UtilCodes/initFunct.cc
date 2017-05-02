#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, World!\nThe main function, implicitally returns 0.";
    //return -1;
    SmartPtr<int> ptr(new int());
}