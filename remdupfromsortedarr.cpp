#include <bits/stdc++.h>
using namespace std;

void remdup(int nums[], int n)
{
    int temp[n];
    temp[0] = nums[0];
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            temp[c] = nums[i];
            c++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << temp[i] << " ";
    }
}
int main()
{
    int nums[] = {0, 0, 0, 1, 1, 2, 2, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    remdup(nums, n);
}