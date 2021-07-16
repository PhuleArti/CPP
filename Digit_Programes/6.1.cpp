/*
problem statement:Write a program which accept number from user and display its digits in reverse
order.
*/
using namespace std;

#include<iostream>

class Display
{
      public:
                 int no1;
      public:
      int RevDigit(int no1)
      {
            int Digit=0;
            int Rev=0;
            if(no1<0)
            {
                  no1=-no1;
            }
            while(no1!=0)
            {
                 Digit = no1 % 10;   
                 
                 Rev = Rev *10 + Digit; 
                    
                 no1 = no1 / 10;
            }
            return Rev;
      }           
};
int main()
{
       int value1=0;
       int ret=0;
                       
       cout<<"enter number"<<"\n";
       cin>>value1;   
     
       Display obj1;
       ret=obj1.RevDigit(value1);
       cout<<"reverse digits of given number are:"<<ret<<"\n";
}

