/*
problem statement:
                            Accept one number and check whether is is divisible by 5 or not.
*/
using namespace std;

#include<iostream>

#define TRUE 1;
#define FALSE 0;

class Divisible
{
      public:
                 int no1;
               
       public:
       bool divide(int no1)
       {
            if(no1<0)
            {
                no1=-no1;
            }
            if(no1==0)
            {
                  return 0;
            }
            
            int ans=no1%5;
            
            if(ans==0)
            {
                  return 1;
            }
            else
            {
                 return 0;
            }
       }
       
                      
};
int main()
{
      int value1=0;
      bool ret=FALSE;
                
       cout<<"enter first number"<<"\n";
       cin>>value1;
               
       Divisible obj1;
       ret= obj1.divide(value1);
       
       if(ret==1)
       {
             cout<<"number is divisible by 5";
       }
       else
       {
            cout<<"number is not divisible by 5";
       }      
}

