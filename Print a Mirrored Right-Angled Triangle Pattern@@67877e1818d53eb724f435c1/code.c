#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(k=0;k<=i;k++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}