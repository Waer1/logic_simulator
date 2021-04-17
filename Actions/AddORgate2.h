#pragma once
#include "action.h"
#include "..\Components\OR2.h"

class AddORgate2: public Action
{
private:
	//Parameters for rectangular area to be occupied by the gate
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
	bool selected; //Tells whether the component is selected or not

	//Get a Pointer to the Input / Output Interfaces
	Output* pOut;
	Input* pIn;

	OR2 *pA;	//Pointer to AND Gate

	GraphicsInfo GInfo; //Gfx info to be used to construct the AND2 gate
public:
	AddORgate2(ApplicationManager *pApp);
	virtual ~AddORgate2(void);

	//Reads parameters required for action to execute
	virtual void ReadActionParameters();
	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();


};

