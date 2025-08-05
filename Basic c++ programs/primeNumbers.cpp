#include<iostream>
#include<cmath> // for sqrt
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check whether it is prime or not: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number.";
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number.";
            return 0;
        }
    }

    cout << num << " is a prime number.";
    return 0;
}
