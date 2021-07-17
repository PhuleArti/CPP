/*
problem statement:Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int Start;
                int End;
      public:
      void DisplayRevRange(int Start,int End)
      {
          int i=0;
          for(i=End;i>=Start;i--)
          {
                cout<<i<<"\t";
          }
      }           
     
};
int main()
{
       int value1=0;
       int value2=0; 
               
       cout<<"enter start point"<<"\n";
       cin>>value1;   
       cout<<"enter end point"<<"\n";
       cin>>value2;   
       
       Display obj1;
       obj1.DisplayRevRange(value1,value2);
      
}

