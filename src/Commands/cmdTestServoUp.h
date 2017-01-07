#ifndef cmdTestServoUp_H
#define cmdTestServoUp_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdTestServoUp: public CommandBase
{
public:
	cmdTestServoUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
