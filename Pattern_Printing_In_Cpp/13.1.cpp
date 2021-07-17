/*
problem statement:
Accept number of rows and number of columns from user and display
below pattern.
input:Rows:5  Columns:5
output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
using namespace std;

#include<iostream>

class Display
{
      public:
                int Rows;
                int Columns;
                
      public:
      void DisplayPattern(int Rows,int Columns)
      {
            int i=0;
            int j=0;
            if(Rows<0)
            {
                 Rows=-Rows;
            }
            if(Columns<0)
            {
                 Columns=-Columns;
            }
            for(i=1;i<=Rows;i++)
            {
                for(j=1;j<=Columns;j++)
                {
                      cout<<"*"<<"\t";
                 }  
                 cout<<"\n";   
            }
          
      }           
     
};
int main()
{
       int  value1=0;
       int value2=0;
               
       cout<<"enter rows"<<"\n";
       cin>>value1; 
       cout<<"enter columns"<<"\n";
       cin>>value2; 
          
       Display obj1; 
       obj1.DisplayPattern(value1,value2);
}


