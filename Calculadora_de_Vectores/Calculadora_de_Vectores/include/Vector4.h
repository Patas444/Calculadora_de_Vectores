#pragma once
#include "Commons.h"

class Vector4
{
public:
	Vector4(double x, double y, double z, double w) : x_(x), y_(y), z_(z), w_(w) {}
	~Vector4() = default;

	Vector4 sum(Vector4 v)
	{
		return Vector4(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
	}

	Vector4 rest(Vector4 v)
	{
		return Vector4(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
	}

	Vector4 mult(Vector4 v)
	{
		return Vector4(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
	}

	Vector4 div(Vector4 v)
	{
		return Vector4(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
	}

	double prEsc(Vector4 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_) + (w_ * v.w_);
	}

	double magnitud()
	{
		return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(w_, 2));
	}

	Vector4 norm()
	{
		double mag = magnitud();
		return Vector4(x_ / mag, y_ / mag, z_ / mag, w_ / mag);
	}

	void Mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ", " << w_ << ")" << endl;
	}

private:
	float w_;
	float x_;
	float y_;
	float z_;
};
