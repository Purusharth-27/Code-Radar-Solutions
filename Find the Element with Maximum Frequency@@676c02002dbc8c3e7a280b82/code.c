#include<stdio.h>
int main()
{
    int n,tatget,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    printf("%d ",count)
}