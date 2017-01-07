#include <Commands/AutoDriveTalonsReallyFastBackwards.h>
#include <Commands/AutoRockWallShoot.h>
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterMove.h"
#include "Commands/AutoSpin.h"
#include "Commands/AutoDriveTalonsStop.h"

#include "Commands/cmdShooterOff.h"
#include "Commands/cmdServoDownPosition.h"
#include "Commands/cmdServoFirePosition.h"
#include <Commands/cmdShoot.h>
#include <Commands/cmdFeedBall.h>


#define DELAYMOVE_DEFINE (2.5)

AutoRockWallShoot::AutoRockWallShoot()
{

	AddSequential (new Delay(1)); 								//waits a second
	AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
	AddSequential (new AutoDriveTalonsReallyFastBackwards());	//drives forwards at 80% speed
	AddSequential (new Delay(DELAY_MOVE_DEFINE));								//drives for 3 seconds

	//Shooting Sequence
	AddSequential (new cmdFeedBall(-0.6));
	AddSequential (new Delay(0.3));
	AddSequential (new cmdShoot(0.6));
	AddSequential (new Delay(0.4));
	AddSequential (new cmdServoFirePosition());
	AddSequential (new Delay(1.5));
	AddSequential (new cmdShooterOff());
	AddSequential (new cmdServoDownPosition());

	AddSequential (new AutoStop());								//stops
}
