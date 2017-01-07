#ifndef cmdStopAngleShooter_H
#define cmdStopAngleShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdStopAngleShooter: public CommandBase
{
public:
	cmdStopAngleShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
