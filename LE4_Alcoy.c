#include <stdio.h>

int main()
{
    char completeName[50];
    char section[20];
    int FirstQuarterGrade; 
    int SecondQuarterGrade;
    int ThirdQuarterGrade;
    int FourthQuarterGrade;
    float average;
    char remarks[25];

    printf("Enter Complete Name: ");
    fgets(completeName, sizeof(completeName), stdin);

    printf("Enter Section: ");
    scanf("%s", section);

    printf("Enter First Quarter Grade: ");
    scanf("%d", &FirstQuarterGrade);

    printf("Enter Second Quarter Grade: ");
    scanf("%d", &SecondQuarterGrade);

    printf("Enter Third Quarter Grade: ");
    scanf("%d", &ThirdQuarterGrade);

    printf("Enter Fourth Quarter Grade: ");
    scanf("%d", &FourthQuarterGrade);

    average = (FirstQuarterGrade + SecondQuarterGrade + ThirdQuarterGrade + FourthQuarterGrade) / 4.0;
       
    if (average >= 90 && average <= 100)
        sprintf(remarks, "Outstanding");
    else if (average >= 85)
        sprintf(remarks, "Very Satisfactory");
    else if (average >= 80)
        sprintf(remarks, "Satisfactory");
    else if (average >= 75)
        sprintf(remarks, "Fair");
    else
        sprintf(remarks, "Failed");

   
    printf("\n\n--- Student Report ---\n");
    printf("Student Name : %s", completeName);
    printf("Section      : %s\n", section);
    printf("1st Quarter  : %d\n", FirstQuarterGrade);
    printf("2nd Quarter  : %d\n", SecondQuarterGrade);
    printf("3rd Quarter  : %d\n", ThirdQuarterGrade);
    printf("4th Quarter  : %d\n", FourthQuarterGrade);
    printf("Average Grade: %.2f\n", average);
    printf("Remarks      : %s\n", remarks);

    return 0;
}
