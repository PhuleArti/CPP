/*
problem statement:Program to print 5 times “Marvellous” on screen.

*/
using namespace std;

#include<iostream>

class Print
{
      public:
                 int no1;
               
       public:
       void print(int no1)
       {
             int i=0;
             if(no1<=0)
             {
                  no1=-no1;
             }
             for(i=1;i<=no1;i++)
             {
                  cout<<"Marvellous"<<"\n";
             }
        }     
                      
};
int main()
{
       int value1=5;         
       //cout<<"enter first number"<<"\n";
       //cin>>value1;        
       Print obj1;
       obj1.print(value1);      
}

