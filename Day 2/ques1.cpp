/*Write a program to Find sum of digits of a number. */

#include <iostream>
using namespace std;

int main(){
int num, sum = 0;
cout<<"enter a number to find sum of digits :";
cin>> num;
while (num>0)
{
    sum += num%10;
    num = num/10;
}
cout<<"sum of digits is : "<<sum;
    return 0;
}