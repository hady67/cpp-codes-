//Write a program to find whether a given character is a vowel or a consonant
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the char to be checked"<<endl;
    cin>>ch;
    if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    
        {cout<<"it is a vowel";}
      else 
     {cout <<"it is a consonant";} 
    }
    else 
    {
    cout<<"enter the correct character";
        }


    
}

