/*
problem statement:Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input :5.3   9.78
Output :51.834
*/
using namespace std;

#include<iostream>

class Area
{
     public:
                float Height;
                float Width;
      public:
      double AreaRectangle(float Height,float Width)
      {
          double Area=0.0;
           
          Area=Height*Width;
           
          return Area;          
      }           
     
};
int main()
{
       float height=0.0;
       float width=0.0;
       double ret=0.0; 
               
       cout<<"enter height"<<"\n";
       cin>>height;  
       
       cout<<"enter weight"<<"\n";
       cin>>width;    
       
       Area obj1;
       ret=obj1.AreaRectangle(height,width);
       cout<<"Area of a rectangle"<<ret<<"\n";
}

