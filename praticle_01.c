// Practical 1. . Design, Develop and Implement a menu driven Program in C for the following Array operations
// a. Creating an Array of N Integer Elements
// b. Display of Array Elements with Suitable Headings
// c. Inserting an Element (ELEM) at a given valid Position (POS)
// d. Deleting an Element at a given valid Position(POS)
// e. Exit.
// Support the program with functions for each of the above operations.
#include<stdio.h>
#include<conio.h>
#include<process.h>
int arr[20];
int n;
void main(){
    int op;
    while (1)
    {
        printf("\t*****MENU FOR ARRAY OPERATION*****\n");
        printf("1-Creating an Array\n2-Display the Array\n3-Inserting element in the Array\n4-Deleting from Array\n5-Exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            inserting();
            break;
        case 4:
            deleting();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
    
}
void create(){
    printf("Enter the sizie of the array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void display(){
    for(int i=0;i<n;i++){
        printf("arr[%d]= %d\n",i,arr[i]);
    }
}
void inserting(){
    int val,pos;
    printf("Enter value to be enter:- ");
    scanf("%d",&val);
    printf("Enter the index where you want to insert the value:- ");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n+=1;
}
void deleting(){
    int val;
    int pos=0;
    printf("Enter the value to be delete:- ");
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            pos=i;
            break;
        }
    }
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
}
