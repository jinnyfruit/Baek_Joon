/*
file name: counting words
author:jinnyfruit
link:https://www.acmicpc.net/problem/1152
*/
#include <stdio.h>
#define MAXNUM 100

int main(){
    char line[MAXNUM];
    int cur=0,i=0,checkword=0,count=0;
    
    gets(line);
    
    while(line[cur]!='\0'){   //while end of string
        
        if((65<=line[cur]&&line[cur]<=90)||(97<=line[cur]&&line[cur]<=122)) {
            while((line[cur+i]!='\0')&&(line[cur+i]!=' ')){
                i++;
            }
            count++;    //count the num of word
            cur=cur+i;  //move the location of current
            i=0;    //init i
        }   
        else
        {
            cur++;
        }
    }
    
    printf("%d",count);
    return 0;
}