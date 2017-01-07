#ifndef cmdFeedBall_H
#define cmdFeedBall_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdFeedBall: public CommandBase
{
private:
	float feedSpeed;
public:
	cmdFeedBall(float FeedingSpeed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
