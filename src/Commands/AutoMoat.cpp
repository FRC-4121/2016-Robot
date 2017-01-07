#include <Commands/AutoDriveTalonsFastBackwards.h>
#include "AutoMoat.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterMove.h"

AutoMoat::AutoMoat()
{
	AddSequential (new Delay(1));							//waits one second
	AddSequential (new cmdAngleShooterMove(0.1)); 			//locks shooter to upper position
	AddSequential (new AutoDriveTalonsFastBackwards()); 	//drives backwards fast
	AddSequential (new Delay(DELAY_MOVE_DEFINE)); 							//drives for 3 seconds
	AddSequential (new AutoStop());							//stops

}
