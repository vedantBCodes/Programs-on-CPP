#include<iostream>
using namespace std;
/* A number is called an Armstrong number if the sum of its digits each raised to the power of the number of digits equals the number itself.*/
class Armstrong {
private:
    int num;

public:
    void input() 
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void process() 
   {
    int temp1 = num;
    int cnt=0;
    while(temp1>0)
    {
        cnt++;
        temp1=temp1/10;
    }
    int temp2 = num;
    int sum = 0;
    while(temp2 > 0)
    {
        int digit = temp2 % 10;
        sum = sum + pow(digit,cnt);
        temp2=temp2/10;
    }
    if (sum == num) 
    {
        cout << num << " is an Armstrong number.";
    }
    else 
    {
        cout << num << " is not an Armstrong number.";
    }
    }
};

int main() {
    Armstrong obj;
    obj.input();
    obj.process();
    obj.armstrong
    return 0;
}
