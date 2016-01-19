#include "cmdDataDashboard.h"

cmdDataDashboard::cmdDataDashboard()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driverDisplay);
}

// Called just before this Command runs the first time
void cmdDataDashboard::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdDataDashboard::Execute()
{
	driverDisplay->DisplayAll();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdDataDashboard::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void cmdDataDashboard::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdDataDashboard::Interrupted()
{

}
