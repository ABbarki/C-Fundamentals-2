//Calculate the average of 5 numbers stored in an array.

    # include <stdio.h>

    int main(void)
    {
        int numbers[5];
        int sum;
        float average;
        for (int j; j<5; j ++)
        {
        printf("enter a number %d: ", j + 1);
        scanf("%d", &numbers[j]);
        }
        for(int j=0;j<5;j++)
        {
            sum += numbers[j];
        }
        average = sum /5.0;
        printf("%2f", average);
        printf("\n");
        return 0;
    }