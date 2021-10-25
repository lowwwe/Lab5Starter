// Peter Lowe
// 25/10/21
// lab 6 starter
// replace all of this

#include "Point.h"

Point midPoint(Point t_start, Point t_end);
double lenght(Point t_start, Point t_end);
double slope(Point t_start, Point t_end);

int main()
{
	Point start; // start point of line segment
	Point end; // end point of line segment

	Point segmentMidpoint; // answer for midpoint method
	double segmentLenght; // answer for lenght 
	double segmentSlope;  // answer for slope 

	start = Point{ 0.0,0.0 };
	end = Point{ 3.0,4.0 };

	// expecting ( 1.5,2)
	segmentMidpoint = midPoint(start, end);
	// expecting 5
	segmentLenght = lenght(start, end);
	// expecting one&third
	segmentSlope = slope(start, end);

	return 1;
}


/// <summary>
/// Need to fill these in for all methods
/// </summary>
/// <param name="t_start"></param>
/// <param name="t_end"></param>
/// <returns></returns>
Point midPoint(Point t_start, Point t_end)
{
	return Point();
}

double lenght(Point t_start, Point t_end)
{
	return 0.0;
}

double slope(Point t_start, Point t_end)
{
	return 0.0;
}
