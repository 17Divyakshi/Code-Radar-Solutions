#include <stdio.h>
int main() {
    int i,j,k,row,column;
    scanf("%d",&row,&column);
    for(i=row;i>=1;i--){
        for(k=i;k>=column;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}