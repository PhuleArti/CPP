/*
problem statement: write a cpp program to divide two numbers.

*/
using namespace std;

#include<iostream>

class Division
{
      public:
                 int  no1;
                 int  no2;
       public:
       double divide(int  no1,int  no2)
       {
             if(no1==0||no2==0)
             {
                  return 0;
             }
           
             return ((double)no1/(double)no2);
       }          
};
int main()
{
       double ret=0.0;
       int  value1=0;
       int  value2=0;
       
       cout<<"enter first number"<<"\n";
       cin>>value1;
       
       cout<<"enter second number"<<"\n";
       cin>>value2;
       
       Division obj1;
       
       ret=obj1.divide(value1,value2);
       
       cout<<"division is : "<<ret<<"\n";
       
}

