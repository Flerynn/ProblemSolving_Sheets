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
const int N = 100001;
const int RR = 1000000000;
bool sg[N]={};
bool prime[N+10] = {};
vector<int> vi;
int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	for(int i=2 ; i*i<=RR ; ++i)
		if(prime[i] == false)
			for(ll j=i*i ; j<=N ; j+=i)prime[j]=true;
	f1(i,2,N+1)if(prime[i] == false)vi.push_back(i);
	int t;
	scanf("%d" , &t);
	while(t--){
		f(i,N)sg[i]=false;
		ll a , b;
		cin>>a>>b;
		if(a==1)prime[0]=false,++a;
		f(i,vi.size()){
			if(vi[i]>=b)break;
			int st = ((a+vi[i]-1)/vi[i] * vi[i]);
			for(int j = st - a ; j<=b-a ; j+=vi[i])sg[j]=true;
			if(vi[i] == st)sg[st-a]=false;
		}
		f(i,b-a+1)if(sg[i] == false)cout<<i+a<<endl;
		cout<<endl;
	}
}