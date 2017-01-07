#include "AutoStop.h"

AutoStop::AutoStop()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void AutoStop::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoStop::Execute()
{
	tankChassis->StopAutonomous();

}

// Make this return true when this Command no longer needs to run execute()
bool AutoStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoStop::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoStop::Interrupted()
{

}
