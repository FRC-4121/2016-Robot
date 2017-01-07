#include "AutoDriveTalonsStop.h"

AutoDriveTalonsStop::AutoDriveTalonsStop()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void AutoDriveTalonsStop::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDriveTalonsStop::Execute()
{
	//Stops Movement
	tankChassis->AutoDriveTalons(0, 0, 0, 0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDriveTalonsStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoDriveTalonsStop::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDriveTalonsStop::Interrupted()
{

}
