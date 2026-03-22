#include <stdio.h>
#include <stdlib.h>

int* pairSum(int arr[], int n, int target){
    int st = 0, end = n - 1;

    // allocate space for answer (2 indices)
    int *ans = (int *)malloc(2 * sizeof(int));
    ans[0] = -1;  // default (if not found)
    ans[1] = -1;

    while(st < end){
        int curSum = arr[st] + arr[end];

        if(curSum == target){
            ans[0] = st;
            ans[1] = end;
            return ans;
        }
        else if(curSum > target){
            end--;
        }
        else{
            st++;
        }
    }

    return ans;
}

int main(){
    int vec[] = {2, 11, 7, 15};
    int n = 4;
    int target = 9;

    int *ans = pairSum(vec, n, target);

    printf("%d, %d\n", ans[0], ans[1]);

    free(ans); // free allocated memory
    return 0;
}