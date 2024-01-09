#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int *arr = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
}

int main()
{
    int num[] = {3, 3}, target = 6, returnSize;
    int *ptr = &returnSize;
    int *arr = twoSum(num, sizeof(num) / sizeof(num[0]), target, ptr);
    printf("[%d, %d]\n", arr[0], arr[1]);
    free(arr);
    return 0;
}

