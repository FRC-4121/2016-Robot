#include <Commands/cmdClimberExtend.h>
#include "OI.h"
#include "RobotMap.h"
#include <Commands/cmdShooterOff.h>
#include <Commands/cmdClimberOff.h>
#include <Commands/cmdClimberRetract.h>
#include <Commands/cmdResetGyro.h>
#include <Commands/cmdgrpLoadandShoot.h>
#include <Commands/cmdFeedBall.h>
#include <Commands/cmdLoadBallServo.h>
#include <Commands/cmdTestServoUp.h>
#include <Commands/cmdTestServoDown.h>
#include <Commands/cmdAngleShooterTrajectorySet.h>
#include <Commands/cmdAngleShooterMove.h>
#include <Commands/cmdStopAngleShooter.h>
#include <Commands/cmdAngleShooterTrajectoryShift.h>
#include <Commands/cmdMoveClimberPiston.h>
#include <Commands/cmdAngleShooterPreventBackdrive.h>
#include <Commands/cmdShoot.h>



OI::OI()
{

	// Process operator interface input here.
	//	Sensors

	//creates a new instance of Gyro
	gyro = new ADXRS450_Gyro();

	//ENCODERS-------------------------------------------------

	//Do these even function on our robot? Doubt it.
	LeftEncoder = new Encoder(2,3,true);
	LeftEncoder->SetDistancePerPulse(0.075);
	RightEncoder= new Encoder(0,1,true);
	RightEncoder->SetDistancePerPulse(0.075);
	AngleShootEncoder = new AnalogInput(3);

	//XBOX CONTROLLER------------------------------------------

	//xboxController= new Joystick(XBOXCONTROLLER);



	//LEFT JOYSTICK--------------------------------------------

	driveStickL = new Joystick(JOYSTICKLEFT);

	feedBall = new JoystickButton(driveStickL, L_THUMB_BUTTON_DOWN_fFEEDBALL);
	feedBall->WhenPressed(new cmdFeedBall(-0.6)); //change here possibly
	feedBall->WhenReleased(new cmdShooterOff());


	spitBall = new JoystickButton(driveStickL, L_FRONT_SIDE_RIGHT_fSPITBALL);
	spitBall->WhenPressed(new cmdShoot(1.0));//change here used to be .4
	spitBall->WhenReleased(new cmdShooterOff());

	moveServoBall = new JoystickButton(driveStickL, L_FRONT_SIDE_LEFT_fMOVESERVOBALL);
	moveServoBall->WhenPressed(new cmdLoadBallServo());

	shootBall = new JoystickButton(driveStickL, L_THUMB_BUTTON_UP_fSHOOTBALL);
	shootBall->WhenPressed(new cmdgrpLoadandShoot());

	/*
	angleTrajectorySetShoot = new JoystickButton(driveStickL, L_THUMB_BUTTON_RIGHT_fSHOOTPOSITION);
	angleTrajectorySetShoot->WhenPressed(new cmdAngleShooterTrajectorySet(131)); //I believe shoot position is ~10 degrees past vertical
	angleTrajectorySetShoot->WhenReleased(new cmdAngleShooterPreventBackdrive());

	angleTrajectorySetDown = new JoystickButton(driveStickL, L_THUMB_BUTTON_LEFT_fDOWNPOSITION);
	angleTrajectorySetDown->WhenPressed(new cmdAngleShooterTrajectorySet(272));  //Ideally this would be slightly off the ground for portcullis and cheval
	angleTrajectorySetDown->WhenReleased(new cmdAngleShooterPreventBackdrive());

	shiftShooterUp = new JoystickButton(driveStickL, L_LEFT_SIDE_UP_fSHIFTSHOOTERUP);
	shiftShooterUp->WhenPressed(new cmdAngleShooterTrajectoryShift(-4));
	shiftShooterUp->WhenReleased(new cmdAngleShooterPreventBackdrive());

	shiftShooterDown = new JoystickButton(driveStickL, L_LEFT_SIDE_DOWN_fSHIFTSHOOTERDOWN);
	shiftShooterDown->WhenPressed(new cmdAngleShooterTrajectoryShift(4));
	shiftShooterDown->WhenReleased(new cmdAngleShooterPreventBackdrive());

	shiftShooterUpSlightly = new JoystickButton(driveStickL, L_RIGHT_SIDE_UP_fSHIFTSHOOTERUPSLIGHTLY);
	shiftShooterUpSlightly->WhenPressed(new cmdAngleShooterTrajectoryShift(-1));
	shiftShooterUpSlightly->WhenReleased(new cmdAngleShooterPreventBackdrive());

	shiftShooterDownSlightly = new JoystickButton(driveStickL, L_RIGHT_SIDE_DOWN_fSHIFTSHOOTERDOWNSLIGHTLY);
	shiftShooterDownSlightly->WhenPressed(new cmdAngleShooterTrajectoryShift(1));
	shiftShooterDownSlightly->WhenReleased(new cmdAngleShooterPreventBackdrive());

*/


	//RIGHT JOYSTICK------------------------------------------

	driveStickR = new Joystick(JOYSTICKRIGHT);

	//Primary Movement Control for the Shooter
	angleShooterUp = new JoystickButton(driveStickR, R_THUMB_BUTTON_DOWN_fANGLESHOOTERDOWN);
	angleShooterUp->WhenPressed(new cmdAngleShooterMove(0.65));
	angleShooterUp->WhenReleased(new cmdAngleShooterMove(0));

	angleShooterDown = new JoystickButton(driveStickR, R_THUMB_BUTTON_UP_fANGLESHOOTERUP);
	angleShooterDown->WhenPressed(new cmdAngleShooterMove(-0.65));
	angleShooterDown->WhenReleased(new cmdAngleShooterMove(0));

	//Prevents shooter from falling down while playing defense or moving. Same thing on each side of R_THUMB_BUTTON for redundancy.
	lockShooterUp= new JoystickButton(driveStickR, R_THUMB_BUTTON_RIGHT_fLOCKSHOOTERUP);
	lockShooterUp->WhenPressed(new cmdAngleShooterMove(0.1));
	lockShooterUp2= new JoystickButton(driveStickR, R_THUMB_BUTTON_LEFT_fLOCKSHOOTERUP);
	lockShooterUp2->WhenPressed(new cmdAngleShooterMove(0.1));


	//Miiiiggghhhht need these. The shooter one is useful for demoing the robot.
	shooterFireFast= new JoystickButton(driveStickR, R_RIGHT_SIDE_UP_fSHOOTERFIREFAST);
	shooterFireFast->WhenPressed(new cmdShoot(0.9));
	shooterFireFast->WhenReleased(new cmdShooterOff());

	feederFeedFast= new JoystickButton(driveStickR, R_RIGHT_SIDE_DOWN_fFEEDERFEEDFAST);
	feederFeedFast->WhenPressed(new cmdFeedBall(-0.8));
	feederFeedFast->WhenReleased(new cmdShooterOff());


	//Don't see myself ever using these, but you know, redundancy.
	stopAngleShooter = new JoystickButton(driveStickR, R_FRONT_SIDE_RIGHT_fSTOPANGLESHOOTER);
	stopAngleShooter->WhenPressed(new cmdAngleShooterMove(0));

	stopShooter = new JoystickButton(driveStickR, R_FRONT_SIDE_LEFT_fSTOPSHOOTER);
	stopShooter->WhenPressed(new cmdShoot(0));


	//Simply testing commands to change the values to desired and record from the driver station
	testServoUp = new JoystickButton(driveStickR, R_LEFT_SIDE_UP_fTESTSERVOUP);
	testServoUp->WhenPressed(new cmdTestServoUp());

	testServoDown = new JoystickButton(driveStickR, R_LEFT_SIDE_DOWN_fTESTSERVODOWN);
	testServoDown->WhenPressed(new cmdTestServoDown());


	/* CLIMBER STUFF - USELESS WITH BROKEN CLIMBER
	 *
	moveClimberPistonUp = new JoystickButton(driveStickR, R_THUMB_BUTTON_RIGHT_fPISTONEXTEND);
	moveClimberPistonUp->WhenPressed(new cmdMoveClimberPiston(1));

	moveClimberPistonDown = new JoystickButton(driveStickR, R_THUMB_BUTTON_LEFT_PISTONRETRACT);
	moveClimberPistonDown->WhenPressed(new cmdMoveClimberPiston(-1));

	climberRetract = new JoystickButton(driveStickR, R_THUMB_BUTTON_DOWN_fCLIMBRETRACT);
	climberRetract->WhenPressed(new cmdClimberRetract());
	climberRetract->WhenReleased(new cmdClimberOff());

	climberExtend = new JoystickButton(driveStickR, R_THUMB_BUTTON_UP_fCLIMBEXTEND);
	climberExtend->WhenPressed(new cmdClimberExtend());
	climberExtend->WhenReleased(new cmdClimberOff());
	 */


}


Gyro* OI::getGyro()
{
	return gyro;
}


//ENCODERS--------------------------------------

Encoder* OI::getLeftEncoder()
{
	return LeftEncoder;
}
Encoder* OI::getRightEncoder()
{
	return RightEncoder;
}
AnalogInput* OI::getAngleShootEncoder()
{
	return AngleShootEncoder;
}




//JOYSTICKS-----------------------------------------

Joystick* OI::getDriveStickL()
{
	return driveStickL;
}

Joystick* OI::getDriveStickR()
{
	return driveStickR;
}

/*
Joystick* OI::getControllerXbox()
{
	return xboxController;
}
 */
