#ifndef cmdShooterOff_H
#define cmdShooterOff_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdShooterOff: public CommandBase
{
public:
	cmdShooterOff();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
