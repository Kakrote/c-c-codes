#include<stdio.h>
#include<conio.h>
#include<process.h>
void creat(int len, int arr[len]){
    int i;
    for(i=0;i<len;i++){
        printf("Enter the value for arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
}
void head(int len, int arr[len]){
    int i=0;
    printf("pos");
    for(i;i<len;i++){
        printf("\narr[%d] = %d\n",i,arr[i]);
    }
}
void insert(int len, int arr[len]){
    int num,pos,i;
    printf("\nEnter the value to be insert:- ");
    scanf("%d",num);
    printf("Enter the index vavlue where you want to insert:- ");
    scanf("%d",pos);
    for(i=len-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    len+=1;
    head(len,arr);
}
void delete(int len, int arr[len]){
    int val,temp,in,i;
    printf("\nEnter the value to be delete from the array:- ");
    scanf("%d",val);
    for(i=0;i<len;i++){
        if(arr[i]==val){
            in=i;
            break;
        }
    }
    for(i=in;i<len;i++){
        temp=arr[in];
        arr[in]=arr[in+1];
        arr[in+1]=temp;
    }
    len-=1;
    //head(len,arr);
    for(i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
}
void main(){
    int arr[50],ch,len;
    printf("-----Enter your choies-----");
    while (1)
    {
    printf("\n1-Creating an array\n2-To viwe the array\n3-Insert value in the array\n4-Delete value from the array\n5-Exit\n");
    scanf("%d",ch);
    switch (ch)
    {
    case 1:printf("Enter the length of the array:- ");
        scanf("%d",len);
        creat(len,arr);
        break;
    case 2:head(len,arr);
        break;
    case 3:insert(len,arr);
        break;
    case 4:delete(len,arr);
        break;
    case 5:
        _c_exit();
    default:
        break;
    }
    }
    getch();
}
