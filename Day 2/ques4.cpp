/*Write a program to Check whether a number is palindrome. */

#include <iostream>
using namespace std;

int main(){
int num,x,r,rev=0;
cout<<"enter a number to check if it's palindrome or not :";
cin >> num;
x=num;
while (x>0)
{
    r = x%10;
    rev = (rev*10)+r;
    x = x/10;
}
if (rev==num)
{
    cout<<num<<" is a palindrome no. ";
}
else
{
    cout<<num<<" is not a palindrome no.";
}
    return 0;
}