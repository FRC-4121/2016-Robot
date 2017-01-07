#ifndef AutoDriveTalonsFastForward_H
#define AutoDriveTalonsFastForward_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsFastForward: public CommandBase
{
public:
	AutoDriveTalonsFastForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
