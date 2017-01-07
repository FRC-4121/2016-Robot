#ifndef cmdServoDownPosition_H
#define cmdServoDownPosition_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdServoDownPosition: public CommandBase
{
public:
	cmdServoDownPosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
