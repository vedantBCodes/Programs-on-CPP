/*
Write a program to do basic string compression.
For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
Note : Consecutive count of every character in input string is less than equal to 9.

Input Format :
Input string S

Output Format :
Compressed string

Sample Input:
aaabbccdsa

Sample Output:
a3b2c2dsa

*/

#include <iostream>
using namespace std;

void compressTheString(char str[])
{
    int len = strlen(str);
    char str2[30];
    int x = 0;
    int i, j;
    for (i = 0; i < len;)
    {
        int cnt = 0;
        for (j = i; j < len; j++)
        {
            if (str[i] == str[j])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        if (cnt == 1)
        {
            str2[x] = str[i];
            x++;
            i++;
        }
        else
        {
            str2[x] = str[i];
            x++;
            str2[x] = char(cnt + 48);  //type casting  ASCII Value of 0 is 48 , 1 is 49 and so on
            x++;
            i = i + (cnt);
        }
    }
    cout << "String after compressing : " << str2;
}

int main()
{
    char str[60] = "aaabbccdsa";
    compressTheString(str);
    return 0;
}