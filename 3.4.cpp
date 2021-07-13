/*
problem statement:Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d

*/
using namespace std;

#include<iostream>

class Conversion
{
     public:
                int no1;
                
      public:
      char Convert(char ch)
      {
           if(ch>='A' && ch<='Z')
           {
                 ch=ch+32;
           }
           else  if(ch>='a' && ch<='z')
           {
                 ch=ch-32;
           }
           return ch;
      }           
};
int main()
{
       char ch='\0';
       char ret='\0'; 
               
       cout<<"Enter Character"<<"\n";
       cin>>ch;   
       
       Conversion obj1;
       
       ret = obj1.Convert(ch);
       cout<< "Character after converting case :"<<ret<<"\n";
}

