#include<iostream>
using namespace std;
void primeFactorization(int num)  //Wrost approach
{
    int arr[30],x,i=0,j,cnt;
    for(j=2;j<=num;j++)
    {
        cnt=0;
        for(int k=1;k<=j;k++)
        {
        if(j%k==0)
        {
            cnt++;
        }
        }
        if(j==num)
        {
            if(cnt==2)
            {
                cout<<"Since "<<num<<" is a prime number,it has no prime factors";
                exit(0);
            }
        }
        if(cnt==2)
        {
            arr[i]=j;
            i++;
        }
    }
    i=0;
    cout<<"Prime factors of "<<num<<" are:";
   while(num>1)
    {
        if(num%arr[i]==0)
        {
            cout<<arr[i]<<" ";
            num=num/arr[i];
        }
        else
         {
             i++;
         }
    }
}
bool isPrime(int num)
{
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

void primeFactorization2(int num)  //Best approach
{
    if(isPrime(num))
    {
        cout << "Since " << num << " is a prime number, it doesn't have any prime factors other than itself.\n";
        return;
    }

    cout << "Prime factors: ";
    for(int i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            cout << i << " ";
            num /= i;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    primeFactorization2(num);
}
