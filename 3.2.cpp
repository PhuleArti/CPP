/*
problem statement:Write a program which accept number from user and print even factors of that
number.

*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
      public:
      void DisplayFactor(int no1)
      {
            int i=0;
            
            if(no1<0)
            {
                 no1=-no1;
            }
             
            cout<<"Even factors of given number are:\n";
            
            for(i=1 ; i<=no1 ; i++)
            {
                  
                  if ( no1%i==0 && i%2==0 )
                  {
                       cout<<i<<"\t";         
                  }
            }
      }           
};
int main()
{
       int value1=0; 
               
       cout<<"Enter number"<<"\n";
       cin>>value1;   
       
       Display obj1;
       
       obj1.DisplayFactor(value1);
     
}

