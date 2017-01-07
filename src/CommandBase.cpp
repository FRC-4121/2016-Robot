#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/DataDisplay.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/AngleShooter.h"


// Initialize a single static instance of all of your subsystems to NULL----------------------

ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
Chassis* CommandBase::tankChassis = NULL;
DataDisplay* CommandBase::driverDisplay = NULL;
SendableChooser* CommandBase::chooser= NULL;
Shooter* CommandBase::ballShooter=NULL;
Climber* CommandBase::robotClimber=NULL;
AngleShooter* CommandBase::shootAngle=NULL;



CommandBase::CommandBase(char const *name) :
		Command(name)
{

}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	oi = new OI();
	tankChassis = new Chassis();
	driverDisplay = new DataDisplay();
	ballShooter = new Shooter();
	robotClimber = new Climber();
	shootAngle = new AngleShooter();
}
