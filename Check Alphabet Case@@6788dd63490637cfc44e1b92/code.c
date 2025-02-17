#include<stdio.h>
#include<ctype.h>
int main(
char a;
scanf("%c",&a);
if(isUpper(a)){
    printf("Uppercase");
}
else if(isLower(a)){
    printf("Lowercase");
}
else{
    printf("Not an alphabet");
}
return 0;
)