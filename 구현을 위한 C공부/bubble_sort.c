/*
file name: bubble sort
author:jinnyfruit
modified: 01.05, 2021
*/
#include <stdio.h>
int main(){

    int arr[5]={5,1,2,4,3};
    int i,j,temp;

    for(i=0;i<4;i++){
        for(j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}