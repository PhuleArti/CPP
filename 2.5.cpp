/*
problem statement:Accept number from user and check whether number is even or
odd.

*/
using namespace std;

#include<iostream>

#define TRUE 1
#define FALSE 0

class Evenodd
{
     public:
                int no1;
      public:
      bool ChkEvenOdd(int no1)
      {
            int Ans= no1%2;
            if(Ans==0)
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
               
       cout<<"Enter number:"<<"\n";
       cin>>value1;   
       
       Evenodd obj1;
       ret=obj1.ChkEvenOdd(value1);
       
       if(ret==1)
       {
             cout<<"Number is Even\n";
       }
       else
       {
             cout<<"Number is odd\n";
       }
}

