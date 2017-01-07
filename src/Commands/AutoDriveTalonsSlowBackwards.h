#ifndef AutoDriveTalonsBackwardsSlow_H
#define AutoDriveTalonsBackwardsSlow_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsSlowBackwards: public CommandBase
{
public:
	AutoDriveTalonsSlowBackwards();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
