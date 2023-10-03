#pragma once
#include "Commons.h"

class Vector2 {
public:
	Vector2(double x, double y) : x_(x), y_(y) {}
	~Vector2() = default;

	Vector2 sum(Vector2 v) {
		return Vector2(x_ + v.x_, y_ + v.y_);
	}

	Vector2 rest(Vector2 v) {
		return Vector2(x_ - v.x_, y_ - v.y_);
	}

	Vector2 mult(Vector2 v) {
		return Vector2(x_ * v.x_, y_ * v.y_);
	}

	Vector2 div(Vector2 v) {
		return Vector2(x_ / v.x_, y_ / v.y_);
	}

	double prEsc(Vector2 v) {
		return (x_ * v.x_) + (y_ * v.y_);
	}

	Vector2 prVect(Vector2 v) {
		return Vector2((x_ * v.y_) - (y_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
	}

	double magnitud() {
		return sqrt(x_ * x_ + y_ * y_);
	}

	Vector2 norm() {
		double mag = magnitud();
		return Vector2(x_ / mag, y_ / mag);
	}

	void Mostrar() {
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}
private:
	double x_;
	double y_;
};