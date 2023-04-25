#include "main.h"
#include "pros/misc.h"

void controlExpansion() {}

void boost(bool state) {
  boost1.set_value(state);
  boost2.set_value(state);
}