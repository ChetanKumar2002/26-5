#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the values of a nand b: ";
    cin>>a>>b;
    c = a;
    a = b;
    b = c;
    cout<<"After swapping, the values of a and b are: "<<a<<" "<<b<<endl;
    return 0;
}