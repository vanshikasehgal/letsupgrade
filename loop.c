#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("how many numbers you want (n):");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("the odd number %d :\n",i);
        printf("%d\n",2*i-1);
        sum+=((2*i)-1);
        }
        printf("sum of odd numbers upto n is: %d\n",sum);
        printf("the value of square of n (n^2):%d\n",n*n);
        printf(" || hence, n^2 = sum of odd numbers upto n ||  ");

    return 0;
}