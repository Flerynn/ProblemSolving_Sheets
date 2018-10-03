#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const int N = 2e5+10;

// the code taken from geeksforgeeks . 
ll modular_pow(ll base, int exponent,ll modulus){
    ll result = 1;
    while (exponent > 0){
        if (exponent & 1)result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
ll PollardRho(ll n){
    srand (time(NULL));
    if (n==1) return n;
    if (n % 2 == 0) return 2;
    ll x = (rand()%(n-2))+2;
    ll y = x;
    ll c = (rand()%(n-1))+1;
    ll d = 1;  
    while (d==1){
        x = (modular_pow(x, 2, n) + c + n)%n;
        y = (modular_pow(y, 2, n) + c + n)%n;
        y = (modular_pow(y, 2, n) + c + n)%n;
        d = __gcd(abs(x-y), n);
        if (d==n) return PollardRho(n);
    }
    return d;
}

int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	ll n;
	cin>>n;
	cout<<PollardRho(n)<<" "<<n%PollardRho(n)<<endl;
}