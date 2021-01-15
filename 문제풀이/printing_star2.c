/*
file name: printing star
author:jinnyfruit0527
link:https://www.acmicpc.net/problem/2439
*/
#include <stdio.h>
int main(){

    int num;
    scanf("%d",&num);

    int i,j,k;
    for(i=1;i<=num;i++){
      if(i!=num){
          for(j=1;j<=num-i;j++){ //print blank area
              printf(" ");
          }
          for(k=1;k<=i;k++){    //print * 
              printf("*");
          }
      }
      else{
          for(k=1;k<=num;k++){
              printf("*");
          }
      }
      printf("\n");
    }
    return 0;
}
