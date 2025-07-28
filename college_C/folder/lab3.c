#include <stdio.h>
int a[20];
int n1;
void abc(int b) {
    int i = b;
    int sum = -1;
    int x;
    int count = 0;
    while (i != 0) {
        i = i / 10;
        count++;
    }
    n1 = count;
    i = b;
    sum = -1;
    while (i != 0) {
        sum++;
        int j = i % 10;
        a[sum] = j;
        i = i / 10;
    }
    for (x = n1 - 1; x >= 0; x--) {
        printf("%d\n", a[x]);
    }
}
void def() {
	int x;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0;
    int count9 = 0, count10 = 0;
    for (x = 0; x < n1; x++) {
        switch (a[x]) {
            case 1: count1++; break;
            case 2: count2++; break;
            case 3: count3++; break;
            case 4: count4++; break;
            case 5: count5++; break;
            case 6: count6++; break;
            case 7: count7++; break;
            case 8: count8++; break;
            case 9: count9++; break;
            case 0: count10++; break;
        }
    }
    printf("The repeated numbers are :-\n");
    if (count1 > 1)
        printf("The number 1 is repeated %d times\n", count1);
    if (count2 > 1)
        printf("The number 2 is repeated %d times\n", count2);
    if (count3 > 1)
        printf("The number 3 is repeated %d times\n", count3);
    if (count4 > 1)
        printf("The number 4 is repeated %d times\n", count4);
    if (count5 > 1)
        printf("The number 5 is repeated %d times\n", count5);
    if (count6 > 1)
        printf("The number 6 is repeated %d times\n", count6);
    if (count7 > 1)
        printf("The number 7 is repeated %d times\n", count7);
    if (count8 > 1)
        printf("The number 8 is repeated %d times\n", count8);
    if (count9 > 1)
        printf("The number 9 is repeated %d times\n", count9);
    if (count10 > 1)
        printf("The number 0 is repeated %d times\n", count10);
    else
        printf("There are no repeated numbers\n");    
}
int main()
{
/*	//lab manual
	//first Question
	int i,j;
	int n,mean;
	int sum=0;
	int product=1;
	printf("Enter the range of the array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Entered the value : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		product=product*a[i];
	}
	mean=sum/n;
	printf("The sum of the all elements in the array is %d\n",sum);
	printf("The product of the all elements in the array is %d",product);
	printf("The mean value of the array is %d",mean);
	//second Question
	 int n1;
     printf("Enter the no of arrays to be entered : ");
     scanf("%d",&n1);
     int e[n1],b1,s;
     int x,y;
     for(x=0;x<n1;x++)
     {
         printf("Enter the elements :");
         scanf("%d",&e[x]);
     }
     for(x=0;x<n1;x++)
     {
        for(y=0;y<n1-1;y++)
        {
            if(e[y]<e[y+1])
            {
            b1=e[y];
            e[y]=e[y+1];
            e[y+1]=b1;
            }
        }
     }
     for(x=0;x<n1;x++)
     {
     	 printf("The sorted elements are the %d\n",e[x]);
	 }
	 printf("The second highest in this array %d\n",e[1]);
     printf("The second smallest in this array %d\n",e[n1-2]);
     //third Question
     int u,v;
     int c[10][10];
     int d[10][10];
     int e[10][10];
     int m,n;
     int m1,n1;
     printf("Enter the no of rows of a matrix : ");
     scanf("%d",&m);
     printf("Enter the no of columns of a matrix : ");
     scanf("%d",&n);
     for(u=0;u<m;u++)
     {
     	for(v=0;v<n;v++)
     	{
     		printf("Enter the element into the matrix :");
     		scanf("%d",&c[u][v]);
		 }
	 }
	 printf("Enter the no of rows of a matrix : ");
     scanf("%d",&m1);
     printf("Enter the no of columns of a matrix : ");
     scanf("%d",&n1);
     for(u=0;u<m1;u++)
     {
     	for(v=0;v<n1;v++)
     	{
     		printf("Enter the element into the matrix :");
     		scanf("%d",&d[u][v]);
		 }
	 }
	 if(m==m1 && n==n1)
	 {
	 	for(u=0;u<m;u++)
	 	{
	 		for(v=0;v<n;v++)
	 		{
			 e[u][v]=c[u][v]+d[u][v];
			 }
		 }
	 }
	 for(u=0;u<m;u++)
	 {
	 	for(v=0;v<n;v++)
	 	{
	 		printf("The elements of additioned matrices are %d\n",e[u][v]);
		 }
	 }
	 //fourth Question
	 int u,v,k;
     int c[10][10];
     int d[10][10];
     int e[10][10];
     int m,n;
     int m1,n1;
     printf("Enter the no of rows of a matrix : ");
     scanf("%d",&m);
     printf("Enter the no of columns of a matrix : ");
     scanf("%d",&n);
     for(u=0;u<m;u++)
     {
     	for(v=0;v<n;v++)
     	{
     		printf("Enter the element into the matrix :");
     		scanf("%d",&c[u][v]);
		 }
	 }
	 printf("Enter the no of rows of a matrix : ");
     scanf("%d",&m1);
     printf("Enter the no of columns of a matrix : ");
     scanf("%d",&n1);
     for(u=0;u<m1;u++)
     {
     	for(v=0;v<n1;v++)
     	{
     		printf("Enter the element into the matrix :");
     		scanf("%d",&d[u][v]);
		 }
	 }
	 if(m==n1)
	 {
	 	for(u=0;u<m;u++)
	 	{
	 		for(v=0;v<n1;v++)
	 		{
	 			for(k=0;k<n1;k++)
	 			{
	 				e[u][v]+=c[u][k]*d[k][v];
				 }
			 }
		 }
	 }
	 for(u=0;u<m;u++)
	 {
	 	for(v=0;v<n1;v++)
	 	{
	 		printf("The elements of multiplication matrices are %d\n",e[u][v]);
		 }
     }*/
    int rows, cols;
    int i,j;
    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
     int matrix[rows][cols], transposed[rows][cols];
    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
        	printf("Enter the element A[%d][%d] :",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    printf("Transposed Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }	
}
