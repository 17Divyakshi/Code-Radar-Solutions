#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    printf("Vowel");
    else if(isalpha(a))
    printf("Consonant");
    else if(isdigit(a))
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}