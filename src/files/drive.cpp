#include "main.h"

#include "autons.hpp"
#include "main.h"
#include "pros/misc.h"
#include "pros/motors.h"
#include <algorithm>
#include <cmath>

// helper functions
void setDrive(double left, double right) {
  frontLeft = left;
  backLeft = left;
  centerLeft = left;
  frontRight = right;
  backRight = right;
  centerRight = right;
}