#include <stdio.h>
#include <stdlib.h>
#include "GradeHeader.h"

int main()
{


    int score;

    printf("Enter your score: ");
    scanf("%d", &score);
    showLetterGrade(score);

    return 0;
}
