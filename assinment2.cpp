#include<iostream.h>
#include<conio.h>
int n,m;
int grt(int a,int b){
    if(a>b){
        return a;
    }
    else return b;
}
void even_odd(){
    cout<<"Enter the number:- ";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number";
    }
    else cout<<n<<" is odd number";
}
void prime(){
    int i;
    cout<<"Enter the number:- ";
    cin>>n;
    m=n/2;
    for(i=0;i<=m;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number";
        }
        else cout<<n<<" is a prime number";
    }
}
void swap(int a,int b) {
    cout<<"a="<<a<<" "<<"b= "<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nafter swaping the values:- "<<"a= "<<a<<" "<"b= "<<b;
}
void main(){
    int op;
    clrscr();
    cout<<"Enter the value for n:- ";
    cin>>n;
    cout<<"\nEnter the value for m:- ";
    cin>>m;
    cout<<"Enter the option:- \n";
    cout<<"1-Finding the greatest number\n2-Swaping the value\n3-odd and even\n4-prime number"
    cin>>op;
    switch(op){
        case 1:
        cout<<"The greatest number betwen "<<n<<" "<<m<<<" is"<<grt(n,m);
        break;
        case 2:
        swap(n,m);
        break;
        case 3:
        even_odd();
        break;
        case 4:
        prime();
        break;
        default:
        cout<<"Wrong entry"
    }
    getch();
}