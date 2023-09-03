#include <bits/stdc++.h>
using namespace std;
vector<int> nums;
void input(int n)
{
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        nums.push_back(val);
    }
}
void selectionSort(vector<int> &nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(nums[i], nums[min_index]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    input(n);
    selectionSort(nums, n);
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}