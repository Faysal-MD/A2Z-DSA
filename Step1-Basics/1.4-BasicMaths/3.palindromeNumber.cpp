#include<bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int reverseNumber = 0;
    int temp = n;
    while(n!=0)
    {
        int lastDigit = n%10;
        reverseNumber = (reverseNumber*10)+lastDigit;
        n /= 10;
    }

    if(temp>=0 && reverseNumber == temp)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

int main()
{
    int n;
    cin>>n;

    palindrome(n);

	return 0;
}
