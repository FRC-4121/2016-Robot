#include <Commands/cmdClimberRetract.h>

cmdClimberRetract::cmdClimberRetract()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(robotClimber);
}

// Called just before this Command runs the first time
void cmdClimberRetract::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdClimberRetract::Execute()
{
	robotClimber->Climb(1);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdClimberRetract::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdClimberRetract::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdClimberRetract::Interrupted()
{

}
