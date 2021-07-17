/*
problem statement:Write a program which returns difference between Even factorial and odd factorial
of given number.
*/
using namespace std;

#include<iostream>

class Factor
{
     public:
                int no1;
                
      public:
      int FactorialDifference(int no1)
      {
           int i=0;
           int Factor1=1;
           int Factor2=1;
           if(no1<0)
           {
                 no1=-no1;
           }
           for(i=1;i<=no1;i++)
           {
                if(i%2==0)
                {
                    Factor1=Factor1*i;
                }
                else if(i%2!=0)
                {
                     Factor2=Factor2*i;
                }
           }
           return Factor1-Factor2;
      }              
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter Number"<<"\n";
       cin>>value1;   
        
        Factor obj1;
     
        ret=obj1.FactorialDifference(value1);
        
        cout<<" factorial difference of odd and even factorial of given number is:"<<ret<<"\n";
}

