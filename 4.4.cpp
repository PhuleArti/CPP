/*
problem statement:Write a program which accept number from user and display summation of all its non factors.
input:12
output: 50
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
                
      public:
      int SumNonFactor(int no1)
      {
            int i=0;
            int sum=0;
            
            if(no1<0)
            {
                 no1=-no1;
            }
            
           for(i=1;i<no1;i++)
           {
                if(no1%i !=0)
                {
                        sum=sum+i;     
                }
           }
           return sum;
      }           
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"Enter number :"<<"\n";
       cin>>value1;   
       
       Display obj1;
       ret=obj1.SumNonFactor(value1);
       cout<<"Summation of non factors is:"<<ret<<"\n";
}

