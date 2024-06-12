#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        ll sum = 0;
        for (int i = l; i < r; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}