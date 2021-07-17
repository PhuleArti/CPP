/*
problem statement:Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
input: 4
output: 50.24
*/
using namespace std;

#include<iostream>

class Area
{
      public:
                float radius;
      public:
      double CircleArea(float radius)
      {
          float pi=3.14;
          double Area=0.0;
        
          Area=pi*radius*radius;
          return Area;
      }           
     
};
int main()
{
       float Radius=0.0;
       double ret=0.0; 
               
       cout<<"enter radius of a circle"<<"\n";
       cin>>Radius;   
       
       Area obj1;
       ret= obj1.CircleArea(Radius);
      
       cout<<"Area of a circle is"<<ret<<"\n";
}

