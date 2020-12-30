#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(1<=num&&num<=100){
    
        int i,j;
         for(i=1;i<=num;i++){
             for(j=1;j<=i;j++){
                 printf("*");
             }
             printf("\n");
         }
    }
    else
    {
        return 0;
    }
    
}