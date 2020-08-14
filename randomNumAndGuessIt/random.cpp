#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main(int argc, char const* argv[])
{
    srand(time(NULL));
    int a[100];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    int randomnum = rand() % 5;
    if (randomnum = a[0])
    {
        printf("Correct\n");
    }
    else if (randomnum = a[1])
    {
        printf("Correct\n");
    }
    else if (randomnum = a[2])
    {
        printf("Correct\n");
    }
    else
    {
        printf("Error\n");
    }
    printf("Randomnum is %d", randomnum);
    return 0;
}
