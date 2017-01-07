#include "cmdTestServoUp.h"

cmdTestServoUp::cmdTestServoUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
}

// Called just before this Command runs the first time
void cmdTestServoUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdTestServoUp::Execute()
{
	ballShooter->ServoUp();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdTestServoUp::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdTestServoUp::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdTestServoUp::Interrupted()
{

}
