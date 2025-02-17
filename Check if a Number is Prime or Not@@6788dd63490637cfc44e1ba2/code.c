#include<stdio.h>
int main(){
    int i,num,count;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%num==o){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}