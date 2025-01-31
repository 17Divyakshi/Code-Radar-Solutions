#include <stdio.h>
#include<math.h>
int main() {
    int e;
    sacnf("%d",&e);
    switch(e)
    {
        case 1:
        int a,b;
        char c;
        scanf("%d%d%c",&a,&b,&c);
        printf("%d%c%d",a,c,b);
        break;
        case 2:
        scanf("%d%d%c",&a,&b,&c);
        printf("%d%c%d",a,c,b);
        break;
        case 3:
        scanf("%d%d%c",&a,&b,&c);
        printf("%d%c%d",a,c,b);
        break;
        case 4:
        scanf("%d%d%c",&a,&b,&c);
        printf("%d%c%d",a,c,b);
        break;
        defautl:
        printf("error");
    }
    return 0;
}