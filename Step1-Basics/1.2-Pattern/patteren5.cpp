#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"* ";
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
        pattern(n);
    }


	return 0;
}

