#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    int temp = n;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        temp /= 10;

        if ((lastDigit > 0) && (n % lastDigit == 0))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
