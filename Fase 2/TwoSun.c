// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <stdio.h>
int main(void)
{
    // int nums[3], int numsSize, int target, int returnSize;
    int nums[3] = {3, 2, 4};
    int target = 6;
    int i;

    for (i = 0; i < 3; i++)
    {
        if (nums[i] + nums[i + 1] == target)
        {
            printf("\n[%d, %d]\n", i, i + 1);
        }
        else
        {
            return 1;
        }
    }
}