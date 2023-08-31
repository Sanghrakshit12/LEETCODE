#include <bits/stdc++.h>
using namespace std;

void sortcolours(int nums[], int n)
{
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[m++], nums[l++]);
        }
        else if (nums[m] == 2)
        {
            swap(nums[m], nums[h--]);
        }
        else
        {
            m++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    int nums[] = {2, 1, 2, 0, 0, 0, 1, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    sortcolours(nums, n);
}