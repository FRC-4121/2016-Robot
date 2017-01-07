#include "cmdShooterOff.h"

cmdShooterOff::cmdShooterOff()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
}

// Called just before this Command runs the first time
void cmdShooterOff::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdShooterOff::Execute()
{
	ballShooter->StopShooter();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdShooterOff::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdShooterOff::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdShooterOff::Interrupted()
{

}
