/*
problem statement:Write a program which accept number from user and return multiplication of all
digits.
*/
using namespace std;

#include<iostream>

class Count
{
     public:
                int no1;
      public:
      int MultDigits(int no1)
      {
           int Mult=1;
           int Digit=0;
           
           if(no1<0)
           {
                no1=-no1;
           }
  
           while(no1!=0)
           {
                 Digit=no1%10;
                 if(Digit==0)
                 {
                      Digit=1;
                 }
                 Mult=Mult*Digit;
                 no1=no1/10;
           }
           return Mult;
      }           
     
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Count obj1;
       ret=obj1.MultDigits(value1);
       cout<<"Multiplication of all digits is:"<<ret<<"\n";
}

