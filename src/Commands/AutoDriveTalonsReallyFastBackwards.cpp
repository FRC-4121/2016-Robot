#include "AutoDriveTalonsReallyFastBackwards.h"

//For some reason, we are unable to pass these driving commands variables from
//command groups as commented out in AutoDriveTalonsSlowForward.cpp
//As such, I needed to create a separate command for each drive speed setting such as this one.

//This is used to be able to travel over the rock wall and ramparts.

AutoDriveTalonsReallyFastBackwards::AutoDriveTalonsReallyFastBackwards()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void AutoDriveTalonsReallyFastBackwards::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDriveTalonsReallyFastBackwards::Execute()
{
	//Drives backward at 80% speed
	tankChassis->AutoDriveTalons(-0.8, -0.8, -0.8, -0.8);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDriveTalonsReallyFastBackwards::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void AutoDriveTalonsReallyFastBackwards::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDriveTalonsReallyFastBackwards::Interrupted()
{

}
