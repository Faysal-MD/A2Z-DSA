// Brute force method
// ------------------------------
/*
#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    printDivisor(n);

	return 0;
}
*/

// Optimized method
// ------------------------------

#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n)
{
    vector <int> ls;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            ls.emplace_back(i);

            if(n/i != i)
              ls.emplace_back(n/i);
        }
    }

    sort(ls.begin(), ls.end());

    for(auto it : ls)
    {
        cout<<it<<" ";
    }

    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    printDivisor(n);

    return 0;
}
