#include "cmdMoveClimberPiston.h"

cmdMoveClimberPiston::cmdMoveClimberPiston(float solenoidPosition)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(robotClimber);
	climberPosition=solenoidPosition;
}

// Called just before this Command runs the first time
void cmdMoveClimberPiston::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdMoveClimberPiston::Execute()
{
	if(climberPosition==1)
	{
		robotClimber->ExtendPiston();
	}
	else if(climberPosition==-1)
	{
		robotClimber->RetractPiston();
	}
	else
	{
		robotClimber->StopPiston();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool cmdMoveClimberPiston::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdMoveClimberPiston::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdMoveClimberPiston::Interrupted()
{

}
