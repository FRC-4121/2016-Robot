#include <Commands/AutoDriveTalonsSlowBackwards.h>
#include <Commands/AutoLowBarShoot.h>
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterTrajectorySet.h"
#include "Commands/cmdAngleShooterMove.h"
#include "Commands/cmdStopAngleShooter.h"
#include "Commands/AutoSpin.h"
#include "Commands/AutoDriveTalonsStop.h"

#include "Commands/cmdShooterOff.h"
#include "Commands/cmdServoDownPosition.h"
#include "Commands/cmdServoFirePosition.h"
#include <Commands/cmdShoot.h>
#include <Commands/cmdFeedBall.h>

AutoLowBarShoot::AutoLowBarShoot()
{
	AddSequential(new Delay(1));							//waits 1 second
	AddSequential (new cmdAngleShooterMove(-0.6));			//Moves shooter down
	AddSequential (new Delay(1));							//Waits one second
	AddSequential (new cmdStopAngleShooter());				//Stops shooter movement
	AddSequential (new AutoDriveTalonsSlowBackwards());		//drives backwards slowly
	AddSequential (new Delay(6));

	//Getting into position
	AddSequential (new cmdAngleShooterMove(0.6));
	AddSequential (new Delay(3));
	AddSequential (new cmdAngleShooterMove(0));

	//Shooting Sequence
	AddSequential (new cmdFeedBall(-0.6));
	AddSequential (new Delay(0.3));
	AddSequential (new cmdShoot(0.6));
	AddSequential (new Delay(0.4));
	AddSequential (new cmdServoFirePosition());
	AddSequential (new Delay(1.5));
	AddSequential (new cmdShooterOff());
	AddSequential (new cmdServoDownPosition());

	AddSequential (new AutoStop());							//Stops
}
