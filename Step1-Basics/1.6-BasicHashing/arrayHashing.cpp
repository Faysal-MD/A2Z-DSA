#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        // fetch
        cout << hash[num] << endl;
    }

    return 0;
}