/*
problem statement:Write a program to find even factorial of given number.
*/
using namespace std;

#include<iostream>

class Factor
{
     public:
                int no1;
                
      public:
      int EvenFactorial(int no1)
      {
           int i=0;
           int Factor=1;
           if(no1<0)
           {
                no1=-no1;
           }
           for(i=1;i<=no1;i++)
           {
                if(i%2==0)
                {
                    Factor=Factor*i;
                }
           }
           return Factor;
      }              
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter Start point"<<"\n";
       cin>>value1;   
        
        Factor obj1;
     
        ret=obj1.EvenFactorial(value1);
        cout<<"even factorial of given number is:"<<ret<<"\n";
}

