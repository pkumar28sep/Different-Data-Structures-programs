#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char b[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(b[s]!=b[e])
        {
            return 0;
        }
        else{
        s++;
        e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    int n;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Palindrome or Not: "<<checkPalindrome(name,n)<<endl;
    return 0;
}