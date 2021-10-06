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

    int s, mod;
    while (scanf("%d%d", &s, &mod)){
        int cnt=0;
        printf("%10d%10d",s,mod);
        int ans=0;
        while (true)
        {
            ans = (ans+s)%mod;
            cnt++;
            if (ans==0){
                if (cnt!=mod){
                    cout<<"    Bad Choice"<<endl;
                }
                else{
                    cout<<"    Good Choice"<<endl;
                }
                cout<<endl;
                break;
            }
        }
    }

#ifndef ONLINE_JUDGE
    cerr <<endl<< "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
