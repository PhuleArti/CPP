/*
problem statement:Write a program which accept three numbers and print its multiplication.
input:  5  0   7
output : 35
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
      public:
      int Multiply(int no1,int no2,int no3)
      {
           int Ans=0;
           if(no1==0 && no2==0 && no3==0)
           {
                 return 0;
           }
           if(no1==0)
           {
                 no1=1;
           }
           if(no2==0)
           {
                no2=1;
           }
           if(no3==0)
           {
                no3=1;
           }
           Ans=no1*no2*no3;
            return Ans;
      }           
     
};
int main()
{
       int value1=0; 
       int value2=0;
       int value3=0;
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       cout<<"enter second number"<<"\n";
       cin>>value2;   
       cout<<"enter third number"<<"\n";
       cin>>value3;   
       
       Display obj1;
       ret=obj1.Multiply(value1,value2,value3);
       cout<<"Multiplication of numbers  is:"<<ret<<"\n";
}

