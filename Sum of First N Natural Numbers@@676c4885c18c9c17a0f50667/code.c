#include<stdio.h>
int main(){
    int n,i,s;
    s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=i;
    }
    printf("%d",s);
    return 0;
}