#include "AutoDriveTalonsFastBackwards.h"

//For some reason, we are unable to pass these driving commands variables from
//command groups as commented out in AutoDriveTalonsSlowForward.cpp
//As such, I needed to create a separate command for each drive speed setting such as this one.

//Used for rough terrain and moat

AutoDriveTalonsFastBackwards::AutoDriveTalonsFastBackwards()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void AutoDriveTalonsFastBackwards::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDriveTalonsFastBackwards::Execute()
{
	//Drives backward at 60% speed
	tankChassis->AutoDriveTalons(-0.6, -0.6, -0.6, -0.6);

}

// Make this return true when this Command no longer needs to run execute()
bool AutoDriveTalonsFastBackwards::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoDriveTalonsFastBackwards::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDriveTalonsFastBackwards::Interrupted()
{

}
