#include <bits/stdc++.h>
using namespace std;
vector<int> fibonacci_series;
void fibonacci(int n)
{
    fibonacci_series.push_back(0);
    if (n == 0)
        return;
    fibonacci_series.push_back(1);
    if (n == 1)
        return;
    for (int i = 2; i <= n; i++)
    {

        int nextFibonacci = fibonacci_series[i - 1] + fibonacci_series[i - 2];
        fibonacci_series.push_back(nextFibonacci);
    }
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci_series[i] << " ";
    }
    return 0;
}