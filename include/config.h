#ifndef CONFIG_H_
#define CONFIG_H_

#include "API.h"

//motors
#define MOTOR_L_FRONT 1
#define MOTOR_L_BACK 9
#define MOTOR_2L 4
#define MOTOR_R_FRONT 10
#define MOTOR_R_BACK 8
#define MOTOR_2R 5

#define MOTOR_SHOOT1 7
#define MOTOR_SHOOT2 6
#define MOTOR_COLLECTOR 2
#define MOTOR_CLAW 3


//encoders
Encoder leftEncoder;
#define ENCODER_LEFT_TOP 1
#define ENCODER_LEFT_BOTTOM 2

Encoder rightEncoder;
#define ENCODER_RIGHT_TOP 3
#define ENCODER_RIGHT_BOTTOM 4


//joystick
#define MASTER_JOYSTICK 1

#define JOYSTICK_ANGULAR_CH 3
#define JOYSTICK_VERTICAL_CH 1
#define JOYSTICK_THROT_START 10


//digital
#define DIGITAL_LIMIT_SWITCH_PIN 5


//configurations
#define GLOBAL_DEBUG

//autonomous positions
#define AUTONOMOUS_RED_FRONT
//#define AUTONOMOUS_RED_BACK
//#define AUTONOMOUS_BLUE_FRONT
//#define AUTONOMOUS_BLUE_BACK

#define DIRECTION_NORMAL 1
#define DIRECTION_REVERSE -1
extern char direction;

#define COLLECTOR_STOP 0
#define COLLECTOR_REVERSE -127
#define COLLECTOR_ON 127
extern char collectorState;

#define MOTORSPEED_HIGH 1.0
#define MOTORSPEED_NORMAL 0.75
#define MOTORSPEED_LOW 0.25
extern float motorSpeed;

#endif
