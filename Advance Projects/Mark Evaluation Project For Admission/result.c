#include <stdio.h>

int main()
{
    FILE *input;
    char sub1[80], sub2[80], sub3[80], line_1[80], line_2[80], line_3[80], line_4[80], c[80], blank_line[80];
    int num, math, phy, ch;

    input = fopen("marks.txt", "r");
    printf ("Total Student: 10\n\n");
    for (int i=0; i<10; i++) {
        fgets(line_1, 80, input);
        fgets(line_2, 80, input);
        fgets(line_3, 80, input);
        fgets(line_4, 80, input);
        fgets(blank_line, 80, input);

        sscanf (line_1, "%s %d", &c, &num);
        sscanf (line_2, "%s %d", &sub1, &math);
        sscanf (line_3, "%s %d", &sub2, &phy);
        sscanf (line_4, "%s %d", &sub3, &ch);

        if (math>=60&&phy>=50&&ch>=40&&math+phy+ch>=200)
            printf ("%s is Eligible\n", line_1);
        else if (math+phy>=150)
            printf ("%s is Eligible\n", line_1);
        else
            printf ("%s is NOT Eligible\n", line_1);
    }


    fclose(input);

    return 0;
}
