#ifndef cmdVisionAngleShooter_H
#define cmdVisionAngleShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdVisionAngleShooter: public CommandBase
{
private:
	float angleShooterSpeed, trajectoryAngle;
public:
	cmdVisionAngleShooter(float angleSpeed,float angleShoot);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
