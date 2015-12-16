/*
=================
cCar.h
- Header file for class definition - SPECIFICATION
- Header file for the Car class which is a child of cSprite class
=================
*/
#ifndef _CCAR_H
#define _CCAR_H
#include "cSprite.h"
#include "racingGame.h"

class cCar : public cSprite
{
private:
	glm::vec2 rocketVelocity = glm::vec2(0.0f, 0.0f);

public:
	void render();		// Default render function
	void update(float deltaTime);		// Rocket update method
	void setRocketVelocity(glm::vec2 rocketVel);   // Sets the velocity for the rocket
	glm::vec2 getRocketVelocity();				 // Gets the rocket velocity

};
#endif