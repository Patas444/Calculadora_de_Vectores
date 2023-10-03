#pragma once
#include "Commons.h"

class Vector3
{
public:
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	Vector3 sum(Vector3 v)
	{
		return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
	}

	Vector3 rest(Vector3 v)
	{
		return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
	}

	Vector3 mult(Vector3 v)
	{
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}

	Vector3 div(Vector3 v)
	{
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}

	double prEsc(Vector3 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}

	Vector3 prVect(Vector3 v)
	{
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}

	double magnitud()
	{
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
	}

	Vector3 norm()
	{
		double mag = magnitud();
		return Vector3(x_ / mag, y_ / mag, z_ / mag);
	}

	void Mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ")" << endl;
	}



private:
	double x_;
	double y_;
	double z_;
};