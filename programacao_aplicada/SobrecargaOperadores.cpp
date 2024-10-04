#include <iostream>
#include <string>

using namespace std;

class Point{
	public:
		int x_, y_;
		Point(int x, int y);
		Point();
		Point operator+(Point p);
};

Point::Point(int x, int y){
	x_ = x;
	y_ = y;
}

Point::Point(){}

Point Point::operator+(Point p){	
	return Point(x_ + p.x_, y_ + p.y_);
}

int main() {
	Point point(1,2), point1(2,1);

	Point point2 = point + point1;
	point2.getPoint();
}


