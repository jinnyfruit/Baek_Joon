/*
    file name: flipping_integers
    author:jinnyfruit
    link:https://www.acmicpc.net/problem/2908
*/
void flip(int*,int*);
int answer(int,int);

#include <stdio.h>
int main(){
    
    int num1,num2;

    scanf("%d %d",&num1,&num2);

    flip(&num1,&num2);
    answer(num1,num2);

    printf("%d",answer(num1,num2));

    return 0;
}
void flip(int* num1,int* num2){
    int temp;
    int sum1,sum2;

    temp=*num1/100;
    sum1=temp;
    *num1=*num1%100;
    temp=*num1/10;
    sum1=sum1+temp*10;
    *num1=*num1%10;
    temp=*num1;
    sum1=sum1+temp*100;
    *num1=sum1;

    temp=*num2/100;
    sum2=temp;
    *num2=*num2%100;
    temp=*num2/10;
    sum2=sum2+temp*10;
    *num2=*num2%10;
    temp=*num2;
    sum2=sum2+temp*100;
    *num2=sum2;
}
int answer(int num1,int num2){
    
    return num1>num2 ? num1: num2;
}