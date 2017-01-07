#ifndef AutoDriveTalonsStop_H
#define AutoDriveTalonsStop_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsStop: public CommandBase
{
public:
	AutoDriveTalonsStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
