/*
QUESTION-13:
            Write a program to calculate GCD of 2 number (i) with recursion (ii) without recursion
SOLUTION:
*/
#include<iostream>
#include <stdio.h>

using namespace std;

int GCD(int a, int b);
int main() 
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 13 WITH RECURSION~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    int a, b;
    cout<<"\nEnter the first integer: ";
    cin>>a;
    cout<<"\nEnter the second integer: ";
    cin>>b;
    cout<<"\nG.C.D of "<<a<<" and "<<b<<" is:\n"<<GCD(a, b);
    return 0;
}

int GCD(int a, int b) 
{
    if (b != 0)
        return GCD(b, a%b);
    else
        return a;
}