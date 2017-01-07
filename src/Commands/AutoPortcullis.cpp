#include <Commands/AutoDriveTalonsSlowForward.h>
#include "AutoPortcullis.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterTrajectorySet.h"


AutoPortcullis::AutoPortcullis()
{
	//As we have not had the time to construct and test a portcullis autonomous, this just acts as a placeholder and does nothing
	AddSequential (new AutoStop());

	/*
	AddSequential (new Delay (1)); 								//waits one second
	AddSequential (new cmdAngleShooterTrajectorySet(246));		//puts arm down
	AddSequential (new AutoDriveTalonsSlowForward()); 			//drives forward at 25% speed
	AddSequential (new Delay(3)); 								//drives for 3 seconds
	AddSequential (new cmdAngleShooterTrajectorySet(155));		//lifts arm up to lift up door
	AddSequential (new AutoDriveTalonsSlowForward());			//drives forward at 25% speed
	AddSequential (new Delay(5));								//drives for 5 seconds
	AddSequential (new AutoStop());								//stops
*/

}
