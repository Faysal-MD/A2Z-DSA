#include<bits/stdc++.h>
using namespace std;

void pattern4(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n, t;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        pattern4(n);
    }


	return 0;
}
