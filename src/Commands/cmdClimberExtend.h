#ifndef cmdClimb_H
#define cmdClimb_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdClimberExtend: public CommandBase
{
public:
	cmdClimberExtend();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
