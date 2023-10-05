#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    cout << "Original : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(arr);

    cout << "Sorted: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
