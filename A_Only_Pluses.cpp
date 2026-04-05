#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[] = {a, b, c};
        sort(arr, arr + 3);
        for (int i = 0; i < 5; i++)
        {
            arr[0]++;
            sort(arr, arr + 3);
        }

        int sum = arr[0] * arr[1] * arr[2];
        cout << sum << "\n";
    }
    return 0;
}