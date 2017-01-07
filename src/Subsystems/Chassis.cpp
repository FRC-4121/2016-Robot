#include "Chassis.h"
#include "../RobotMap.h"
#include "../CommandBase.h"
#include <Commands/cmdDriveWithJoysticks.h>
#include "RobotDrive.h"
#include "OI.h"


Chassis::Chassis() :	Subsystem("Chassis")
{

//Creating two new instances of motor controllers that dictate each side--------------------------------------------

	FrontLeftTalon = new Talon(FRONT_LEFT_TALON);
	FrontRightTalon = new Talon(FRONT_RIGHT_TALON);
	BackLeftTalon = new Talon(BACK_LEFT_TALON);
	BackRightTalon = new Talon(BACK_RIGHT_TALON);

//Robot drive based on a definition of the motor configuration of each motor controller for the wheels--------------

	robotDrive = new RobotDrive(FrontLeftTalon, BackLeftTalon, FrontRightTalon,  BackRightTalon);


//Creates a new instance of Accelerometer---------------------------------------------------------------------------

	accel = new BuiltInAccelerometer();

//Sets the max output of the drive system---------------------------------------------------------------------------

	robotDrive->SetSafetyEnabled(false);
	robotDrive->SetMaxOutput(.7);

}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.----------------------------------------------------------------

		SetDefaultCommand(new cmdDriveWithJoysticks());
}


// Put methods for controlling this subsystem ----------------------------------------------------------------------
// here. Call these from Commands.----------------------------------------------------------------------------------


void Chassis::DriveWithJoystick(Joystick *stickL, Joystick *stickR)
{
	//Purpose:
	//Using the driver station joysticks to drive the robot.
	//Inputs:   Are Instances of the Joystick class.

	//Left stick is reversed because of the motor directions needed to make mecanum work properly.
	robotDrive->TankDrive(-(stickL->GetY()), (stickR->GetY()),false);	//stickR, stickL, true)

}


void Chassis::AutoDrive(float left, float right)
{
	// Purpose:
	//To drive the Robot in autounomous mode.
	//Inputs: left,right - takes a floating point value from -1 to 1, with 1 indicating full speed and .5 half speed.
	robotDrive->TankDrive(left, right);
}

void Chassis::AutoDriveTalons(float FrontLeftTalonSpeed, float BackLeftTalonSpeed, float FrontRightTalonSpeed,  float BackRightTalonSpeed)
{
	FrontLeftTalon->Set(FrontLeftTalonSpeed);
	BackLeftTalon->Set(BackLeftTalonSpeed);
	FrontRightTalon->Set(FrontRightTalonSpeed);
	BackRightTalon->Set(BackRightTalonSpeed);



}

void Chassis::StopAutonomous()
{
	//stops the motion of the robot
	FrontLeftTalon->Set(0);
	FrontRightTalon->Set(0);
	BackLeftTalon->Set(0);
	BackRightTalon->Set(0);
}


