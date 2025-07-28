#include<stdio.h>
#include<limits.h>
void main(){
    // // 1D array
    // int n;
    // printf("enter no.of elements in array u want upto numbers :");
    // scanf("%d",&n);
    // int arr[n];
    //     for(int i=0;i<n;i++){
    //         arr[i]=i;
    //     }
    // for(int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }

    // // 1..print max and min array
    // int i,n;
    // printf("No.of elemeants in array?..:");
    // scanf("%d",&n);
    // int arr[n];
    // for(i=0;i<n;i++){
    //     printf("enter the %d element :",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // // int max=INT_MIN;
    // // int min=INT_MAX;
    // // for(i=0;i<n;i++){
    // //     if(max<arr[i]){
    // //         max=arr[i];
    // //     }
    // //     if(min>arr[i]){
    // //         min=arr[i];
    // //     }
    // // }

    // // int max=arr[0];
    // // int min=arr[0];
    // // for(i=1;i<n;i++){
    // //     if(max<arr[i])max=arr[i];
    // //     if(min>arr[i])min=arr[i];       
    // // }
    // printf("\n minimum value is  1: %d \n maximun value is : %d",min,max);


    // // 2D array (matrix);
    // int i,j,r,c;
    // printf("enter no.of rows u want in array : ");
    // scanf("%d",&r);
    // printf("enter no.of columns u want in array : ");
    // scanf("%d",&c);
    // int arr[r][c];
    // printf("array contains %d elements...\n\n enter the elements of the matrix\n",r*c);
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         printf("enter the %d row and %d column  positioned the element : ",i+1,j+1);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // //for printing array 
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // //min and max value in 2d array
    // int max=arr[0][0];
    // int min=arr[0][0];
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         if(max<arr[i][j]) max=arr[i][j];
    //         if(min>arr[i][j]) min=arr[i][j];
    //     }
    // }
    // printf("In the array[%d][%d]\n maximum value is : %d\n minimum value is : %d ",r,c,max,min);
    
//2...Reverse the elements of an array

// //2d array reverse
// int r,c,i,j;
// printf("enter the no.of rows u want : ");
// scanf("%d",&r);
// printf("enter the no.of columns u want : ");
// scanf("%d",&c);
// int arr[r][c];
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("enter the array[%d][%d] positioned element : ",i+1,j+1);
//         scanf("%d",&arr[i][j]);
//     }
// }
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// printf("Reverse of the array[%d][%d] is...\n",r,c);
// int rev[r][c];
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         rev[i][j]=arr[r-i-1][c-j-1];
//     }
// }
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("%d ",rev[i][j]);
//     }
//     printf("\n");
// }

// Reverse of 1d array
// int n;
// printf("enter the no.of elemnts in array : ");
// scanf("%d",)


// // ADDITION OF MATRICES 
// int k,i,j,r,c,n;
// printf("enter the no.of arrays to add : ");
// scanf("%d",&n);
// printf("enter no.of rows u want in  array : ");
// scanf("%d",&r);
// printf("enter no.of columns u want in array : ");
// scanf("%d",&c);
// printf("array contains %d elements...\n\n enter the elements of the matrix\n",r*c);
// int arr[r][c];
// int sum[r][c];
// // sum intstalliation
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         sum[i][j]=0;
//     }
// }

// for(k=1;k<=n;k++){
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("enter the 2d %d array[%d][%d] : ",k,i+1,j+1);
//             scanf("%d",&arr[i][j]);
//             sum[i][j]+=arr[i][j];
//         }
//     }
//     printf("%d array :\n",k);
//     //for printing array 
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n"); 
//     }
// }
// //printing sum array
// printf("sum of the given %d 2D arrays :\n",n);
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         printf("%d ",sum[i][j]);
//     }
//     printf("\n");
// }


// //3..sort the array (bubble,advance,bubble shot, effecient,selection sorting, inseting sorting,counting)
// // ans: making the array in the ascending order of elements..
// int n,i,j,s;
// printf("enter the elements in array: ");
// scanf("%d",&n);
// int arr[n];
// for(i=0;i<n;i++){
//     printf("enter the %d elment of the array : ",i+1);
//     scanf("%d",&arr[i]);
// }
// printf("your array[%d] :",n);

// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }
// //Sorting by bubble shot
// for(i=0;i<n-1;i++){
//     for(j=0;j<n-1;j++){
//         if(arr[j]>arr[j+1]){
//             s=arr[j];
//           arr[j]=arr[j+1];
//             arr[j+1]=s;
//         }
//     }
// }
// printf("\narray[%d] after sorted :\n",n);
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }



// //Advance bubble shot(it didn't scan upto last of the array after placing bigger one in the last of array)
// for(i=0;i<n-1;i++){
//     for(j=0;j<n-1-i;j++){// n-1-i makes it didn't check upto again end of array
//         if(arr[j]>arr[j+1]){
//             s=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=s;
//         }
//     }
// }
// printf("\narray[%d] after sorted by using advance bubble shot:\n",n);
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }

//effecient















// //4...find the kth largest and smallest element in the array
// int n,e,i,j,s,k;
// printf("enter the no.of elements in the array :");
// scanf("%d",&n);
// int arr[n];
// for(i=0;i<n;i++){
//     printf("enter the %d element in the array :");
//     scanf("%d",&e);
//     arr[i]=e;
// }
// printf("to check the kth largest and smallest element..\nenter the k value : ");
// scanf("%d",&k);
// printf("\nprinting given array : ");
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }
// //sorting array
// for(i=0;i<n-1;i++){
//     for(j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             s=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=s;
//         }
//     }
// }
// printf("\nprinting sorted array : ");
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }

// int small=arr[k-1];
// int large=arr[n-k];
// printf("\nThe %dth largest element is %d..\nThe %dth smallest element is %d..",k,large,k,small);


// //5..find and display number of time an integer duplicated in array
// int n,i,j;
// printf("enter no.of elements : ");
// scanf("%d",&n);
// int arr[n];
// //SCANING ARRAY
// for(i=0;i<n;i++){
//     printf("enter a[%d] element :",i+1);
//     scanf("%d",&arr[i]);
// }
// printf("the array that you have entered :");
// //PRINTING ARRAY
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
// }
// int k=32000;
// int dup[k];
// for(i=0;i<k;i++){
//     dup[i]=0;
// }
// for(i=0;i<n;i++){    
//     dup[arr[i]]+=1;
// }
// for(i=0;i<k;i++){
//     if(dup[i]>1){
//         printf("\n%d is duplictaed %d times..",i,dup[i]);
//     }
// }
 

// //6...find phone number is lucky or not
// //-if two of the digits appear atleast two times
// //-(or) it has atleast 4 conjugative digits
// //-(or) sum of the numbers is prime
// int i,j;
// int num[10];
// int dup[10]={0};
// printf("enter the phone number : \n");
// for(i=0;i<10;i++){
//     printf("enter %d digit :",i+1);
//     scanf("%d",&num[i]);
// }
// printf("your phone number is : ");
// for(i=0;i<10;i++){
//     printf("%d",num[i]);
//     dup[num[i]]++;
// }
// printf("\nrepeated numbers in your number..\n");
// for(i=0;i<10;i++){
//     if(dup[i]>1)
//     printf("%d-%d times\n",i,dup[i]);
// }
// //-any 2 digits appear two times
// int c=0;
// for(i=0;i<10;i++){
//     if(dup[i]>1){
//         c++;
//     }
// }
// if(c>1){
//     printf("\nentered numbers is a lucky number as  2 digits apperas atleast two numbers..\n");
// }
// //-it has atleast 4 conjugate numbers
// int conj=0;
// for(i=0;i<10;i++){
//     if(num[i]==(num[i+1]-1)){
//         conj++;
//         if(conj>3){
//             printf("\n entered number is a lucky number as per 4 conjugative numbers...\n");
//             break;
//         }
//     }
//     else conj=1;
// }
// //-sum of digits is a prime number
// int sum=0;
// for(i=0;i<10;i++){
//     sum+=num[i];
// }
// int prime=1;
// for(i=2;i<sum;i++){
//     if(prime%i==0){
//         prime=0;
//         break;
//     }
// }
// if(prime) printf("entered number is lucky numer as per sum is prime");
// else printf("sum is not a prime");



// //7...duplicate elements in the array (more than one time appeared)
// int n,i;
// printf("enter no.of elements in array :");
// scanf("%d",&n);
// int arr[n];
// for(i=0;i<n;i++){
//     printf("enter a[%d] element :",i);
//     scanf("%d",&arr[i]);
// }
// int k=32600;
// int dup[k];
// for(i=0;i<k;i++){
//     dup[i]=0;
// }
// printf("the array that you have been entered :");
// for(i=0;i<n;i++){
//     printf("%d,",arr[i]);
//     dup[arr[i]]++;
// }
// printf("\nthe dupplicates in the aray are :");
// for(i=0;i<k;i++){
//     if(dup[i]>1){
//         printf("%d,",i);
//     }
// }


// //8...read two sorted arrays and merge them into into sorted array
// int n,m,i,j;
// printf("enter length of 1st array :");
// scanf("%d",&n);
// printf("enter length of 2nd array :");
// scanf("%d",&m);
// int k=n+m;
// int arr1[n],arr2[m],merge[n+m];
// for(i=0;i<n;i++){
//     printf("enter 1st array[%d] element :",i);
//     scanf("%d",&arr1[i]);
// }
// for(i=0;i<m;i++){
//     printf("enter 2nd array[%d] element :",i);
//     scanf("%d",&arr2[i]);
// }
// //sorting arrays
// for(i=0;i<n-1;i++){
//     for(j=0;j<n-1-i;j++){
//         if(arr1[j]>arr1[j+1]){
//             int s=arr1[j];
//             arr1[j]=arr1[j+1];
//             arr1[j+1]=s;
//         }
//     }
// }
// for(i=0;i<m-1;i++){
//     for(j=0;j<m-1-i;j++){
//         if(arr2[j]>arr2[j+1]){
//            int s=arr2[j];;
//             arr2[j]=arr2[j+1];
//             arr2[j+1]=s;
//         }
//     }
// }
// //printing soted arrays
// printf("\nentered 1st sorted array :");
// for(i=0;i<n;i++){
//     printf("%d,",arr1[i]);
// }
// printf("\nentered 2nd sorted array :");
// for(i=0;i<m;i++){
//     printf("%d,",arr2[i]);
// }
// //mering of arrays
// for(i=0;i<k;i++){
//     if(i<n) merge[i]=arr1[i];
//     else merge[i]=arr2[i-n];
// }
// //sorting of merged array
// for(i=0;i<k-1;i++){
//     for(j=0;j<k-1-i;j++){
//         if(merge[j]>merge[j+1]){
//             int s=merge[j];
//             merge[j]=merge[j+1];
//             merge[j+1]=s;
//         }
//     }
// }
// printf("\nmerged sorted array :");
// for(i=0;i<k;i++){
//     printf("%d,",merge[i]);
// }

// //9...read and display M*N matrix
// int m,n,i,j;
// printf("enter order of 2D matrix..\nenter M value :");
// scanf("%d",&m);
// printf("enter N value :");
// scanf("%d",&n);
// int arr[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("enter matrix[%d][%d] element :",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// //printing matrix
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }


// //10...find sum and product of matrix elements...
// int m,n,i,j;
// printf("enter order of 2D matrix...\nenter M value :");
// scanf("%d",&m);
// printf("enter N value :");
// scanf("%d",&n);
// int arr[m][n];
// int sum=0,mul=1;
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("enter matrix[%d][%d] element :",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// //sum and multiplication of elements of matrix
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         sum+=arr[i][j];
//         mul*=arr[i][j];
//     }
// }
// printf("sum of elements in matrix :%d\n",sum);
// printf("multiplication of elements in matrix :%d",mul);



// //11...display sum of each row element and print
// int m,n,i,j;
// printf("enter the order of matrix..\n M value :");
// scanf("%d",&m);
// printf("n value :");
// scanf("%d",&n);
// int arr[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("enter a[%d][%d] element :");
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("sumation of each row...\n");
// int sum=0;
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         sum+=arr[i][j];
//     }
//     printf("sum of %d-row :%d\n",i,sum);
//     sum=0;
// }

// //12...Transpose of matrix
// int m,n,i,j;
// printf("enter the order of matrix..\n M value :");
// scanf("%d",&m);
// printf("n value :");
// scanf("%d",&n);
// int arr[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("enter a[%d][%d] element :");
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("matrix that you entered...\n");
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// printf("Transpose of a Matrix...\n");
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[j][i]);
//     }
//     printf("\n");
// }


// //13...print diagonals of a matrix
// int n,i,j;
// printf("enter the order of matrix :");
// scanf("%d",&n);
// int arr[n][n];
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf("enter a[%d][%d] element :",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("matrix that you entered...\n");
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// printf("Diagonal of a matrix..\n");
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         if(i==j)
//         printf("%d ",arr[j][i]);
//         else printf("  ");
//     }
//     printf("\n");
// }


//14...perform sum,subtraction and multipilication of marix A(matrix M*N) and B(matrix P*Q)
// int m,n,i,j,p,q;
// printf("enter order of 2D matrix...\nenter M value :");
// scanf("%d",&m);
// printf("enter N value :");
// scanf("%d",&n);
// printf("enter order of 2D matrix...\nenter P value :");
// scanf("%d",&p);
// printf("enter Q value :");
// scanf("%d",&q);
// // //sum of two matrices
// // if(m==p && n==q){
// //     int arr1[m][n],arr2[p][q],sum[m][n];
// //     for(i=0;i<m;i++){
// //         for(j=0;j<n;j++){
// //             printf("enter matrix[%d][%d] element :",i,j);
// //             scanf("%d",&arr1[i][j]);
// //         }
// //     }
// //     for(i=0;i<p;i++){
// //         for(j=0;j<q;j++){
// //             printf("enter matrix[%d][%d] element :",i,j);
// //             scanf("%d",&arr2[i][j]);
// //         }
// //     }
// //     for(i=0;i<m;i++){
// //         for(j=0;j<n;j++){
// //             sum[i][j]=arr1[i][j]+arr2[i][j];
// //         }
// //     }
// //     //printing sum of matrix
// //     printf("\n sum of two matrix are \n");
// //     for(i=0;i<m;i++){
// //         for(j=0;j<n;j++){
// //             printf("%d ",sum[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }
// // else{
// //     printf("sum of matrices cannot be performed...\n M=P and N=Q then sum has been performed..");
// // }

// //Multiplication of two matrices
// if(n==p){
//     int arr1[m][n],arr2[p][q],mul[m][q];
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("enter matrix[%d][%d] element :",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(i=0;i<p;i++){
//         for(j=0;j<q;j++){
//             printf("enter matrix[%d][%d] element :",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }
    
//     for(i=0;i<m;i++){
//         for(j=0;j<q;j++){
//             mul[i][j]=0;
//             for(int k=0;k<n;k++){
//                 mul[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//         }
//     }
//     printf("multiplication of matrix :\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<q;j++){
//             printf("%d ",mul[i][j]);
//         }
//         printf("\n");
//     }
// }


// // // //15...find given matirx is lower or upper diagonal matrix or identity matirx
// int n,i,j;
// printf("enter the order of matrix :");
// scanf("%d",&n);
// int arr[n][n];
//  for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf("enter a[%d][%d] element :",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("matrix that you entered...\n");
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// // //finding upper diagonal matrix(below elements of a diagonal matrix are zero)
// // int upper=1;
// // for(i=0;i<n;i++){
// //     for(j=0;j<i-1;j++){
// //         if(arr[i][j]!=0){
// //             upper=0;
// //             break;
// //         }
// //     }
// // }
// // for(i=1;i<=n;i++){
// //     for(j=1;j<=n;j++){
// //         if(j<i)
// //         printf("* ");
// //         else printf("  ");
// //     }
// //     printf("\n");
// // }
// // if(upper==1)
// // printf("It is a upper triangular matrix....");
// // else printf("it is not a upper triangular matrix..");

// // finding lower triangle matrix
// // int lower=1;
// // for(i=0;i<n;i++){
// //     for(j=0;j<n;j++){
// //         if(j>i){
// //             if(arr[i][j]!=0){
// //                 lower=0;
// //                 break;
// //             }
// //         }
        
// //     }
// // }
// // for(i=1;i<=n;i++){
// //     for(j=1;j<=n;j++){
// //         if(j>i)
// //         printf("* ");
// //         else printf("  ");
// //     }
// //     printf("\n");
// // }
// // if(lower==1)
// // printf("It is a lower triangular matrix....");
// // else printf("it is not a lower triangular matrix..");

// //finding identity matrix(all elements are 0s and diagonal is 1s of a matrix)
// int indentity=1;
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         if(j==i){
//             if(arr[i][j]!=1){
//                 indentity=0;
//                 break;
//             }
//         }
//         if(j!=i){
//             if(arr[i][j]!=0){
//                 indentity=0;
//                 break;
//             }
//         }
//     }
// }

// if(indentity==1)
// printf("It is a identity matrix....");
// else printf("it is not a identity matrix..");


// //16....arrange the matrix elements in row wise ascending order
// int m,n,i,j;
// printf("enter the no.of rows: ");
// scanf("%d",&m);
// printf("enter the no.of columns: ");
// scanf("%d",&n);
// int arr[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("enter a[%d][%d] : ",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// //printing entered elements
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// //sorting< of array row wise
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         for(int k=0;k<n-j-1;k++){
//             if(arr[i][k]>arr[i][k+1]){
//                 int s=arr[i][k];
//                 arr[i][k]=arr[i][k+1];
//                 arr[i][k+1]=s;
//             }
//         }
//     }
// }
// printf("Array of elements in acsendind order row wise...\n");
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }


// 17....odd numbers of array comes after even numbers that entered
int n,i,j;
printf("enter no.of elements in array : ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    printf("enter array[%d] :",i);
    scanf("%d",&arr[i]);
}
printf("entered array :\n");
for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}
printf("array after modification....\n");
for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if(arr[i]%2!=0){
            int s=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=arr[i];
        }
    }
}

for(i=0;i<n;i++){
    printf("%d,",arr[i]);
}





































}




