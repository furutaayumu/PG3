#pragma once
#include "Shape.h"
class Circle :public IShape {
public:
	void Size() override;
	void Draw() override;

private:
	float radius = 25.0f;
	float area;
};