/*
problem statement:Write a program which accept number from user and print that number of $ & *
on screen.
input: 3
output: $ * $ * $ *
*/
using namespace std;

#include<iostream>

class Print
{
     public:
                int no1;
      public:
      void PrintPattern(int no1)
      {
          int i=0;
          if(no1<0)
          {
               no1=-no1;
          }
          for(i=1;i<=no1;i++)
          {
               cout<<"$\t"<<"*\t";
          }
         
      }           
     
};
int main()
{
       int value1=0; 
               
       cout<<"enter number :"<<"\n";
       cin>>value1;   
       
       Print obj1;
       obj1.PrintPattern(value1);
}

