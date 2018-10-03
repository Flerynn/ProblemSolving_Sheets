#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const int N = 2e5+10;
int gcdExtended(int a, int b, int *x, int *y){
    if (a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
// a * x = 1 mod m find x ? 
// use gcdExtended to solve this .. 
int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	int x , y , a , m;
	cin>>a>>m; 
	int gcd = gcdExtended(a,m,&x,&y);
	if(gcd != 1)puts("a and m not co-prime // no Inverse");
	else {
		// if x === negative !
		int ans = (x%m + m)%m;
		cout<<ans<<endl;
	}
}