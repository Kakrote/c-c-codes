#include<iostream>
#include<conio.h>
#include<process.h>
int result;
int add(int n,int m){
    return result=n+m;
}
int sub(int n,int m){
    return n-m;
}
int div(int n,int m){
    return result=n/m;
}
int mod(int n,int m){
    return result=n%m;
}
void main(){
    int n,m,op;
    clrscr();
    cout<<"Enter the value for n:- ";
    cin>>n;
    cout<<"\nEnter the value for m:- ";
    cin>>m;
    cout<<"Enter your choies:- \n";
    cout<<"1-ADD\n2-Subtration\n3-Division\n4-Mdulus\n";
    cin>>op;
    switch (op)
    {
    case 1:cout<<a<<"+"<<b<<"= "<<add(n,m);
        break;
    case 2:cout<<a<<"-"<<b<<"= "<<sub(n,m);
        break;
    case 3:cout<<a<<"/"<<b<<"= "<<div(n,m);
        break;
    case 4:cout<<a<<"%"<<b<<"= "<<mod(n,m);
        break;
    default:cout<<"Wrong Entry";
        break;
    }
    getch();
}