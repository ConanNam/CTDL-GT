#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long long temp;
        set<long long> myset;
        for (long i = 0; i < n; i++)
        {
            cin >> temp;
            while (temp > 0)
            {
                int num = temp % 10;
                myset.insert(num);
                temp = temp / 10;
            }
        }
        vector<int> rs;
        set<long long>::iterator it;
        for (it = myset.begin(); it != myset.end(); ++it)
            rs.push_back(*it);
        for (int i = 0; i < rs.size(); i++)
            cout << rs[i] << " ";
        cout << endl;
    }
}