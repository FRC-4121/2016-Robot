#include "cmdServoDownPosition.h"

cmdServoDownPosition::cmdServoDownPosition()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
}

// Called just before this Command runs the first time
void cmdServoDownPosition::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdServoDownPosition::Execute()
{
	ballShooter->ServoDownPosition();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdServoDownPosition::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdServoDownPosition::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdServoDownPosition::Interrupted()
{

}
