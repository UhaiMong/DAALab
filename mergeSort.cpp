#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int nums[N];

void merge(int l, int r, int mid)
{
    int left = mid - l + 1;
    int leftArray[left + 1];

    int right = r - mid;
    int rightArray[right + 1];

    for (int i = l, j = 0; i <= mid; i++, j++)
        leftArray[j] = nums[i];
    for (int i = mid + 1, j = 0; i <= r; i++, j++)
        rightArray[j] = nums[i];
    int lp = 0, rp = 0;
    leftArray[left] = INT_MAX;
    rightArray[right] = INT_MAX;
    for (int i = l; i <= r; i++)
    {
        if (leftArray[lp] <= rightArray[rp])
        {
            nums[i] = leftArray[lp];
            lp++;
        }
        else
        {
            nums[i] = rightArray[rp];
            rp++;
        }
    }
}
void mergeSort(int l, int r)
{
    // base case
    if (r == l)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
void input(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
}
int main()
{
    int n;
    cin >> n;
    input(n);
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
