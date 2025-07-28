#include<stdio.h>
void main(){
    // ARRAY OF STRINGS

    // //1....string starting with "c" and "a" given N no.of inputs
    // int n;
    // printf("enter no.of strings :");
    // scanf("%d",&n);
    // char strings[n][100];
    // // taking inputs of strings
    // for(int i=0;i<n;i++){
    //     printf("enter the string[%d] : ",i);
    //     scanf("%s",strings[i]);
    //     // fgets(strings,n,stdin);  (fgets it is used to scan multipile words os string)
    // }
    // for(int i=0;i<n;i++){
    //     int count =0;
    //     for(int j=0;strings[i][j]!='\0';j++){
    //         if(strings[i][j]=='c'||strings[i][j]=='a'||strings[i][j]=='A'||strings[i][j]=='C'){
    //              printf("%s\n", strings[i]);
    //         }

    //     }

    // }


    // //2......print words of string reverse order
    // int n;
    // printf("Enter the no of strings to enter : ");
    // scanf("%d",&n);
    // char string[n][100];
    // int i,j;
    // printf("Enter the string :\n");
    // for(i=0;i<n;i++)
    // {
    	
    // 	scanf("%s",string[i]);
	// }
	// char temp[100];
	// for(i=0;i<n;i++)
	// {
	// 	for(j=0;j<n-i-1;j++)
	// 	{
	// 		if(strcmp(string[j], string[j+1] ))
	// 		{
	// 			strcpy(temp,string[j+1]);
	// 			strcpy(string[j+1],string[j]);
	// 			strcpy(string[j],temp);
	// 		}
	// 	}
	// }
	// printf("The entered string in dictionary order is :\n");
	// for(i=0;i<n;i++)
	// {
	// 	printf("%s\n",string[i]);
	// }
	


// //3.....arrange N strings in dictionary order
//     char string1[100][100];
//     char string[100];         
//     printf("Enter a Statement: ");
//     gets(string); 
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (string[i] != '\0') {
//         if (string[i] == ' ') {
//             string1[j][k] = '\0'; 
//             j++; 
//             k = 0;
//         } else {
//             string1[j][k] = string[i];
//             k++;
//         }
//         i++;
//     }
// //    printf("The Entered words are:\n");
// //    for (i = 0; i <= j; i++) {  // Print all words
// //        printf("%s\n", string1[i]);
// //    }
//     printf("The words in reverse order are:\n");
//     for (i = j; i >= 0; i--) {  // Print words in reverse order
//         printf("%s ", string1[i]);
//     }
//     printf("\n");
















}