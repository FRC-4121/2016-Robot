#include <Commands/AutoDriveTalonsFastBackwards.h>
#include "AutoRoughTerrain.h"
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


AutoRoughTerrain::AutoRoughTerrain()
{
		//Moving Into Courtyard
		AddSequential (new Delay(1)); 								//waits a second
		AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
		AddSequential (new AutoDriveTalonsFastBackwards());			//drives forward at 60% speed
<<<<<<< HEAD
		AddSequential (new Delay(DELAY_MOVE_DEFINE));								//drives for 3 seconds
=======
		AddSequential (new Delay(2.5));								//drives for 2 seconds

		//Getting into position to shoot
		AddSequential (new AutoSpin());
		AddSequential (new Delay(0.6));
		AddSequential (new AutoDriveTalonsStop());
		AddSequential (new cmdAngleShooterMove (-0.3));
		AddSequential (new Delay(3));
		AddSequential (new cmdAngleShooterMove (0));

		//Shooting Sequence
		AddSequential (new cmdServoDownPosition());
		AddSequential (new Delay(0.2));
		AddSequential (new cmdShoot(0.8));
		AddSequential (new Delay(1));
		AddSequential (new cmdServoFirePosition());
		AddSequential (new Delay(1));
		AddSequential (new cmdShooterOff());
		AddSequential (new cmdServoDownPosition());

		AddSequential (new cmdAngleShooterMove(0.4));
		AddSequential (new Delay(5));
		AddSequential (new cmdAngleShooterMove(0));


>>>>>>> origin/JrJrCressman's-Branch
		AddSequential (new AutoStop());								//stops

}
