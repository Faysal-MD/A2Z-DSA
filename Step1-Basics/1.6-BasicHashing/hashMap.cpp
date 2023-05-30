#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cin >> n;
    map <int, int> mpp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // precompute
        mpp[arr[i]]++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        // fetch
        cout << mpp[num] << endl;
    }

    return 0;
}
