/*
problem statement:Write a program which accept number from user and return difference between
summation of all its factors and non factors.
input:12
output: -34(16-50)
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
                
      public:
      int Difference(int no1)
      {
            int i=0;
            int sum=0;
            int sum1=0;
            
            if(no1<0)
            {
                 no1=-no1;
            }
            
           for(i=1;i<no1;i++)
           {
                if(no1%i ==0)
                {
                        sum=sum+i;    
                }
                else if(no1%i !=0)
                {
                       sum1=sum1+i;
                }
           }
           return sum-sum1;
      }           
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Display obj1;
       ret=obj1.Difference(value1);
       cout<<"Difference between Summation offactors & non factors is:"<<ret<<"\n";
}

