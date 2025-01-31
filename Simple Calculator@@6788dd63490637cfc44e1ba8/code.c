#include <stdio.h>
#include<math.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case 1:
        int d=a+b;
        printf("%d\n",d);
        break;
        case 2:
        int e=a-b;
        printf("%d\n",e);
        break;
        case 3:
        int f=a*b;
        printf("%d\n",f);
        break;
        case 4:
        g=a/b;
        printf("%d\n",g);
        break;
        default:
        printf("error");
    }
    return 0;
}