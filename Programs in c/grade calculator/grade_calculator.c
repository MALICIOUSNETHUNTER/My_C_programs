#include <stdio.h>
int main()
{
    float sci, math, social_sci, english, hindi, total, per;
    int i1, i2, i3, i4, i5;

    printf("enter your marks of science out of 80\n enter your marks of math out of 80\n enter your marks of social science out of 80\n enter your marks of english out of 80\n enter your marks of hindi out of 80\n  : ");
    scanf("%f %f %f %f %f", &sci, &math, &social_sci, &english, &hindi);

    printf("enter internal marks in science out of 20\n enter internal marks in math out of 20\n enter internal marks in social science out of 20\n enter internal marks in english out of 20\n enter internal marks in hindi out of 20\n :");
    scanf("%d %d %d %d %d", &i1, &i2, &i3, &i4, &i5);

    sci += i1;
    math += i2;
    social_sci += i3;
    english += i4;
    hindi += i5;

    total = sci + math + social_sci + english + hindi;
    per = total*100/500;
    
    printf("Your total marks out of 500 : %f\n", total);
    printf("Your overall percentage out of 100 : %f\n", per);

        if (sci >= 90)
    {
        printf("grade in science : A+\n");
    }
    else if (80 <= sci <= 89)
    {
        printf("Grade in science : A \n");
    }
    else if (70 <= sci <= 79)
    {
        printf("Grade in science : B+\n");
    }
    else if (60 <= sci <= 69)
    {
        printf("Grade in science : B\n");
    }
    else if (50 <= sci <= 59)
    {
        printf("Grade in science : C\n");
    }
    else if (40 <= sci <= 49)
    {
        printf("Grade in science : D\n");
    }
    else
    {
        printf("Grade in science : FAIL\n");
    }

    if (math >= 90)
    {
        printf("grade in math : A+\n");
    }
    else if (80 <= math <= 89)
    {
        printf("Grade in math : A \n");
    }
    else if (70 <= math <= 79)
    {
        printf("Grade in math : B+\n");
    }
    else if (60 <= math <= 69)
    {
        printf("Grade in math : B\n");
    }
    else if (50 <= math <= 59)
    {
        printf("Grade in math : C\n");
    }
    else if (40 <= math <= 49)
    {
        printf("Grade in math : D\n");
    }
    else
    {
        printf("Grade in math : FAIL\n");
    }

    if (social_sci >= 90)
    {
        printf("grade in social science : A+\n");
    }
    else if (80 <= social_sci <= 89)
    {
        printf("Grade in social science : A \n");
    }
    else if (70 <= social_sci <= 79)
    {
        printf("Grade in social science : B+\n");
    }
    else if (60 <= social_sci <= 69)
    {
        printf("Grade in social science : B\n");
    }
    else if (50 <= social_sci <= 59)
    {
        printf("Grade in social science : C\n");
    }
    else if (40 <= social_sci <= 49)
    {
        printf("Grade in social science : D\n");
    }
    else
    {
        printf("Grade in social science : FAIL\n");
    }

    if (english >= 90)
    {
        printf("grade in english : A+\n");
    }
    else if (80 <= english <= 89)
    {
        printf("Grade in english : A \n");
    }
    else if (70 <= english <= 79)
    {
        printf("Grade in english : B+\n");
    }
    else if (60 <= english <= 69)
    {
        printf("Grade in english : B\n");
    }
    else if (50 <= english <= 59)
    {
        printf("Grade in english : C\n");
    }
    else if (40 <= english <= 49)
    {
        printf("Grade in english : D\n");
    }
    else
    {
        printf("Grade in english : FAIL\n");
    }

    if (hindi >= 90)
    {
        printf("grade in hindi : A+\n");
    }
    else if (80 <= hindi <= 89)
    {
        printf("Grade in hindi : A \n");
    }
    else if (70 <= hindi <= 79)
    {
        printf("Grade in hindi : B+\n");
    }
    else if (60 <= hindi <= 69)
    {
        printf("Grade in hindi : B\n");
    }
    else if (50 <= hindi <= 59)
    {
        printf("Grade in hindi : C\n");
    }
    else if (40 <= hindi <= 49)
    {
        printf("Grade in hindi : D\n");
    }
    else
    {
        printf("Grade in hindi : FAIL\n");
    }

    if (per >= 90)
    {
        printf("your overall grade : A+\n");
    }
    else if (80 <= per <= 89)
    {
        printf("Your overall grade : A \n");
    }
    else if (70 <= per <= 79)
    {
        printf("Your overall grade : B+\n");
    }
    else if (60 <= per <= 69)
    {
        printf("Your overall grade : B\n");
    }
    else if (50 <= per <= 59)
    {
        printf("Your overall grade : C\n");
    }
    else if (40 <= per <= 49)
    {
        printf("Your overall grade : D\n");
    }
    else
    {
        printf("Your overall grade : FAIL\n");
    }

    return 0;
}