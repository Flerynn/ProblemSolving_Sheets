
// Get the smallest Distance between Segment A , B with Point C
double DistSegmentPoint(Point a , Point b , Point c){
	Point AB = a - b;
	Point BA = b - a;
	Point AC = a - c;
	Point BC = b - c;
	if(AB*AC >0 && BC*BA >0){
		double d = (AB ^ AC);
		if(d<0)d*=-1;
		return ( d / Dis(a,b) );
	}
	return min(Dis(a,c) , Dis(b,c));
}
