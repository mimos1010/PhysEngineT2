#pragma once
#include "main.h"
class Shapes
{
public:
	Shapes();
	~Shapes();

	void newCircleShape(int shapesize, RenderWindow &window, bool solid); //takes in a modifiable, outside int

	void updateCircles(RenderWindow &window, float gravity);



private:

	Vector2f movement;

	bool is_solid;

	struct BasicShapeProperties {
		int posx;
		int posy;
		bool solidity;
	};

	vector <CircleShape> circles;
	vector <BasicShapeProperties> properties;

	CircleShape shapex = CircleShape();

};
