#include <Commands/AutoDriveTalonsFastBackwards.h>
#include "AutoRoughTerrainShoot.h"
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

AutoRoughTerrainShoot::AutoRoughTerrainShoot()
{
	//Moving Into Courtyard
	AddSequential (new Delay(1)); 								//waits a second
	AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
	AddSequential (new AutoDriveTalonsFastBackwards());			//drives forward at 60% speed
	AddSequential (new Delay(DELAY_MOVE_DEFINE));								//drives for 2 seconds

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
