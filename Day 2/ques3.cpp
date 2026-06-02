/*Write a program to Find product of digits. */

#include <iostream>
using namespace std;

int main(){
int num,rem, product = 1;
cout<<"enter a number : ";
cin>> num;
while (num!= 0)
{
    rem = num%10;
    num /= 10;
    product *= rem ;
}
cout<<"product of digits is : " <<product;
    return 0;
}