#include "cmdgrpLoadandShoot.h"
#include "Commands/Delay.h"
#include "../Robotmap.h"
#include "Commands/cmdShooterOff.h"
#include "Commands/cmdServoDownPosition.h"
#include "Commands/cmdServoFirePosition.h"
#include <Commands/cmdShoot.h>
#include <Commands/cmdFeedBall.h>

cmdgrpLoadandShoot::cmdgrpLoadandShoot()
{


	/*Unnecessary as the servo should always be in this position while the ball is in anyways, but just to be safe
	AddSequential (new cmdServoDownPosition());
	//Lets Servo move if necessary
	AddSequential (new Delay(0.5));
*/
	//Spins up shooter motors
	//AddSequential (new cmdFeedBall(-0.6));
	//AddSequential (new Delay(0.3));
	AddSequential (new cmdShoot(1.0));
	AddSequential (new Delay(2.0)); //was 0.4

	//Fires Ball
	AddSequential (new cmdServoFirePosition());

	//Lets the ball exit completely before shutting off Shooter
	AddSequential (new Delay(1.5));
	AddSequential (new cmdShooterOff());

	//Set Servo back to lower position
	AddSequential (new cmdServoDownPosition());

}
