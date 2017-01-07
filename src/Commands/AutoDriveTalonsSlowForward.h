#ifndef AutoForward_H
#define AutoForward_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoDriveTalonsSlowForward: public CommandBase
{
private:
	//float FLTalonSpeed, BLTalonSpeed, FRTalonSpeed, BRTalonSpeed;
public:
	//AutoDriveTalons(float FrontLeftSpeed, float BackLeftSpeed, float FrontRightSpeed,  float BackRightSpeed);
	AutoDriveTalonsSlowForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
