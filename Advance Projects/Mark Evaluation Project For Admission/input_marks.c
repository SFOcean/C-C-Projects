#include <stdio.h>
int main()
{
    FILE *input;
    char math[10], phy[10], ch[10], st[10];

    input = fopen ("marks.txt", "w");
    printf ("Total students: 10\n\n");

    for (int i=1; i<=10; i++) {
    printf ("Student_NO: %d\n", i);
    printf("Enter marks: \n");
    printf ("Math: ");
    scanf ("%s", &math);
    printf ("Physics: ");
    scanf ("%s", &phy);
    printf ("Chemistry: ");
    scanf ("%s", &ch);
    printf ("\n");

    fprintf(input, "Student_NO: %d\n", i);
    fprintf(input, "Math: %s\n", math);
    fprintf(input, "Physics: %s\n", phy);
    fprintf(input, "Chemistry: %s\n", ch);
    fprintf (input, "\n");
    }
    fclose (input);
    return 0;
}
