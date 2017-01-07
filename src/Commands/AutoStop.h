#ifndef AutoStop_H
#define AutoStop_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoStop: public CommandBase
{
public:
	AutoStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
