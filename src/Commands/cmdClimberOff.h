#ifndef cmdClimberOff_H
#define cmdClimberOff_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdClimberOff: public CommandBase
{
public:
	cmdClimberOff();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
