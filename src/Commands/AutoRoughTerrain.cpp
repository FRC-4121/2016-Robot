#include "AutoRoughTerrain.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/AutoDrive.h"
AutoRoughTerrain::AutoRoughTerrain()
{
	AddSequential(new Delay(1));
}
