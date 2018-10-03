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
const int N = 10000007;
int prime[N + 10];
int main() {
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	// 1 could be prime depend on the question Input !
	prime[0]=prime[1]=true;
	for(int i=2; i*i<=N; ++i)if(prime[i]==0)for(int j=i*i; j<=N; j+=i)if(prime[j]==false)prime[j]=i;
	int n;
	scanf("%d", &n);
	printf("1");
	if(n == 1){
		puts("");
	}
	while(prime[n] != 0) {
		printf(" x %d", prime[n]);
		n /= prime[n];
	}
	if(n>1)printf(" x %d", n);
	puts("");
}
