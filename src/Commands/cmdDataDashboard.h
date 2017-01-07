#ifndef cmdDataDashboard_H
#define cmdDataDashboard_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdDataDashboard: public CommandBase
{
public:
	cmdDataDashboard();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
