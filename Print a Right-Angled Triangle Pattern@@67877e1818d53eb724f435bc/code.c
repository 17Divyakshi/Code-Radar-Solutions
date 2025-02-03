#include <stdio.h>
int main() {
    int i,j,k,r,c;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(k=c;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}