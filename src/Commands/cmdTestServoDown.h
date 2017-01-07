#ifndef cmdTestServoDown_H
#define cmdTestServoDown_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdTestServoDown: public CommandBase
{
public:
	cmdTestServoDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
