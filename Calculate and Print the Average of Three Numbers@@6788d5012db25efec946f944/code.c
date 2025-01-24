#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=(a+b+c);
    float avg=sum/3;
    printf("Average: %.2f",avg);
}