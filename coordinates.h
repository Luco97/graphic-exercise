#pragma once
#include <vector>

class coordinates
{
private:
	double x;
	double y;
public:
	coordinates();
	coordinates(double x, double y);
	void setValues(double x, double y);
	std::vector<double> getValues();
	bool operator > (coordinates& coor);
};

