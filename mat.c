#include<stdio.h>
int main(){
    int m1[10][10],m2[10][10],m3[10][10],i=1,j=1,k=1,n;
    printf("enter n :");
    scanf("%d",&n);

    printf("enter element of matrix 1: ");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&m1[i][j]);
        }
    }
printf("enter element of matrix 1: ");
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&m2[i][j]);
        }
    }
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           m3[i][j]=0;
           for(k=1;k<=n;k++){
            m3[i][j]+=m2[i][k]*m3[k][j];
           }
        }
    }
    printf("matrix 3 is : ");
    for(i=0;i<=n;i++){
        for(j=1;j<=n;j++){

        printf("%d",m3[i][j]);
        }
         printf("\n");
    }
    // printf("\n");
    // return 0;
}