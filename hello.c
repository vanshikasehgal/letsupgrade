#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    if((a<b)&&(a<<c)){
        if(b<c){
            printf("third number ' %d 'is greatest\n",c);
        }
        else{
            printf("second number ' %d 'is greatest\n",b);
        }
        }
    else{
        printf("first number ' %d ' is greatest\n",a);
    }

    return 0;
}