#pragma once
#include "Commons.h"

class Vector3
{
public:
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	//Realiza la suma entre 3 vectores
	Vector3 suma(Vector3 v)
	{
		return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
	}

	//Realiza la resta entre 3 vectores
	Vector3 resta(Vector3 v)
	{
		return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
	}

	//Realiza la multiplicacion entre 3 vectores
	Vector3 multiplicacion(Vector3 v)
	{
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}

	//Realiza la division entre 3 vectores
	Vector3 division(Vector3 v)
	{
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}

	//Realiza el producto escala entre 3 vectores
	double productoEscalar(Vector3 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}

	//Realiza el producto vectorial entre 3 vectores
	Vector3 productoVectorial(Vector3 v)
	{
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}

	//Realiza la magnitud entre 3 vectores
	double magnitud()
	{
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
	}

	//Realiza la normalizacion entre 3 vectores
	Vector3 normalizar()
	{
		double mag = magnitud();
		return Vector3(x_ / mag, y_ / mag, z_ / mag);
	}

	//Muestra el resultado de los 3 vectores
	void mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ")" << endl;
	}



private:
	double x_;
	double y_;
	double z_;
};