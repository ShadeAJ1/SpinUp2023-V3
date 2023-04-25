#include "main.h"
#include "pros/adi.hpp"
#include "pros/misc.hpp"

// Drivebase
extern Motor frontRight;
extern Motor backRight;
extern Motor centerRight;
extern Motor centerLeft;
extern Motor frontLeft;
extern Motor backLeft;

// Cata
extern Motor scata;

// Intake
extern Motor intake;

// Triggers
extern ADIPort expansionLeft;
extern ADIPort expansionRight;
extern ADIPort blocker;

extern ADIPort boost1;
extern ADIPort boost2;

// Limit Switch
extern ADIPort limit;

// Misc
extern Controller controller;

// Ports
#define scataPort 18
#define intakePort 8
#define expansionLeftPort 'D'
#define expansionRightPort 'B'
#define blockerPort 'C'
#define limitPort 'A'
#define boost1Port 'G'
#define boost2Port 'H'

#define frontRightPort 6
#define backRightPort 9
#define frontLeftPort 14
#define backLeftPort 15
#define centerLeftPort 13
#define centerRightPort 5
