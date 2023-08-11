#include <iostream>
using namespace std;

int binaryAddition(int num1, int num2)
{

    int sum = 0;
    int x = 0;
    int y = 1;
    while (num1 > 0 || num2 > 0)
    {
        int rem1 = num1 % 10;
        int rem2 = num2 % 10;
        if ((rem1 == 0 && rem2 == 1) || (rem1 == 1 && rem2 == 0))
        {
            if (x == 1)
            {
                y = y * 10;
                x = 1;
            }
            else
            {
                sum = sum + (y * 1);
                y = y * 10;
                x = 0;
            }
        }
        else if (rem1 == 1 && rem2 == 1)
        {
            if (x == 1)
            {
                sum = sum + (y * 1);
                y = y * 10;
                x = 1;
            }
            else
            {
                y = y * 10;
                x = 1;
            }
        }
        else
        {
            if (x == 1)
            {
                sum = sum + (y * 1);
                y = y * 10;
                x = 0;
            }
            else
            {
                y = y * 10;
                x = 0;
            }
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    if (x == 1)
    {
        sum = sum + (y * 1);
    }
    return sum;
}

int main()
{
    int num1, num2;
    cout << "Enter any two binary numbers:";
    cin >> num1 >> num2;
    int add = binaryAddition(num1, num2);
    cout << "Addition of Binary numbers " << num1 << " and " << num2 << " is " << add;
    return 0;
}
