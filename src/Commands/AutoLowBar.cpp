#include <Commands/AutoDriveTalonsSlowBackwards.h>
#include "AutoLowBar.h"
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

AutoLowBar::AutoLowBar()
{
	AddSequential(new Delay(1));							//waits 1 second
	AddSequential (new cmdAngleShooterMove(-0.6));			//Moves shooter down
	AddSequential (new Delay(1));							//Waits one second
	AddSequential (new cmdStopAngleShooter());				//Stops shooter movement
	AddSequential (new AutoDriveTalonsSlowBackwards());		//drives backwards slowly
	AddSequential (new Delay(6));							//drives for 6 seconds

	//Getting into position
	AddSequential (new cmdAngleShooterMove(0.6));
	AddSequential (new Delay(3));
	AddSequential (new cmdAngleShooterMove(0));


	AddSequential (new AutoStop());							//Stops
}
