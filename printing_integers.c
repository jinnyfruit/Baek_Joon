#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x;

    scanf("%d %d",&n,&x);
    int* arr = (int*)malloc(sizeof(int)*n);
    int i;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]<x)
         printf("%d ",arr[i]);
    }

    return 0;

}