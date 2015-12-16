/*
=================
cFlag.h
- Header file for class definition - SPECIFICATION
- Header file for the Rocket class which is a child of cSprite class
=================
*/
#ifndef _CFLAG_H
#define _CFLAG_H
#include "cSprite.h"
#include "racingGame.h"

class cFlag : public cSprite
{


public:
	void render();		// Default render function
	void update(float deltaTime);		// Update method
	void renderCollisionBox();				// Use this function to show the collision box
	
};
#endif
