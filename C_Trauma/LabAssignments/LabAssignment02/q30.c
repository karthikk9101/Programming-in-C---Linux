
#include <stdio.h>

#define SUBJECTS 5
#define MAX_STUDENTS 100

int calculateTotal(int marks[], int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
        total += marks[i];

    return total;
}

float calculateAverage(int marks[], int n)
{
    return (float)calculateTotal(marks, n) / n;
}

int findTopper(int totals[], int n)
{
    int i, topper = 0;

    for (i = 1; i < n; i++)
    {
        if (totals[i] > totals[topper])
            topper = i;
    }

    return topper;
}

int subjectMaximum(int marks[][SUBJECTS], int n, int sub)
{
    int i, max = marks[0][sub];

    for (i = 1; i < n; i++)
    {
        if (marks[i][sub] > max)
            max = marks[i][sub];
    }

    return max;
}

float subjectAverage(int marks[][SUBJECTS], int n, int sub)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += marks[i][sub];

    return (float)sum / n;
}

int main()
{
    int marks[MAX_STUDENTS][SUBJECTS];
    int totals[MAX_STUDENTS];
    float averages[MAX_STUDENTS];
    int n, i, j, topper;
    int allPass, passCount = 0, failCount = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_STUDENTS)
        return 1;

    for (i = 0; i < n; i++)
    {
        printf("Enter marks for student %d (5 subjects): ", i + 1);

        for (j = 0; j < SUBJECTS; j++)
        {
            scanf("%d", &marks[i][j]);

            if (marks[i][j] < 0 || marks[i][j] > 100)
            {
                printf("Invalid marks\n");
                return 1;
            }
        }

        totals[i] = calculateTotal(marks[i], SUBJECTS);
        averages[i] = calculateAverage(marks[i], SUBJECTS);
    }

    printf("\nStudent Results:\n");

    for (i = 0; i < n; i++)
    {
        printf("Student %d: Total = %d, Average = %.2f\n",
               i + 1, totals[i], averages[i]);
    }

    topper = findTopper(totals, n);

    printf("\nOverall topper: Student %d\n", topper + 1);
    printf("Topper total = %d\n", totals[topper]);

    for (j = 0; j < SUBJECTS; j++)
    {
        printf("Subject %d: Maximum = %d, Average = %.2f\n",
               j + 1,
               subjectMaximum(marks, n, j),
               subjectAverage(marks, n, j));
    }

    for (i = 0; i < n; i++)
    {
        allPass = 1;

        for (j = 0; j < SUBJECTS; j++)
        {
            if (marks[i][j] < 50)
                allPass = 0;
        }

        if (allPass)
            passCount++;
        else
            failCount++;
    }

    printf("Students scoring 50 or more in all subjects = %d\n",
           passCount);
    printf("Students failing at least one subject = %d\n",
           failCount);

    return 0;
}
