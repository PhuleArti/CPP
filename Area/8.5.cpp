/*
problem statement:Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
*/
using namespace std;

#include<iostream>

class Conversion
{
     public:
                int Feet;
      public:
      double SqFeetToSqMeter(int Feet)
      {
          double SqMeter=0.0;
          SqMeter=Feet*0.0929;
          return SqMeter;
      }           
     
};
int main()
{
       int  Feet=0.0;
       double ret=0.0; 
               
       cout<<"enter Area in square feet"<<"\n";
       cin>>Feet;   
       
       Conversion obj1;
       ret= obj1.SqFeetToSqMeter(Feet);
       cout<<"Area in Square Meter is:"<<ret<<"\n";
      
}

