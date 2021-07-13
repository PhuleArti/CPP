/*
problem statement:Write a program which accept one number from user and print that number of even numbers on screen.

*/
using namespace std;

#include<iostream>

class Even
{
     public:
                int no1;
                
      public:
      void PrintEven(int no1)
      {
            int i=0;
            
            if(no1<= 0)
            {
                  return;
            }
            
           for(i=1; i<=no1; i++)
           {
                     cout<<i*2<<"\t";
           }
      }           
};
int main()
{
       int value1=0; 
               
       cout<<"Enter number :"<<"\n";
       cin>>value1;   
       
       Even obj1;
       obj1.PrintEven(value1);
     
}

