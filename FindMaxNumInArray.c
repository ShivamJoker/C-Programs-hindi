#include <stdio.h>
int main()
{
    // int nums[] = {69,4,54,73,10};
    int nums[5];
    printf("Type 5 numbers to find the highest \n");
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }

    int largestNum = 0;
    for (size_t i = 0; i < 5; i++)
    {
        if (nums[i] > largestNum)
        {
            largestNum = nums[i];
        }
    }

    printf("Largest number is %d", largestNum);
}