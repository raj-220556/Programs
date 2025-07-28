#include<stdio.h>
void main(){

    // Trnaspose of matrix

    int m,n,i,j;
    printf("enter rows :");
    scanf("%d",&m);
    printf("enter columns :");
    scanf("%d",&n);
    int arr[m][n];
    int tran[n][m];
    printf("enter the elements :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("arr[%d][%d]",i+1,j+1);
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("entered matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
            tran[j][i]=arr[i][j];
            
        }printf("\n");
    }
    printf("transpose of matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",tran[i][j]);
            
        }printf("\n");
    }

}