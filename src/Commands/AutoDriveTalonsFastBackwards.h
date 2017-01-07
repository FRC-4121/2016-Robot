#ifndef AutoDriveTalonsFastBackwards_H
#define AutoDriveTalonsFastBackwards_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsFastBackwards: public CommandBase
{
public:
	AutoDriveTalonsFastBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
