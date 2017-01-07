#include <Commands/AutoDriveTalonsReallyFastBackwards.h>
#include "AutoRockWall.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterMove.h"
AutoRockWall::AutoRockWall()
{

		AddSequential (new Delay(1)); 								//waits a second
		AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
		AddSequential (new AutoDriveTalonsReallyFastBackwards());	//drives forwards at 80% speed
		AddSequential (new Delay(DELAY_MOVE_DEFINE));								//drives for 3 seconds
		AddSequential (new AutoStop());								//stops
}
