#include <Commands/AutoDriveTalonsReallyFastBackwards.h>
#include "AutoRamparts.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterMove.h"

AutoRamparts::AutoRamparts()
{

		AddSequential (new Delay(1)); 								//waits a second
		AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
		AddSequential (new AutoDriveTalonsReallyFastBackwards());	//drives forwards at 80% speed
		AddSequential (new Delay(3));								//drives for 3 seconds
		AddSequential (new AutoStop());								//stops
}
