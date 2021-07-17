/*
problem statement:Write a program which accept N and print first 5 multiples of N.
input: 4
output: 4    8    12    16     20
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
      public:
      void DisplayMultiple(int no1)
      {
          int i=0;
          int Cnt=0; 
          if(no1<0)
          {
               no1=-no1;
          }
          for(i=1;i<=5;i++)
          {
               Cnt=no1*i;
               cout<<Cnt<<"\t";
          }
      }           
     
};
int main()
{
       int value1=0; 
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Display obj1;
       obj1.DisplayMultiple(value1);
      
}

