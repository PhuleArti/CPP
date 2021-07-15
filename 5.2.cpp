/*
problem statement:Write a program which accept one number from user and check whether that
number is greater than 100 or not.

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
           if(no1>100)
           {
                 return 1;
           }
           else
           {
                return 0;  
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
            cout<<"number is greater than 100";
       }
       else
       {
             cout<<"number is not greater  than 100";
       }
     
}

