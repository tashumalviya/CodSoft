#include<iostream>
using namespace std;

int main(){
    double a, b, result;
    char arithmatic_operator;
    cout<<"------Simple Calculator------"<<endl;
     cout<<"Enter first number : ";
     cin>>a;
      cout<<"Enter Operator : ";
     cin>>arithmatic_operator;
      cout<<"Enter second number : ";
     cin>>b;
     
     if (arithmatic_operator == '+')
          result = a + b;
      
    else if (arithmatic_operator == '-')
         result = a - b;
         
    else if (arithmatic_operator == '*')
         result = a * b; 

    else if (arithmatic_operator == '/')
         result = a / b; 
         
     cout<<result;
   
  return 0;
}