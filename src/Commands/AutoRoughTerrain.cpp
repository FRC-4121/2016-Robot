#include <Commands/AutoDriveTalonsFastBackwards.h>
#include "AutoRoughTerrain.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoStop.h"
#include "Commands/cmdAngleShooterMove.h"

AutoRoughTerrain::AutoRoughTerrain()
{
		AddSequential (new Delay(1)); 								//waits a second
		AddSequential (new cmdAngleShooterMove(0.1)); 				//locks shooter to upper position
		AddSequential (new AutoDriveTalonsFastBackwards());			//drives forward at 60% speed
		AddSequential (new Delay(DELAY_MOVE_DEFINE));								//drives for 3 seconds
		AddSequential (new AutoStop());								//stops

}
