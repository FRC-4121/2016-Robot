#include "cmdClimberOff.h"

cmdClimberOff::cmdClimberOff()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(robotClimber);
}

// Called just before this Command runs the first time
void cmdClimberOff::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdClimberOff::Execute()
{
	robotClimber->StopClimber();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdClimberOff::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdClimberOff::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdClimberOff::Interrupted()
{

}
