/*
problem statement:Write a program which accept total marks & obtained marks from user and
calculate percentage.
*/
using namespace std;

#include<iostream>

class Percentage
{
      public:
                int no1;
                int no2;
      public:
      float Percent( int no1,int no2)
      {
           float  Ans =0.0;
           
           Ans= ((float)no2 * 100) /(float) no1;
           
            return Ans;   
      } 
               
};
int main()
{
       int Total_marks=0; 
       int Obtain_marks=0;
       float ret=0.0;
               
       cout<<"enter total marks:"<<"\n";
       cin>>Total_marks;  
       cout<<"enter obtain marks of a student:"<<"\n";
       cin>>Obtain_marks;    
       
      Percentage obj1;
      
       ret=obj1.Percent(Total_marks , Obtain_marks);
       
       cout<<"Percentage of marks are:"<<ret<<"\n";
       
}

