#include <stdio.h>
int main()
{
    // int nums[] = {69,4,54,73,10};
    int nums[5];
    printf("Type 5 numbers to find the lowest \n");
    for (size_t i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
    {
        scanf("%d", &nums[i]);
    }

    int largestNum = nums[1];
    for (size_t i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
    {
        if (nums[i] < largestNum)
        {
            largestNum = nums[i];
        }
    }

    printf("Smallest number is %d", largestNum);
}