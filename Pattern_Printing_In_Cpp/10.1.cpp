/*
problem statement:Write a program which accept range from user and display all numbers in between
that range.
input: 4
output: 1  2   3  4
*/
using namespace std;

#include<iostream>

class Display
{
      public:
                int Start;
                int End;
      public:
      void DisplayRange(int Start,int End)
      {
            int i=0;
            
           for(i=Start;i<=End;i++)
           {
                cout<<i<<"\t";
           }
      }           
     
};
int main()
{
       int  value1=0;
       int value2=0; 
               
       cout<<"enter start value1"<<"\n";
       cin>>value1; 
       cout<<"enter end value2"<<"\n";
       cin>>value2; 
       if(value1>value2)
            {
                   cout<<"invalid input";
                   return 0;
            }    
       
       Display obj1;
       obj1.DisplayRange(value1,value2);
}

