/*
problem statement:Write a program which accept number from user and display all its non factors.
input:12
output: 5 7 8 9 10 11
*/
using namespace std;

#include<iostream>

class Display
{
     public:
                int no1;
                
      public:
      void DisplayNonFactor(int no1)
      {
            int i=0;
            
            if(no1<0)
            {
                no1=-no1;
            }
            
           cout<<"Non Factors of given number are:"<<"\n"; 
           
           for(i=1 ; i<no1; i++)
           {
                if( no1 % i != 0)
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
       obj1.DisplayNonFactor(value1);
     
}

