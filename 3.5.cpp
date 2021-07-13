/*
problem statement:Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE

*/
using namespace std;

#include<iostream>

#define TRUE 1
#define FALSE 0

class Character
{
     public:
                int no1;
                
      public:
      bool ChkChar(char ch)
      {
           if(
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
           )
           {
                   return 1;
           }
           else
           {
                 return 0;
           }
      }           
};
int main()
{
       char ch='\0';
       bool ret='\0'; 
               
       cout<<"Enter Character :"<<"\n";
       cin>>ch;   
       
       Character obj1;
       
       ret=obj1.ChkChar(ch);
       
       if(ret==1)
       {
            cout<<"character is vowel";
       }
       else
       {
             cout<<"character is not vowel";
       }
}

