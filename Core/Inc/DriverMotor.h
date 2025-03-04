#ifndef DRIVERMOTOR_H
#define DRIVERMOTOR_H

#include <main.h>

typedef enum {
    RF_wheel = 1,   // 右前轮
    RB_wheel = 2,   // 右后轮
    LB_wheel = 3,   // 左后轮
    LF_wheel = 4    // 左前轮
} WheelPosition;


typedef enum {
    FORWARD = 1,   // 前进
    FREEZE = 2,   // 反向
    BACKWARD = 3   // 向后
} WheelCondition;

#define ABS_MAX_SPEED 100
#define SPEED1 60
#define SPEED2 (-60)


void motor_control (uint8_t name, int32_t speed);
void car_go_forward (int32_t speed);
void car_go_back (int32_t speed);
void car_turn_left (int32_t speed);
void car_turn_right (int32_t speed);
void car_stop (void);


#endif //DRIVERMOTOR_H
