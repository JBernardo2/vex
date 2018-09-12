#pragma config(Motor,  port2,           frontLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           backLeftMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           frontRightMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           backRightMotor, tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           shootLeftMotor, tmotorServoStandard, openLoop)
#pragma config(Motor,  port7,           shootRightMotor, tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port8,           liftMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,           flipperServo,  tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){
//GITHUB IN 2018 LUL
		motor[frontLeftMotor] = vexRT[Ch3];
		motor[backLeftMotor] = vexRT[Ch3];
		motor[frontRightMotor] = vexRT[Ch4];
		motor[backRightMotor] = vexRT[Ch4];

		if(vexRT[Btn5U]){
			motor[liftMotor] = 127;
		}
		else if(vexRT[Btn5D]){
			motor[liftMotor] = -127;
		}
		else{
			motor[liftMotor] = 0;
		}

		if(vexRT[Btn6U]){
			motor[shootLeftMotor] = 127;
			motor[shootRightMotor] = 127;
		}
		else if(vexRT[Btn6D]){
			motor[shootLeftMotor] = -127;
			motor[shootRightMotor] = -127;
		}
		else{
			motor[shootLeftMotor] = 0;
			motor[shootRightMotor] = 0;
		}

		if(vexRT[Btn8L]){
			motor[flipperServo] = 120;
		}
		else if(vexRT[Btn8R]){
			motor[flipperServo] = -109;
		}
	}
}
