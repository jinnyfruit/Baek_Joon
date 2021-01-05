/*
    file name: finding_min_max
    author:jinnyfruit
    link:https://www.acmicpc.net/problem/10818
*/
#include <stdio.h>
#define MAX 1000
void find_max(int,int*);
void find_min(int,int*);

int main(){
    int num,nums[MAX];
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++){
        scanf("%d",&nums[i]);
    }
    find_min(num,nums);
    find_max(num,nums);
    
    return 0;
}
void find_max(int num,int nums[]){
    int i,max=nums[0];

    for(i=0;i<num;i++){
        if(nums[i]>max)
            max=nums[i];
    }
   printf("%d\t",max);
}
void find_min(int num,int nums[]){
     int i,min=nums[0];

    for(i=0;i<num;i++){
        if(nums[i]<min)
            min=nums[i];
    }
    printf("%d\t",min);
}