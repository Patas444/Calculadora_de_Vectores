#pragma once
#include "Commons.h"

class Vector2 {
public:
	Vector2(double x, double y) : x_(x), y_(y) {}
	~Vector2() = default;

	//Realiza la suma entre 2 vectores
	Vector2 suma(Vector2 v)
	{
		return Vector2(x_ + v.x_, y_ + v.y_);
	}

	//Realiza la resta entre 2 vectores
	Vector2 resta(Vector2 v)
	{
		return Vector2(x_ - v.x_, y_ - v.y_);
	}

	//Realiza la multiplicacion entre 2 vectores
	Vector2 multiplicacion(Vector2 v)
	{
		return Vector2(x_ * v.x_, y_ * v.y_);
	}

	//Realiza la division entre 2 vectores
	Vector2 division(Vector2 v)
	{
		return Vector2(x_ / v.x_, y_ / v.y_);
	}

	//Realiza el producto escala entre 2 vectores
	double productoEscalar(Vector2 v)
	{
		return (x_ * v.x_) + (y_ * v.y_);
	}

	//Realiza el producto vectorial entre 2 vectores
	Vector2 productoVectorial(Vector2 v)
	{
		return Vector2((x_ * v.y_) - (y_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
	}

	//Realiza la magnitud entre 2 vectores
	double magnitud() 
	{
		return sqrt(x_ * x_ + y_ * y_);
	}

	//Realiza la normalizacion entre 2 vectores
	Vector2 normalizar()
	{
		double mag = magnitud();
		return Vector2(x_ / mag, y_ / mag);
	}

	//Muestra el resultado de los 2 vectores
	void mostrar() 
	{
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}
private:
	double x_;
	double y_;
};