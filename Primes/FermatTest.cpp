#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const double PI = acos(-1);
const ll infl = 9012345678901234567;
const double eps = 1e-8;
const int N = 1e5;
/* Calculate ( a^b ) %c */
ll mulmod(ll a,ll b,ll c){
    ll x = 0 , y = a%c ;
    while(b>0){
        if(b%2) x = (x+y)%c ;
        y=(y*2)%c;
        b/=2;
    }
    return x%c ;
}
ll POW(ll a,ll b,ll c){
    ll x = 1 , y = a%c ;
    while(b>0){
        if(b%2)x=mulmod(x,y,c) ;
        y=mulmod(y,y,c);
        b/=2;
    }
    return x%c ;
}

// same as miller p -> prime , k -> number of iterations
bool FermatTest(ll p , int k){
	while(k--){
		ll rnd = (rand()%(p-1))+1;
		if(POW(rnd,p-1,p) != 1)return false;
	}
	return true;
}
int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	
	ll a;
	cin>>a;
	if(FermatTest(a , 20) == true)puts("YES");
	else puts("NO");
}