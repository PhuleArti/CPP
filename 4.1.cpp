/*
problem statement:Write a program which accept number from user and display its multiplication of
factors.
Input :
Output : 12
144 (1 * 2 * 3 * 4 * 6)

*/
using namespace std;

#include<iostream>

class Factor
{
     public:
                int no1;
                
      public:
      int MultFactor(int no1)
      {
            int i=0;
            int Mult=1;
            
            if(no1<0)
            {
                 no1=-no1;
            }
            
            if(no1==0)
            {
                  return 0;
            }
            
            for(i=1;i<no1;i++)
            {
                 if(no1%i==0)
                 {
                       Mult=Mult*i;
                 }
            }
            
            return Mult;
     }     
};
int main()
{
       int value1=0; 
       int ret=0;
               
       cout<<"enter first number"<<"\n";
       cin>>value1;   
       
       Factor obj1;
       ret=obj1.MultFactor(value1);
       cout<<"Multiplication of factors of given number:"<<ret<<"\n";
}

