#ifndef cmdAngleShooterTrajectorySet_H
#define cmdAngleShooterTrajectorySet_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdAngleShooterTrajectorySet: public CommandBase
{
private:
	float angle;

public:
	cmdAngleShooterTrajectorySet(float trajectoryAngle);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
