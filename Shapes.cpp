#include "Shapes.h"



Shapes::Shapes()
{
}


Shapes::~Shapes()
{
}

void Shapes::newCircleShape(int shapesize, RenderWindow &windowx, bool solid)
{
	shapex.setRadius(shapesize);
	circles.push_back(shapex);
	properties.push_back({ Mouse::getPosition(windowx).x - shapesize, Mouse::getPosition(windowx).y - shapesize, solid });
}

void Shapes::updateCircles(RenderWindow &windowy, float gravity)
{
	movement.y += gravity;

	for (int i = 0; i < circles.size(); i++)
	{
			circles[i].setPosition(properties[i].posx, properties[i].posy);
			windowy.draw(circles[i]);
	}
}
