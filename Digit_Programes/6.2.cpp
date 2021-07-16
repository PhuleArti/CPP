/*
problem statement:Write a program which accept number from user and check whether it contains 0
in it or not.

*/
using namespace std;

#include<iostream>

#define TRUE 1
#define FALSE 0

class Display
{
     public:
                int no1;
      public:
      bool ChkNumber(int no1)
      {
          int  Digit=0;
         
          while(no1!=0)
          {
                Digit=no1%10;
               
                if(Digit==0)
                {
                     return 1;
                }
                else
                {
                      return 0;
                }
          }
      }           
};
int main()
{
       int value1=0;
       bool ret=FALSE; 
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Display obj1;
       ret=obj1.ChkNumber(value1);
       if(ret==1)
       {
            cout<<"value contains zero in it";
       }
       else
       {
             cout<<"value does not contains zero in it";
       }
     
}

