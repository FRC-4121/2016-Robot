#include "AutoSpin.h"

AutoSpin::AutoSpin()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void AutoSpin::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoSpin::Execute()
{
	//Drives sides in opposite directions to spin at 70%
	tankChassis->AutoDriveTalons(-0.7, -0.7, 0.7, 0.7);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoSpin::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoSpin::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoSpin::Interrupted()
{

}
