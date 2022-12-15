/*
QUESTION-12:
            Write a program to display fibonacci series (i)using recursion, (ii) using iteration
SOLUTION:
*/
#include <iostream>
using namespace std;

int Fibonacci(const int& n)
{
    if (n <= 1)
        return 0;
    else if (n == 2 || n == 3)
        return 1;
    else
        return (Fibonacci(n - 2) + Fibonacci(n - 1));
}

int main()
{
    int num, f1 = 0, f2 = 1, f3;
    char choice;

    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 12~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    cout << " Enter the term till you want to display  :  ";
    cin >> num;

    if (num <= 0)
        cout << "\n Please don't enter any negative number or 0\n\n";
    else
    {
        cout << "\n What process would you like : \n 1. Using recursion \n 2. Using iteration";
        cout << "\n\n Enter your choice :  ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            cout << "\n Fibonacci Series till nth term is : \n\n  ";
            for(int i = 1; i <= num; i++)
                cout << Fibonacci(i) << '\t';
            break;

        case '2':
            cout << "\n Fibonacci Series till nth term is : \n\n  " << f1 << "\t" << f2;
            for (int i = 3; i <= num; i++)
            {
                f3 = f1 + f2;
                cout << "\t" << f3;
                f1 = f2;
                f2 = f3;
            }
            break;

        default:
            cout << "\n\n invalid input";
        }
    }
    cout << endl;
}