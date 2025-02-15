#include<stdio.h>
int main(){
    int age;
    char hobby[100],username[100];
    scanf("%s %d %s",&username,&age,&hobby);
    printf("Name: %s\n",username);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}