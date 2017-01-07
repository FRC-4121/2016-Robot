#include "cmdStopAngleShooter.h"

cmdStopAngleShooter::cmdStopAngleShooter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shootAngle);
}

// Called just before this Command runs the first time
void cmdStopAngleShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdStopAngleShooter::Execute()
{
	shootAngle->StopAngleShooter();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdStopAngleShooter::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdStopAngleShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdStopAngleShooter::Interrupted()
{

}
