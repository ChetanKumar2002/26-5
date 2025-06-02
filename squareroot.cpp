#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    double finalvalue;
    if (a < 0) 
    {
        cout << "Error: Cannot calculate square root of a negative number." << endl;
    } 
    else 
    {
        finalvalue = sqrt(a);
        cout << "The square root of " << a << " is " << finalvalue << endl;
    }
    return 0;
}