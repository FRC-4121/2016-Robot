#ifndef cmdAngleShooterTrajectoryShift_H
#define cmdAngleShooterTrajectoryShift_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdAngleShooterTrajectoryShift: public CommandBase
{
private:
	float AngleShiftDegrees;
public:
	cmdAngleShooterTrajectoryShift(float degrees);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
