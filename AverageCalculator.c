#include <stdio.h>

int main() {
    int numStudents;
    printf("Enter Number of Students:");
    scanf("%d",&numStudents);
    int phy, chem, eng, math, cs;
    float avg;

    // Input scores for 5 subjects
    printf("Enter scores for student:\n");
    printf("Enter score in Physics: ");
    scanf("%d", &phy);
    printf("Enter score in Chemistry: ");
    scanf("%d", &chem);
    printf("Enter score in Maths: ");
    scanf("%d", &math);
    printf("Enter score in English: ");
    scanf("%d", &eng);
    printf("Enter score in Computer Science: ");
    scanf("%d", &cs);M

    // Calculate average
    avg = (phy + chem + eng + math + cs) / 5.0;
    printf("Average Score in all Subjects: %f\n", avg); 

    // Determine grade based on average
    if (avg >= 90) {
        printf("Student Got 'A' Grade\n");
    } else if (avg >= 60) {
        printf("Student Got 'B' Grade\n");
    } else if (avg >= 40) {
        printf("Student Got 'C' Grade\n");
    } else {
        printf("Student has Failed\n");
    }

    return 0;
}
