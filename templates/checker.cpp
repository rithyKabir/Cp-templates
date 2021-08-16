
#include <bits/stdc++.h>
using namespace std;
//SET PRECIOSION   cout << fixed ;  cout << setprecision(n) << ans << endl;
#define ll long long
#define pair<ll,ll> PAIR
#define endl "\n"
#define mod 1000000007
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll SET(ll n, ll pos) { return n = n | (1 << pos ); }
ll RESET(ll n, ll pos) { return n = n & ~(1<<pos);}
bool CHECK(ll n, ll pos) { return (bool) (n & (1<<pos));}

ll x,y,z,a,b,c,sum,ans,total,t,cnt,n,m,k,p,q,r,l,w,right,left,row,col,kase;
string s1,s2;
map<ll,ll> mp;
set<ll> s;
#define mx 10000000
map<ll,ll> :: iterator itr1, ptr1;
set<ll> :: iterator itr, ptr;
ll arr[70000009];
int main()
{
    freopen("outputs.TXT","r",stdin);
	///Peace be with you.
	//FAST;

    cin>>n>>q;
    for(ll i=0; i<n; i++)
    {
        cin>>x;

        x+=mx;
        arr[x]++;
    }
    //cout<<x<<endl;

    for(ll i = 1; i<= 20000000; i++ )
    {
        arr[i]+= arr[i-1];
    }

     //   cout<<arr[20000000]<<endl;
    while(q--)
    {
        cin>>x>>y;
        x+=mx;
        y+=mx;
        if(x>y)
        cout<<x<<" "<<y<<endl;
          if(x>20000000 || y>20000000)
        cout<<x<<" "<<y<<endl;
        ans = arr[y] - arr[x-1];

            cout<<ans<<endl;
    }

	return 0;
}


