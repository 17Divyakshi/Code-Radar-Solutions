#include <stdio.h>
int main() {
    char b;
    scanf("%d",&b);
    if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}