#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

	Joystick *driveStickR, *driveStickL;
	ADXRS450_Gyro *gyro;

public:
	OI();

//Sensors------------------------------------------------------

	Gyro* getGyro();
	Encoder *LeftEncoder, *RightEncoder, *getLeftEncoder(), *getRightEncoder();
	AnalogInput *AngleShootEncoder, *getAngleShootEncoder();

//Left Joystick------------------------------------------------

	Joystick* getDriveStickL();
	JoystickButton *feedBall, *spitBall, *moveServoBall, *shootBall;

	JoystickButton *angleTrajectorySetShoot, *angleTrajectorySetDown;
	JoystickButton *shiftShooterUp, *shiftShooterDown, *shiftShooterUpSlightly, *shiftShooterDownSlightly;

//Right JoyStick-----------------------------------------------

	Joystick* getDriveStickR();

	JoystickButton *lockShooterUp, *lockShooterUp2;
	JoystickButton *stopAngleShooter, *stopShooter;
	JoystickButton *feederFeedFast, *shooterFireFast;
	JoystickButton *angleShooterUp, *angleShooterDown;
	JoystickButton *testServoUp, *testServoDown;

	//JoystickButton *climberExtend, *climberRetract, *moveClimberPistonUp, *moveClimberPistonDown;


//XBOX Controller----------------------------------------------

	Joystick* getControllerXbox();


};

#endif
