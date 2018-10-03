//Get the area of any Polygon vi.size > 2
double AreaOfPolygon(vector<Point> vi){
	double dd = 0;
	f(i,vi.size()-1)dd+=((vi[0]-vi[i])^(vi[0]-vi[i+1]))/2;
	if(dd<0)dd*=-1;
	return dd;
}