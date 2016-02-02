#include "Robot.h"

RobotOperation RightAffineRobot::makeDecision(RobotSensorValue front, RobotSensorValue left, RobotSensorValue right){
    if (right == ROBOT_EMPTY_PATH){
        return ROBOT_TURN_RIGHT_MAKE_STEP;
    }
    if (front == ROBOT_EMPTY_PATH){
        return ROBOT_MAKE_STEP;
    }
    if (left == ROBOT_EMPTY_PATH){
        return ROBOT_TURN_LEFT_MAKE_STEP;
    }
    return ROBOT_TURN_RIGHT;
}

int LeftAffineRobot::makeDecision(RobotSensorValue front, RobotSensorValue left, RobotSensorValue right){
    if (left == ROBOT_EMPTY_PATH){
        return ROBOT_TURN_LEFT_MAKE_STEP;
    }
    if (front == ROBOT_EMPTY_PATH){
        return ROBOT_MAKE_STEP;
    }
    if (right == ROBOT_EMPTY_PATH){
        return ROBOT_TURN_RIGHT_MAKE_STEP;
    }
    return ROBOT_TURN_LEFT;
}