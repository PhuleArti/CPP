/*
problem statement:Write a program which accept range from user and display all even numbers in
between that range.
input: 2    8
output: 2   4   6  8
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int Start;
                int End;
      public:
      void DisplayEvenRange(int Start,int End)
      {
             int i=0;
             if(Start>End)
             {
                   cout<<"invalid input";
             }
             for(i=Start;i<=End;i++)
             {
                   if(i%2==0)
                   {
                       cout<<i<<"\t";
                   }   
             }  
      }           
     
};
int main()
{ 
        int value1=0;
        int value2=0;
                      
       cout<<"Enter start point:"<<"\n";
       cin>>value1;  
       
       cout<<"enter End point"<<"\n";
       cin>>value2;    
       
       Display obj1;
       obj1.DisplayEvenRange(value1,value2);
}

