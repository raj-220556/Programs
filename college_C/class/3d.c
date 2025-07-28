void main(){
    int i,j,k;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            for(k=0;k<6;k++){
                
                if(i==0||j==0||k==0||i==5||j==5||k==5)
                printf(" *");
                else printf("  ");
            }
            printf("\n");
        }
        

    }
}