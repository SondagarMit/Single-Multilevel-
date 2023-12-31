#include<iostream.h>
#include<conio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
	return 1;
    else
	return n * factorial(n - 1);
}

void main()
{
    int num;
    clrscr();
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
	cout << "Factorial is not defined for negative numbers.";
    } else
    {
	cout << "Factorial of " << num << " is " << factorial(num);
    }

    getch();
}
