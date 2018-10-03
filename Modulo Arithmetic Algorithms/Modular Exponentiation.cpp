#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const int N = 2e5+10;

int POW(int a, int b , int m){
	if(a == 1 || b == 0)return 1;
	if(a == 0)return 0;
	if(b == 1)return a;

	int p = POW(a,b/2,m);
	p = (1LL*p*p)%m;
	if(b%2 != 0)p = (1LL*p*a)%m;
	return p;
}


//tags : Power,MOD,Fermat's little theorem
// equ : A^B = C Mod M ==> (A%M)^(B^M-1) = C Mod M  ////////// Such that M = Prime Number
int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int base=0 , pp=0;
		f(i,a.size())base=((1LL*base*10)%mod+(a[i]-'0')%mod)%mod;
		f(i,b.size())pp=((1LL*pp*10)%(mod-1)+(b[i]-'0')%(mod-1))%(mod-1);
		cout<<POW(base,pp,mod)<<endl;
	}
}