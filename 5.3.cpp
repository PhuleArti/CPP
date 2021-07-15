/*
problem statement:Write a program which accept two numbers and check whether numbers are
equal or not.
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
      bool ChkEqual(int no1,int no2)
      {
            if(no1==no2)
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
       int value2=0;
       bool ret=FALSE;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
        cout<<"enter second number"<<"\n";
       cin>>value2;   
       
       Display obj1;
       ret=obj1.ChkEqual(value1,value2);
       if(ret==1)
       {
              cout<<"both the numbers are equal";
       }
       else
       {
            cout<<"both numbers are not equal";
       }
}

