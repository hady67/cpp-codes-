//Write a program to display all factors of a number.
#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<<"enter the number"<<endl;
    cin>>n;
     cout <<"the factors of the number are"<<endl;
    for(int i=1; i<=n;++i)
     {
         if(n%i==0)
        { cout<<i<<endl;}
        else continue;
     }
    
     
}