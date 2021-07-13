/*
problem statement:Accept on number from user if number is less than 10 then print
“Hello” otherwise print “Demo”.

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
           
            if(no1<10)
            {
                 cout<<"Hello";
            }    
            else
            {
                 cout<<"Demo";
            }
        }     
                      
};
int main()
{
       int value1=0; 
               
       cout<<"enter first number"<<"\n";
       cin>>value1;        
       
       Print obj1;
       obj1.print(value1);      
}

