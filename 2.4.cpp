/*
problem statement:Accept two numbers from user and display first number in second
number of times.

*/
using namespace std;

#include<iostream>

class Print
{
      public:
                 int no1;
               
       public:
       void print(int no1,int no2)
       {
            int i=0; 
            
            if(no2<0)
            {
                 no2=-no2;
            }
            
            for(i=1;i<=no2;i++)
            {
                cout<<no1<<"\t";
            }
       }     
                      
};
int main()
{
       int value1=0; 
       int value2=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
        cout<<"enter second number"<<"\n";
       cin>>value2;             
       
       Print obj1;
       obj1.print(value1,value2);      
}

