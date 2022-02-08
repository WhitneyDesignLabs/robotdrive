
// define GPIO pins for motor control
// even number motor controllers are positioned on the left side (driver side of cars in USA) of the robot
// odd number motor controllers are positioned on the right side (passenger side of cars in USA) of the robot
//
//PWM pins
// BTS7960 motor controller 0 (Scott's Left Front)
#define RPWM0 2
#define LPWM0 4
// BTS7960 motor controller 1 (Scott's Right Front)
#define RPWM1 3
#define LPWM1 5
// BTS7960 motor controller 2 (Scott's Left Center)
#define RPWM2 6
#define LPWM2 8
// BTS7960 motor controller 3 (Scott's Right Center)
#define RPWM3 7
#define LPWM3 9
// BTS7960 motor controller 4 (Scott's Left Rear)
#define RPWM4 10
#define LPWM4 12
// BTS7960 motor controller 5 (Scott's Right Rear)
#define RPWM5 11
#define LPWM5 13
//
//Enable pins, I think these (not REN0 and LEN0, but REN0+REN1+REN2 etc...)
//could be combined electrically. But since Scott is using a Mega, there are plenty of pins
// we'll use separate pins for each one, for now
// BTS7960 motor controller 0 (Scott's Left Front)
#define REN0 22
#define LEN0 24
// BTS7960 motor controller 1 (Scott's Right Front)
#define REN1 23
#define LEN1 25
// BTS7960 motor controller 2 (Scott's Left Center)
#define REN2 26
#define LEN2 28
// BTS7960 motor controller 3 (Scott's Right Center)
#define REN3 27
#define LEN3 29
// BTS7960 motor controller 4 (Scott's Left Rear)
#define REN4 30
#define LEN4 32
// BTS7960 motor controller 5 (Scott's Right Rear)
#define REN5 31
#define LEN5 33

//#define PWM 11 // for scotts code - We can scratch this comment. Scott is wiring same method as Jonathon
#define BusArray_size 10 // change this for CC size you have 
int CC[BusArray_size]; // define the Control Channal int array 
