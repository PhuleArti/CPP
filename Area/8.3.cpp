/*
problem statement:Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
input: 4
output 4000 
*/
using namespace std;

#include<iostream>

class Conversion
{
     public:
                float  no1;
      public:
      float KmToMeter( float  Km)
      {
           float  Meter=0;
           
           Meter=Km*1000; 
           
           return Meter;      
      }              
};
int main()
{
       float  km=0; 
       float  ret=0;
               
       cout<<"enter Kilometer"<<"\n";
       cin>>km;   
       
       Conversion obj1;
       ret=obj1.KmToMeter(km);
       cout<<"Meter conversoin is:"<<ret<<"\n";
}

