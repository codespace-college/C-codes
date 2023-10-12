//write a program to create record of university & display all the items using structure  

#include <stdio.h> 
#include <string.h> 

typedef struct { 
    char name[50];
    int enno;
    int marks;
} university;

int main(){
    university universities[10];
    int i;
    printf("enter the information of students\n");
    for (i=0;i<2;i++){
        printf("Enter your name: \n");
        scanf("%49s",&universities[i].name);

        printf("Enter your enrollment number: \n");
        scanf("%d",&universities[i].enno);

        printf("enter your marks: \n");
        scanf("%d",&universities[i].marks);
    }

    printf("The following is the details you have entererd \n");
    for (i=0;i<2;i++){
        printf("Name: %s\n",universities[i].name);
        printf("enrolment Number: %d\n",universities[i].enno);
        printf("marks: %d\n",universities[i].marks);
    }
}