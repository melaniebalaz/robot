/**
 * Operation that should be performed as a result of a step.
 *
 * @see ROBOT_*
 */
typedef int RobotOperation;
typedef bool RobotSensorValue;

const RobotOperation ROBOT_MAKE_STEP = 2;
const RobotOperation ROBOT_TURN_RIGHT = 3;
const RobotOperation ROBOT_TURN_RIGHT_MAKE_STEP = 4;
const RobotOperation ROBOT_TURN_LEFT = 5;
const RobotOperation ROBOT_TURN_LEFT_MAKE_STEP = 6;

const RobotSensorValue ROBOT_BLOCKED_PATH = 0;
const RobotSensorValue ROBOT_EMPTY_PATH = 1;

/**
 * A robot is an entity that has three sensors (front, left, right) that can detect if there is a wall there or not.
 * They move one maze element at a time and can make decisions after each step where to continue.
 */
class Robot {
public:
    virtual RobotOperation makeDecision(RobotSensorValue front, RobotSensorValue left, RobotSensorValue right);
};

/**
 * This robot always tries to hug the right wall to find an exit.
 */
class RightAffineRobot : public Robot {
public:
    RobotOperation makeDecision(RobotSensorValue front, RobotSensorValue left, RobotSensorValue right);
};

/**
 * This robot always tries to hug the left wall to find an exit.
 */
class LeftAffineRobot : public Robot {
public:
    RobotOperation makeDecision(RobotSensorValue front, RobotSensorValue left, RobotSensorValue right);
};

