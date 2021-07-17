/*
problem statement:Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
*/
using namespace std;

#include<iostream>

class Conversion
{
     public:
                float Temp;
      public:
      double FhToCs(float Temp)
      {
          double Celcius=0.0;
           
          Celcius=(Temp-32) * 5/9;
           
          return Celcius;
      }           
     
};
int main()
{
       float temp=0.0;
       double ret=0.0;
               
       cout<<"enter temperature in fh"<<"\n";
       cin>>temp;   
       
       Conversion obj1;
        ret=obj1.FhToCs(temp);
        cout<<"Temperature aftre conversion from fh to cs is:"<<ret<<"\n";
      
}

