/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
  int i = 0, j = 0;
    int n = numsSize;
    int* result = NULL;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(target == nums[i] + nums[j]) {
                result = (int*)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    //for(int i = 0; i < numsSize; i++) {
    //    printf("arr[%d] = %d\n", i, *(returnSize+i));
    //}
    return result;
}
