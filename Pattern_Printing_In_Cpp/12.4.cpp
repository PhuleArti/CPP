/*
problem statement:Accept number from user and display below pattern.
Input : 4
Output : #1*#2*#3*#4*
*/
using namespace std;

#include<iostream>

class Display
{
      public:
                int no1;
                
      public:
      void DisplayPattern(int no1)
      {
            int i=0;
            if(no1<0)
            {
                 no1=-no1;
            }
            for(i=1;i<=no1;i++)
            {
                  cout<<"#"<<"\t"<<i<<"\t"<<"*"<<"\t";
            }
          
      }           
     
};
int main()
{
       int  value1=0;
               
       cout<<"enter value1"<<"\n";
       cin>>value1; 
          
       Display obj1; 
       obj1.DisplayPattern(value1);
}


