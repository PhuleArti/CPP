/*
problem statement:Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
*/
using namespace std;

#include<iostream>

class Conversion
{
     public:
                int doller;
                
      public:
      int DollerToINR(int doller)
      {
             int rupee=0;
             rupee=doller*70;
             return rupee;
      }           
     
};
int main()
{ 
        int value1=0;
        int ret=0;
                      
       cout<<"Enter Amount in doller:"<<"\n";
       cin>>value1;   
       
       Conversion obj1;
       ret=obj1.DollerToINR(value1);
       cout<<"Amount in ruppes after conversion :"<<ret<<"\n";
}

