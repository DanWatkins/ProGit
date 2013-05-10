#ifndef _pg_GUI_H
#define _pg_GUI_H

#include "Main.h"

class GUI
{
private:
	std::vector<int*> mHeads;
	
public:
	GUI();
	
	void AddHead(int *head) { mHeads.push_back(head); }
};


#endif

