#include <bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    } // Your code here
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{
    string s;
    cin >> s;
    cout << getMaxOccuringChar(s) << endl;
    return 0;
}