/*
problem statement:
Accept number from user and below pattern.
input:5
output: A  B  C   D   E

*/
using namespace std;

#include<iostream>

class Display
{
      public:
                int no1;
                
      public:
      void DisplayPattern(int no1)
      {
            int i=0;
            char ch='A';
           if(no1<0)
           {
                no1=-no1;
           }
            for(i=1;i<=no1;i++)        //1
            {
                cout<<ch++;
            }
          
      }           
     
};
int main()
{
       int  value1=0;
               
       cout<<"enter number"<<"\n";
       cin>>value1; 
            
       Display obj1; 
       obj1.DisplayPattern(value1);
}


