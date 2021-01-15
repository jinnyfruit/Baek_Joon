/*
 file name: calculating integers
 detail: 
 made_by: jinnyfruit
*/
#include <stdio.h>
int main(){
    int num1,num2;

    scanf("%d %d", &num1,&num2);

    int result;

    result=num1+num2;
    printf("%d\n",result);
    result=num1-num2;
    printf("%d\n",result);
    result=num1*num2;
    printf("%d\n",result);
    result=num1/num2;
    printf("%d\n",result);
    result=num1%num2;
    printf("%d\n",result);

    return 0;
}