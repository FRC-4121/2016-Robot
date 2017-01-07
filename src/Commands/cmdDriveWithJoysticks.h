#ifndef cmdDriveWithJoysticks_H
#define cmdDriveWithJoysticks_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdDriveWithJoysticks: public CommandBase
{
public:
	cmdDriveWithJoysticks();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
