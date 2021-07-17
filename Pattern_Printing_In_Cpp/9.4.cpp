/*
problem statement:Write a program which accepts N from user and print all odd numbers up to N.
input : 7
output:  1    3   5
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
     
      public:
      void OddDisplay(int no1)
      {
          int i=0;
          
          if(no1<0)
          {
               no1=-no1;
          }
          for(i=1;i<=no1;i++)
          {
              if(i%2!=0)
              {
                    cout<<i<<"\t";
              }
          }
      }           
     
};
int main()
{
       int value1=0; 
               
       cout<<"enter  number :"<<"\n";
       cin>>value1;   
       
       Display obj1;
       obj1.OddDisplay(value1);
      
}

