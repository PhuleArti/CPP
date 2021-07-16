/*
problem statement:Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
*/
using namespace std;

#include<iostream>

class Count
{
     public:
                int no1;
      public:
      int SumDigits(int no1)
      {
           int Sum1=0;
           int Sum2=0;
           int Digit=0;
           
           if(no1<0)
           {
                no1=-no1;
           }
           
           while(no1!=0)
           {
                 Digit=no1%10;
                
                 if(Digit%2==0)
                 {
                      Sum1=Sum1+Digit;
                 }
                 else if(Digit%2!=0)
                 {
                      Sum2=Sum2+Digit;
                 }
                
                 no1=no1/10;
           }
           return Sum1-Sum2;
      }           
     
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Count obj1;
       ret=obj1.SumDigits(value1);
       cout<<"Difference between Summation of even and odd digits are:"<<ret<<"\n";
}

