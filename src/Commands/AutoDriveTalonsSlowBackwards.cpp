#include <Commands/AutoDriveTalonsSlowBackwards.h>

//For some reason, we are unable to pass these driving commands variables from
//command groups as commented out in AutoDriveTalonsSlowForward.cpp
//As such, I needed to create a separate command for each drive speed setting such as this one.

//Drives backwards at a speed slow enough to go under the low bar.

AutoDriveTalonsSlowBackwards::AutoDriveTalonsSlowBackwards()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);

}

// Called just before this Command runs the first time
void AutoDriveTalonsSlowBackwards::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDriveTalonsSlowBackwards::Execute()
{
	//Drives backwards at 25% speed
	tankChassis->AutoDriveTalons(-0.25, -0.25, -0.25, -0.25);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDriveTalonsSlowBackwards::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoDriveTalonsSlowBackwards::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDriveTalonsSlowBackwards::Interrupted()
{

}
