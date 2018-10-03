#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const int N = 2e5+10;

// GCD Function 

int gcd(int a, int b){
    if(a == 0)return b;
    return gcd(b%a, a);
}

int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	cout<<gcd(6,2)<<endl;
}