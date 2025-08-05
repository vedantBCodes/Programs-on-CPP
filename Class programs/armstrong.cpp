#include<iostream>
using namespace std;

class Armstrong {
private:
    int num;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void process() {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " is an Armstrong number.";
        } else {
            cout << num << " is not an Armstrong number.";
        }
    }
};

int main() {
    Armstrong obj;
    obj.input();
    obj.process();
    return 0;
}
