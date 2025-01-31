#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    if(m==1 ||m==3 ||m==5 ||m==7||m==8||m==10||m==12)
    printf("31");
    else if(m==2)
    printf("28");
    // else if(m==3)
    // printf("31");
    // else if(m==4)
    // printf("30");
    // else if(m==5)
    // printf("31");
    // else if(m==6);
    // printf("30");
    // else if(m==7);
    // printf("31");
    // else if(m=8)
    // printf("31");
    // else if(m==9)
    // printf("30");
    // else if(m==10)
    // print("31");
    // else if(m==11)
    // printf("30");
    else
    printf("30");
    return 0;
}