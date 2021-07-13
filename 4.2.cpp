/*
problem statement:Write a program which accept number from user and display its factors in
decreasing order.
Input :12
Output : 6 4 3 2 1
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
      public:
      void FactorRev(int no1)
      {
            int i=0;
            
            if(no1<0)
            {
                 no1=-no1;
            }
            
            if(no1==0)
            {
                  return;
            } 
            
            cout<<"Reverse factors are:\n";
            
           for( i=no1/2 ; i >=1; i--)
           {
                if(no1%i==0)
                {
                        cout<<i<<"\t";         
                }
           }
      }           
};
int main()
{
       int value1=0; 
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Display obj1;
       obj1.FactorRev(value1);
     
}

