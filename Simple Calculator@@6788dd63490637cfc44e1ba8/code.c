#include <stdio.h>
#include<math.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case 1:
        printf("%d%c%d\n",a+b);
        break;
        case 2:
        printf("%d\n",a-b);
        break;
        case 3:
        printf("%d\n",a*b);
        break;
        case 4:
        printf("%d\n",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}