#include <iostream>
#include <string.h>
using namespace std;

void countFrequency(char str[])
{
    int cnt1, cnt2;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        cnt1 = 0;
        for (int k = (i - 1); k >= 0; k--)
        {
            if (str[i] == str[k])
            {
                cnt1++;
            }
        }
        if ((cnt1 == 0) && (str[i] != ' '))
        {
            cnt2 = 0;
            for (int j = 0; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    cnt2++;
                }
            }
            cout << str[i] << " occurs " << cnt2 << " times" << endl;
        }
    }
}
int main()
{
    char str[40];
    cout << "Enter a string:";
    cin.getline(str, 40);
    countFrequency(str);
    return 0;
}