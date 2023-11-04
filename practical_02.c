// Practical 2. Design, Develop and Implement a menu driven Program in C for the following
// Array operations
// a. Creating an Array of N Integer Elements.
// b. Reverse the elements of array
// c. Find maximum and minimum of array.
// d. Find even and odd elements of array
// e. Find sum of elements of an array f. Exit.
// Support the program with functions for each of the above operations.
#include<stdio.h>
#include<process.h>
int arr[20];
int n;
void main(){
    int op;
    while (1)
    {
        printf("\t*****MENU FOR ARRAY OPERATION*****\n");
        printf("1-Creating an Array\n2-reverse the Array\n3-find maximum and minimum element in the Array\n4-Even and odd from Array\n5-Sum of elements of Array\n6-Exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            create();
            display();
            break;
        case 2:
            reverse();
            display();
            break;
        case 3:
            max_min();
            break;
        case 4:
            ev_od();
            break;
        case 5:
            sum();
        case 6:
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
    printf("\n\nThe array is:- \n");
    for(int i=0;i<n;i++){
        printf("arr[%d]= %d\n",i,arr[i]);
    }
}
void reverse(){
    int temp=0,n1=n-1;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n1];
        arr[n1]=temp;
        n1--;
    }
}
void max_min(){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("maximum value = %d \n minimum value = %d\n",max,min);
}
void ev_od(){
    int even,odd;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("Even:- %d\n",arr[i]);
        }
        if(arr[i]%2!=0){
            printf("odds:- %d\n",arr[i]);
        }
    }
}
void sum(){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("The sum of the elements is = %d\n",sum);
}