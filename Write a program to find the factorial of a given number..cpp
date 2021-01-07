//Write a program to find the factorial of a given number
#include<iostream>
using namespace std;
int main()
{
    int num, fact=1;
    cout<<"enter the number"<<endl;;
    cin>>num;
    for(int i=1; i<=num;++i)
    {
        fact=fact*i;
    }
    cout<<"the factorial of number is"<<endl;
    cout<<fact;

}