#ifndef cmdAngleShooterMove_H
#define cmdAngleShooterMove_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdAngleShooterMove: public CommandBase
{
private:
	float angleMoveSpeed;
public:
	cmdAngleShooterMove(float AngleShooterSpeed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
