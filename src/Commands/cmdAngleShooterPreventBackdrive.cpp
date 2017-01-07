#include "cmdAngleShooterPreventBackdrive.h"

cmdAngleShooterPreventBackdrive::cmdAngleShooterPreventBackdrive()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shootAngle);
}

// Called just before this Command runs the first time
void cmdAngleShooterPreventBackdrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdAngleShooterPreventBackdrive::Execute()
{
	shootAngle->PreventBackDrive();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAngleShooterPreventBackdrive::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdAngleShooterPreventBackdrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAngleShooterPreventBackdrive::Interrupted()
{

}
