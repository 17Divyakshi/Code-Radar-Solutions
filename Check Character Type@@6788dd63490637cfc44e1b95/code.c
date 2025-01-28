#include <stdio.h>
int main() {
    char b;
    scanf("%c",&b);
    if(b==65 && b==69 && b==73 && b==79 && b==85 && b==97 && b==101 && b==105 && b==111 && b==117)
    printf("Vowel");
    else if(b>=48 && b<=57)
    printf("Digit");
    else if((b>=0 && b<=47) || (b>=58 && b<=64))
    printf("Special Character");
    else
    printf("Consonant");
    return 0;
}