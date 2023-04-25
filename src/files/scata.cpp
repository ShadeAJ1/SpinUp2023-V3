#include "autons.hpp"
#include "main.h"
#include "pros/misc.h"
#include "pros/misc.hpp"
#include "pros/rtos.h"
#include "pros/rtos.hpp"

bool scataDown = true;

void setScata(double power) { scata = power; }

void controlScata() {
  if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
    Task shoot_scata(scataAsync, TASK_PRIORITY_MIN);
  }
  if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) {
    Task shoot_boosted_scata(scataBoostAsync, TASK_PRIORITY_MIN);
  }
}

void scataAsync() {
  pros::delay(10);
  setScata(127);
  pros::delay(300);
  setScata(0);
  pros::delay(200);
  while (limit.get_value() == false) {
    intake.set_voltage_limit(0);
    setScata(127);
    pros::delay(30);
  }
  setScata(0);
  intake.set_voltage_limit(12000);
}

void scataBoostAsync() {
  pros::delay(10);
  setScata(127);
  pros::delay(350);
  boost1.set_value(true);
  boost1.set_value(true);
  setScata(0);
  pros::delay(300);
  while (limit.get_value() == false) {
    boost1.set_value(false);
    boost1.set_value(false);
    setScata(127);
    pros::delay(30);
  }
  setScata(0);
}