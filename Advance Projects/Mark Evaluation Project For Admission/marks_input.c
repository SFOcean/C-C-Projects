#include <stdio.h>
int main()
{
    FILE *in;
    char math[10], phy[10], ch[10], st[10];

    in = fopen ("marks.txt", "w");
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

    fprintf(in, "Student_NO: %d\n", i);
    fprintf(in, "Math: %s\n", math);
    fprintf(in, "Physics: %s\n", phy);
    fprintf(in, "Chemistry: %s\n", ch);
    fprintf (in, "\n");
    }
    fclose (in);
    return 0;
}

