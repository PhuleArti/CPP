/*
problem statement:Write a program which accept number from user and print its numbers line.
input:4
output: -4 -3 -2 -1 0 1 2 3 4
*/
using namespace std;

#include<iostream>

class Pattern
{
     public:
                int no1;
      public:
      void PrintLine(int no1)
      {
           int i=0;
           for(i=-no1;i<=no1;i++)
           {
                 cout<<i<<"\t";
           }
      }           
     
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter number :"<<"\n";
       cin>>value1;   
       
       Pattern obj1;
       obj1.PrintLine(value1);
}

