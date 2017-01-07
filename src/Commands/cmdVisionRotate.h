#ifndef cmdVisionRotate_H
#define cmdVisionRotate_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdVisionRotate: public CommandBase
{
private:
	float rightSpeedTurn, leftSpeedTurn, angle;
public:
	cmdVisionRotate(float leftTurn, float rightTurn, float a);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
