#ifndef cmdClimbReverse_H
#define cmdClimbReverse_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdClimberRetract: public CommandBase
{
public:
	cmdClimberRetract();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
