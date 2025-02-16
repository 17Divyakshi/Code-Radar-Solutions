#include <stdio.h>
int main(){
    char str[100];
    int age;
    char word[100];
    scanf("%s %d\n%s",str,&age,word);
    printf("Name: %s\nAge: %d\nHobby: %s",str,age,word);
}