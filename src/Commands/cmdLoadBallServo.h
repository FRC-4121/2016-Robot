#ifndef cmdLoadBallServo_H
#define cmdLoadBallServo_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdLoadBallServo: public CommandBase
{
public:
	cmdLoadBallServo();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
