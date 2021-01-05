/*
file name: sorting integer
author:jinnyfruit0527
link:https://www.acmicpc.net/problem/2750
*/
#include <stdio.h>
#include <stdlib.h>

void sort(int nums[],int num){
    int i,j,temp;
    for(j=0;j<num;j++){
        printf("%d\n",nums[j]);
    }

    for(i=0;i<num-1;i++){
        
        for(j=1;j<num-i;j++){
            if(nums[j]>nums[j+1]){   //charnge if next to integer is smaller than nums[i]
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    printf("result\n");
    for(i=0;i<num;i++){
        printf("%d\n",nums[i]);
    }
}

int main(){

    int num;
    scanf("%d",&num);   //get the number of integers

    int i;
    int* nums=(int*)malloc(sizeof(int)*num);
    for(i=0;i<num;i++){
        scanf("%d",&nums[i]);   //get a integer
    }

    sort(nums,num);
    free(nums);
    return 0;
}