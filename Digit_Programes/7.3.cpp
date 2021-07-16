/*
problem statement:Write a program which accept number from user and return the count of digits in
between 3 and 7.
*/
using namespace std;

#include<iostream>

class Count
{
     public:
                int no1;
      public:
      int CountNumbers(int no1)
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
                
                 if(Digit>3&&Digit<7)
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
       ret=obj1.CountNumbers(value1);
       
       cout<<"Count of numbers in betwwen 3 to 7 are:"<<ret<<"\n";
}

