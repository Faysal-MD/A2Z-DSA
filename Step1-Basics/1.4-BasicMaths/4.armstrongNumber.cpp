#include<bits/stdc++.h>
using namespace std;

string armstrong(int n)
{
    int cnt, sum = 0;
    int temp = n;

    string st = to_string(n);
    cnt = st.length();

    while(n!=0)
    {
        int digit = n%10;
        sum = sum + pow(digit, cnt);
        n = n/10;
    }

    if(temp == sum)
        return "Yes";
    else
        return "No";
}

int main()
{
    int n;
    cin>>n;

    cout<<armstrong(n)<<endl;

	return 0;
}
