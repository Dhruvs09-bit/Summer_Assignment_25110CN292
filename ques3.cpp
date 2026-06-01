#include<iostream>
using namespace std;

int main (){
int n;
long long factorial = 1;

cout<<"enter a +ve number :" ;
cin >> n; 
if (n<0)
{
    cout<< "ERROR!!! factorial of a negative number doesn't exist " <<endl;

} 
else
{
  for (int i = n; i >= 2; i--)
  {
    factorial = factorial*i;
  }
  cout << n<<"! :"<< factorial;
    
}
    return 0;
}