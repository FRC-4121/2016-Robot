#include <Commands/AutoDriveTalonsSlowForward.h>
#include "AutoChevaldeFrise.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterTrajectorySet.h"


AutoChevaldeFrise::AutoChevaldeFrise()
{
	AddSequential (new AutoStop());
	/*
	AddSequential (new Delay(1));//waits a second
	AddSequential (new cmdAngleShooterTrajectorySet(246));//puts arm down to push down planks
	AddSequential (new AutoDriveTalonsSlowForward());//goes forward at 50% speed
	AddSequential (new Delay(4));//stops after 4 seconds
	AddSequential (new AutoStop());
	*/
}
