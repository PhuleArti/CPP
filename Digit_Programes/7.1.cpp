/*
problem statement:Write a program which accept number from user and return the count of even
digits.
*/
using namespace std;

#include<iostream>

class Count
{
     public:
                int no1;
      public:
      int CountEven(int no1)
      {
           int Cnt=0;
           int Digit=0;
           if(no1<0)
           {
                no1=-no1;
           }
           while(no1!=0)
           {
                 Digit=no1%10;
                
                 if(Digit%2==0)
                 {
                       Cnt++;
                 }
                
                 no1=no1/10;
           }
           return Cnt;
      }           
     
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Count obj1;
       ret=obj1.CountEven(value1);
       cout<<"Count of even numbers is:"<<ret<<"\n";
}

