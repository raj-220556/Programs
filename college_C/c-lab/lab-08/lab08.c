#include <stdio.h>
#include <string.h>
// structures

struct student {
    int REGID;
    char name[100];
    float CGPA;
    char village[100];
    char district[100];
    long long phoneno;
};

void main() {
    int n;
    int i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for ( i = 0; i < n; i++) {
        printf("Enter the details of student %d\n", i + 1);
        printf("REGID: ");
        scanf("%d", &s[i].REGID);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Village: ");
        scanf("%s", s[i].village);
        printf("CGPA: ");
        scanf("%f", &s[i].CGPA);
        printf("District: ");
        scanf("%s", s[i].district);
        printf("Phone number: ");
        scanf("%lld", &s[i].phoneno);
    }
    float maxCGPA = s[0].CGPA;
    int topperIndex = 0;
    for ( i = 1; i < n; i++) {
        if (s[i].CGPA > maxCGPA) {
            maxCGPA = s[i].CGPA;
            topperIndex = i;
        }
    }
    printf("The topper among the entered students is %s with CGPA %.2f\n", s[topperIndex].name, s[topperIndex].CGPA);
    // Sort students by REGID in ascending order
    struct student temp;
    int j;
    for ( i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].REGID > s[j + 1].REGID) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    // Print sorted REGID and names
    printf("Students sorted by REGID (ascending order):\n");
    for ( i = 0; i < n; i++) {
        printf("REGID: %d, Name: %s\n", s[i].REGID, s[i].name);
    }
    // Calculate and print average CGPA
    float sum = 0;
    for ( i = 0; i < n; i++) {
        sum += s[i].CGPA;
    }
    float average = sum / n;
    printf("The average CGPA is: %.2f\n", average);
    printf("The student and their phone number who are above CGPA : \n");
    for(i=0;i<n;i++)
    {
       if(s[i].CGPA>=average)
	   {
	   	printf("%s --- %lld",s[i].name,s[i].phoneno);
	  }	
	}
}

