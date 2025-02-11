#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num;
    scanf("%u",&num);
    printf("%d",_builtin_ctz(num));
    return 0;
}