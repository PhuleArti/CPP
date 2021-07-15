/*
problem statement:Write a program which accept name from user and print that name.
Input : Arti Phule
Output : Arti Phule

*/
using namespace std;

#include<iostream>

int main()
{
        char str[30]={'\0'};
                       
       cout<<"enter name"<<"\n";
       
       cin.getline(str,30);   
     
       cout<<str<<"\n";
}

