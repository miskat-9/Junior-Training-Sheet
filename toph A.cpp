#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define wh()              while(n--)
#define mp                make_pair
#define For(i, n)         for (int i = 0; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define mp                make_pair

int main()
{
    ll n;

    while(scanf("%lld",&n) == 1)
    {
        if(n == 0) break;
        else{
            ll r = sqrt(n);
            r*=r;
            if(r==n)
                cout << "yes\n";
            else
                cout << "no\n";
        }

    }

    #ifndef ONLINE_JUDGE
        cerr <<endl<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;
}
