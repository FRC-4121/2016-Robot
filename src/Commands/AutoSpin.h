#ifndef AutoSpin_H
#define AutoSpin_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoSpin: public CommandBase
{
public:
	AutoSpin();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
