#include <stdio.h> //  Pre-Processive to include standard input and output funtion header files

#include <stdlib.h> // Pre-Processive to include standard Libraray funtion header files

struct Aditya //  Structure Functioning
{
    char name[25]; // declared variable "name"with data type char along with size 20
    int rollno;    // declared variable "roll no"with data type int
    float marks;   //  declared variable "marks"with data type float
};
int main() // main function
{
    int i, n;
    struct Aditya d[5];
    printf("<Welcome to Aditya's DBMS>");
    printf("\n Enter name, roll no. and marks Below ::     ");
    printf("Enter the no. of records\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d record :: \n", i + 1);

        printf("Enter Name :: ");
        scanf("%s", d[i].name);
        printf("Enter RollNo. :: ");
        scanf("%d", &d[i].rollno);
        printf("Enter Marks :: ");
        scanf("%f", &d[i].marks);
    }
    printf("\n\tName\tRollNo\tMarks\t\n");
    for (i = 0; i < n; i++)
        printf("\t%s\t%d\t%.2f\t\n", d[i].name, d[i].rollno, d[i].marks);

    return 0;
}