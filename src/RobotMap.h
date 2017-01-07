#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;


#define JOYSTICKLEFT (0)
#define JOYSTICKRIGHT (1)
// #define XBOXCONTROLLER (2)

#define DELAY_MOVE_DEFINE (2.5)
#define DELAY_SPIN_DEFINE (1)



typedef enum
{
	FRONT_LEFT_TALON = 0,
	FRONT_RIGHT_TALON,
	BACK_LEFT_TALON,
	BACK_RIGHT_TALON,
	LEFT_SHOOTER_SRX_TALON,
	RIGHT_SHOOTER_SRX_TALON,
	ANGLE_SHOOTER_SRX_TALON,
	CLIMBER_SRX_TALON,

}TALON_CONTROLERS_t;


typedef enum{
	//the name of each type should follow this format
//	Joystick(R/L/XBOX)_ButtonName_fButtonFunction - The f is NOT a typo

	L_TRIGGER=1,											//button 1
	L_THUMB_BUTTON_DOWN_fFEEDBALL, 							//button 2
	L_THUMB_BUTTON_UP_fSHOOTBALL,							//button 3
	L_THUMB_BUTTON_LEFT_fDOWNPOSITION,							//button 4
	L_THUMB_BUTTON_RIGHT_fSHOOTPOSITION,						//button 5
	L_LEFT_SIDE_UP_fSHIFTSHOOTERUP,							//button 6
	L_LEFT_SIDE_DOWN_fSHIFTSHOOTERDOWN,						//button 7
	L_FRONT_SIDE_LEFT_fMOVESERVOBALL,										//button 8
	L_FRONT_SIDE_RIGHT_fSPITBALL,										//button 9
	L_RIGHT_SIDE_DOWN_fSHIFTSHOOTERDOWNSLIGHTLY, 					//button 10
	L_RIGHT_SIDE_UP_fSHIFTSHOOTERUPSLIGHTLY,										//button 11
	L_NUM_OF_JOYSTICK_BUTTONS

} JOYSTICK_LEFT_BUTTONS_t;

typedef enum{
	//the name of each type should follow this format
//	Joystick(R/L/XBOX)_ButtonName_fButtonFunction - The f is NOT a typo

	R_TRIGGER=1,											//button 1
	R_THUMB_BUTTON_DOWN_fANGLESHOOTERDOWN, 						//button 2
	R_THUMB_BUTTON_UP_fANGLESHOOTERUP,							//button 3
	R_THUMB_BUTTON_LEFT_fLOCKSHOOTERUP,								//button 4
	R_THUMB_BUTTON_RIGHT_fLOCKSHOOTERUP,									//button 5
	R_LEFT_SIDE_UP_fTESTSERVOUP,								//button 6
	R_LEFT_SIDE_DOWN_fTESTSERVODOWN,										//button 7
	R_FRONT_SIDE_LEFT_fSTOPSHOOTER,										//button 8
	R_FRONT_SIDE_RIGHT_fSTOPANGLESHOOTER,										//button 9
	R_RIGHT_SIDE_DOWN_fFEEDERFEEDFAST, 					//button 10
	R_RIGHT_SIDE_UP_fSHOOTERFIREFAST,						//button 11
	R_NUM_OF_JOYSTICK_BUTTONS

} JOYSTICK_RIGHT_BUTTONS_t;

/*
typedef enum{
//the name of each type should follow this format
//	Joystick(R/L/XBOX)_ButtonName_fButtonFunction - The f is NOT a typo

	XBOX_A=1,					//button 1
	XBOX_B,						//button 2
	XBOX_X,						//button 3
	XBOX_Y,						//button 4
	XBOX_LB, 					//button 5
	XBOX_RB,					//button 6
	XBOX_BACK,					//button 7
	XBOX_START,					//button 8
	XBOX_LSTICKPRESS,			//button 9
	XBOX_RSTICKPRESS,			//button 10
	XBOX_NUM_OF_BUTTONS

} XBOX_CONTROLLER_BUTTONS_t;

*/

typedef enum{

	DIO0 = 0,
	DIO1,
	DIO2,
	DIO3,
	DIO4,
	DIO5,
	DIO6,
	DIO7,
	DIO8,
	DIO9,

}DIGITAL_IO_T;

#endif
