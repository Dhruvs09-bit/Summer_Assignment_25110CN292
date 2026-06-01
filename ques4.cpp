#include<iostream>
using namespace std;

int main (){
int n;
cout << "enter a digit :";
cin >> n;
 string m = to_string(n);
 int digit = m.length();
  
 cout<< "number of digits in" <<n <<" is "<<digit;

    return 0;
}