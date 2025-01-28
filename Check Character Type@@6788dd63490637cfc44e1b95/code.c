#include <stdio.h>
int main() {
    char b;
    scanf("%d",&b);
    if(b==65 && b==69 && b==73 && b==79 && b==85 && b==97 && b==101 && b==105 && b==111 && b==117)
    {
        printf("Vowel");
    }
    else if(a>=48 &&a<=57)
    {
    printf("Digit");
    }
    else if(a>=0 && a<=47 || a>=58 && a<=64){
        printf("Special Character");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}