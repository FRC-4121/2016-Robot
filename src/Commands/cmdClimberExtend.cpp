#include <Commands/cmdClimberExtend.h>

cmdClimberExtend::cmdClimberExtend()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(robotClimber);
}

// Called just before this Command runs the first time
void cmdClimberExtend::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdClimberExtend::Execute()
{
	robotClimber->Climb(-0.8);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdClimberExtend::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdClimberExtend::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdClimberExtend::Interrupted()
{

}
