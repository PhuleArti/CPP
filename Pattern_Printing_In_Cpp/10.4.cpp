/*
problem statement:Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int Start;
                int End;
      public:
      int SumOfEvenRange(int Start,int End)
      {
           int i=0;
           int Sum=0;
        
           for(i=Start;i<=End;i++)
           {
               if(i%2==0)
               {
                    Sum=Sum+i;
               }    
           }  
           return Sum;
      }              
};
int main()
{
       int value1=0; 
       int value2=0;
       int ret=0;
               
       cout<<"enter Start point"<<"\n";
       cin>>value1;   
        cout<<"enter End point"<<"\n";
       cin>>value2;  
          if(value1>value2)
           {
                cout<<"invalid input";
                return 0;         
           } 
       
        Display obj1;
        ret=obj1.SumOfEvenRange(value1,value2);
        cout<<"Sum of Even numbers in range are:"<<ret<<"\n";
}

