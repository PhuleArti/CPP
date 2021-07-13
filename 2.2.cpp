/*
problem statement:accept number from user & print number of times “*” on screen.

*/
using namespace std;

#include<iostream>

class Print
{
      public:
                 int no1;
               
       public:
       void print(int no1)
       {
             int i=0;
             
             if(no1<=0)
             {
                  no1=-no1;
             }
             
             while(no1>i)
             {
                  cout<<"*\t";
                  no1--;
             }
        }     
                      
};
int main()
{
       int value1=0; 
               
       cout<<"Enter value: "<<"\n";
       cin>>value1;        
       
       Print obj1;
       obj1.print(value1);      
}

