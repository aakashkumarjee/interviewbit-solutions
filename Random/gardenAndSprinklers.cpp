#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sprinklers, range;
        cin >> n >> sprinklers >> range;
        vector<int> houses(n, 0);
        for (int i = 0; i < sprinklers; i++)
        {
            int sprinkler;
            cin >> sprinkler;
            houses[sprinkler - range > 0 ? sprinkler - range : 0] = 1;
            houses[sprinkler + range + 1 < n ? range + sprinkler + 1 : n - 1] = -1;
        }
        for (int i = 1; i < n; i++)
        {
            houses[i] = houses[i] + houses[i - 1];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            //cout << houses[i] << " ";
            if (houses[i] == 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
