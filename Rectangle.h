#pragma once
#include "Shape.h"
class Rectangle : public IShape {
public:
	void Size() override;
	void Draw() override;

private:
	float x = 20.0f;
	float y = 10.0f;
	float area;

};