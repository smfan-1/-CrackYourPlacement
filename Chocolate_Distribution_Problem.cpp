#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int m;
        cin >> m;
        sort(arr, arr + n);

        if (n < m)
        {
            cout << -1 << endl;
        }

        
        else
        {
            int min_diff=INT_MAX;
            for (int i = 0; i + m - 1 < n; i++)
            {
                int diff = arr[i + m - 1] - arr[i];
                if (diff < min_diff)
                    min_diff = diff;
            }
            cout<<min_diff<<endl;
        }
    }
}