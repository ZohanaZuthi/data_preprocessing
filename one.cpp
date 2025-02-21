#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#define f(a, n, i) for (int i = a; i < n; i += 1)
using namespace std;
const int N = 1e5 + 10;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define el endl

#define pb push_back
#define ff first
#define ss second
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * 2 << endl;
    for (int i = 0; i < a; i++)
        cout << a << " ";
    for (int i = 0; i < 45 * a / 50; i++)
        cout
            << b << " ";
    for (int i = 0; i < 2 * a / 25; i++)
        cout << c << " ";
    for (int i = 0; i < (2 * a - 99 * a / 50); i++)
        cout << c + 1 << " ";
    cout << endl;

    return 0;
}
