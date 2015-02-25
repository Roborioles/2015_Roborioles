#ifndef autoPutDownTote_H
#define autoPutDownTote_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class autoPutDownTote: public Command
{
public:
	autoPutDownTote();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
