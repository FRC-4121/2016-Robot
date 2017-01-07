#ifndef AutoDriveTalonsReallyFastBackwards_H
#define AutoDriveTalonsReallyFastBackwards_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsReallyFastBackwards: public CommandBase
{
public:
	AutoDriveTalonsReallyFastBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
