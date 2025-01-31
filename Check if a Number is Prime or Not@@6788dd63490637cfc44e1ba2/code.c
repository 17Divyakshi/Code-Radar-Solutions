#include <stdio.h>
int main() {
    int a,b=0,c;
    scanf("%d",&c);
    for(a=1;a<=c;a++){
        if(c%a==0)
        b++;
    }
    if(b>2)
    printf("Not Prime");
    else
    printf("Prime");
    return 0;
}