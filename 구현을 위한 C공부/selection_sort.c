/*
file name: selection sort
author:jinnyfruit
modified: 01.05, 2021
*/
#include <stdio.h>
int main()
{
    int arr[5]={5,1,3,4,2};
    int i,j,temp,min;

    for(i=0;i<4;i++){
        min=i;

        for(j=i+1;j<5;j++){
            if(arr[j]<arr[min])
                min=j;
        }
        
        if(min!=i){
          temp = arr[i];
          arr[i]=arr[min];
          arr[min]=temp;
        }
    }

    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}