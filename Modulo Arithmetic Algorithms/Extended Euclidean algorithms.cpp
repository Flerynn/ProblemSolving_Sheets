#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
#define f(i , n) for (int i = 0; i < (int)(n); ++i)
#define f1(i, x, n) for (int i = x; i < (int)(n); ++i)
const int mod = 1000000007;
const int inf = 2012345678;
const int N = 2e5+10;

// find x,y for this | ax + bx = gcd(a,b) 

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

int main(){
#if !ONLINE_JUDGE
	freopen("In.txt", "r", stdin);
#endif
	 int x, y;
    int a = 35, b = 15;
    int g = gcdExtended(a, b, &x, &y);
    cout<<x<<" "<<y<<endl;
    return 0;
}