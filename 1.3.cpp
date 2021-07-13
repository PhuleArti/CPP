/*
problem statement:
                            Program to print 5 to 1 numbers on screen.
*/
using namespace std;

#include<iostream>

class Display
{
      public:
                 int no1;
               
       public:
       void display(int no1)
       {
             int i=no1;
             if(no1<=0)
             {
                  no1=-no1;
             }
             for(i=no1;i>=1;i--)
             {
                  cout<<i<<"\t";
             }
        }     
                      
};
int main()
{
       int value1=5;         
      
       Display obj1;
       
       obj1.display(value1);      
}

