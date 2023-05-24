#include<bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int cnt = 0;
    while(n>0)
    {
        //int lastDigit = n%10;
        //cnt++;
        n /= 10;
        cnt++;
    }

    return cnt;
}

int main()
{
    int n;
    cin>>n;
    cout<<countDigit(n)<<endl;

	return 0;
}
