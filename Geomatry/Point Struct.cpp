const double PI = acos(-1);
ll gcd(ll a, ll b){return b?gcd(b, a % b):a;}
struct Point{
	ll x , y;
	Point(){}
	Point(int a , int b){x = a , y = b;}
	Point operator+(const Point &a){return Point(a.x+x,y+a.y);}
	bool operator <(const Point &p) const{return (x==p.x) ? y<p.y : x<p.x;}
	Point operator-(const Point &a){return Point(x-a.x , y-a.y);}
	double operator*(const Point &a){return (x*a.x + y*a.y);}
	double operator^(const Point &a){return (y*a.x - x*a.y);}
	Point Fa(){ll g = gcd(x, y); return Point(x/g , y/g);}
	scan(){cin>>x>>y;}
	print(){cout<<x<<" "<<y<<endl;}
};
double Dis(Point a, Point b){
		return sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
}