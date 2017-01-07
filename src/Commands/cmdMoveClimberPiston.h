#ifndef cmdMoveClimberPiston_H
#define cmdMoveClimberPiston_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdMoveClimberPiston: public CommandBase
{
private:
	float climberPosition;
public:
	cmdMoveClimberPiston(float solenoidPosition);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
