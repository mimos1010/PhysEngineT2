#pragma once
#include "main.h"
#include "Shapes.h"

const int GRAVITY = 3;


int main()
{
	RenderWindow window(VideoMode(800, 600), "Physics Engine");
	bool drawing = true;

	Shapes myCircle;

	int shape_size = 50;

	int current_shape = 0;

	while (window.isOpen())
	{

		if (current_shape > 2)
		{
			current_shape = 0;
		}

		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();

				break;

			case Event::KeyPressed:
				switch (event.key.code)
				{
				case Keyboard::W:

						shape_size++;
						cout << "shape size: " << shape_size << "\n";

					break;
				case Keyboard::S:

						shape_size--;
						cout << "shape size: " << shape_size << "\n";
			
					break;
				case Keyboard::D:

					drawing = !drawing;
					cout << "drawing state " << drawing << "\n";
					break;
				case Keyboard::E:

					
					break;
				}

				break;

			case Event::MouseButtonPressed:
				if(event.mouseButton.button == Mouse::Left)
				{
					myCircle.newCircleShape(shape_size, window, drawing);
				}
				break;
			}
		}

		window.clear();

		myCircle.updateCircles(window, GRAVITY);

		window.display();

	}

	return 0;
}
