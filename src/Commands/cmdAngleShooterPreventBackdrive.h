#ifndef cmdAngleShooterPreventBackdrive_H
#define cmdAngleShooterPreventBackdrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdAngleShooterPreventBackdrive: public CommandBase
{
public:
	cmdAngleShooterPreventBackdrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
