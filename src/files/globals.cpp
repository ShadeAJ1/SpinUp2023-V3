#include "main.h"
#include "pros/adi.h"
#include "pros/motors.h"

Motor intake(intakePort, E_MOTOR_GEARSET_06);
Motor scata(scataPort, E_MOTOR_GEARSET_36, true);

ADIPort limit(limitPort, ADI_DIGITAL_IN);

ADIPort blocker(blockerPort, ADI_DIGITAL_OUT);
ADIPort expansionLeft(expansionLeftPort, E_ADI_DIGITAL_OUT);
ADIPort expansionRight(expansionRightPort, E_ADI_DIGITAL_OUT);

ADIPort boost1(boost1Port, E_ADI_DIGITAL_OUT);
ADIPort boost2(boost2Port, E_ADI_DIGITAL_OUT);

Controller controller(E_CONTROLLER_MASTER);

Motor frontLeft(frontLeftPort, E_MOTOR_GEARSET_06, true);
Motor centerLeft(centerLeftPort, E_MOTOR_GEARSET_06, false);
Motor backLeft(backLeftPort, E_MOTOR_GEARSET_06, true);

Motor frontRight(frontRightPort, E_MOTOR_GEARSET_06, false);
Motor centerRight(centerRightPort, E_MOTOR_GEARSET_06, true);
Motor backRight(backRightPort, E_MOTOR_GEARSET_06, false);