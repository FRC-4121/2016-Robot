#ifndef cmdServoFirePosition_H
#define cmdServoFirePosition_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdServoFirePosition: public CommandBase
{
public:
	cmdServoFirePosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
