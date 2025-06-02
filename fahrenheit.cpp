#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"Enter the value in Fahrenheit: ";
    cin>>f;
    c = (f - 32) * 5 / 9;
    cout<<"The value in Celsius is: "<<c<<endl;
    return 0;
}