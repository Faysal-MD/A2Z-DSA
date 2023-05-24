#include<bits/stdc++.h>
using namespace std;

int revN(int n)
{
    long long int revNumber = 0;
    while(n != 0)
    {
        int lastDigit = n%10;
        revNumber = (revNumber*10)+lastDigit;

        if((revNumber > INT_MAX) || (revNumber < INT_MIN))
        {
            return 0;
        }

        n /= 10;
    }

    return revNumber;
}

int main()
{
    int n;
    cin>>n;

    cout<<revN(n)<<endl;

    return 0;
}
