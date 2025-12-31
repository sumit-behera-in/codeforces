#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int sum = 0, maxi = 0;
        int m;
        cin >> m;
        vector<int> arr;
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            arr.push_back(k);
        }

        for (int i = 1; i < m; i++)
        {
            sum += abs(arr[i] - arr[i - 1]);
            if (i < m - 1)
            {
                maxi = max(maxi, abs(arr[i] - arr[i - 1]) + abs(arr[i] - arr[i + 1]) - abs(arr[i + 1] - arr[i - 1]));
            }
        }

        maxi = max(maxi, max(abs(arr[1] - arr[0]), abs(arr[m - 1] - arr[m - 2])));

        cout << sum - maxi << endl;
    }

    return 0;
}