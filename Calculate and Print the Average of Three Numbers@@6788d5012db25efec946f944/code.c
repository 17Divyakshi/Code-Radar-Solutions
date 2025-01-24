#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=(a+b+c)/3;
    float avg=sum/3;
    printf("Average: %f",avg);
}