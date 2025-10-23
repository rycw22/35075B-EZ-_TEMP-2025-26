#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor intake1(1);
inline pros::Motor intake2(2);
inline ez::Piston trap_piston('B');
inline ez::Piston big_piston('A');
inline ez::Piston freak_mech('C');
inline ez::tracking_wheel horiz_tracker(17, 2.0, 4.0);  // This tracking wheel is perpendicular to the drive wheels
inline ez::tracking_wheel vert_tracker(16, 2.0, 4.0);  // This tracking wheel is parallel to the drive wheels
inline pros::Optical color(3);
inline pros::Distance DistanceSensor(10);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');