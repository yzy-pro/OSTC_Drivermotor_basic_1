#ifdef __cplusplus
extern "C" {
#endif
#include "DriverMotor.h"
#include <main.h>
#include "tim.h"

void motor_control (const uint8_t name, int32_t speed)
{
    if (speed > ABS_MAX_SPEED || speed < -ABS_MAX_SPEED)
    {
        if (speed > ABS_MAX_SPEED)
        {
            speed = ABS_MAX_SPEED;
        }
        else if (speed < -ABS_MAX_SPEED)
        {
            speed = -ABS_MAX_SPEED;
        }
    }

    if (name == RF_wheel)
    {
        if (speed == 0)
        {
            HAL_GPIO_WritePin(RF_IN1_GPIO_Port, RF_IN1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(RF_IN2_GPIO_Port, RF_IN2_Pin, GPIO_PIN_RESET);
            return;
        }

        HAL_GPIO_WritePin(RF_IN1_GPIO_Port, RF_IN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(RF_IN2_GPIO_Port, RF_IN2_Pin, GPIO_PIN_RESET);
        if (speed < 0)
        {
            HAL_GPIO_TogglePin(RF_IN1_GPIO_Port, RF_IN1_Pin);
            HAL_GPIO_TogglePin(RF_IN2_GPIO_Port, RF_IN2_Pin);
            speed = -speed;
        }
        __HAL_TIM_SetCompare(&htim1, RF_EN_Pin, speed);

    }
    else if (name == RB_wheel)
    {
        if (speed == 0)
        {
            HAL_GPIO_WritePin(RB_IN1_GPIO_Port, RB_IN1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(RB_IN2_GPIO_Port, RB_IN2_Pin, GPIO_PIN_RESET);
            return;
        }

        HAL_GPIO_WritePin(RB_IN1_GPIO_Port, RB_IN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(RB_IN2_GPIO_Port, RB_IN2_Pin, GPIO_PIN_RESET);
        if (speed < 0)
        {
            HAL_GPIO_TogglePin(RB_IN1_GPIO_Port, RB_IN1_Pin);
            HAL_GPIO_TogglePin(RB_IN2_GPIO_Port, RB_IN2_Pin);
            speed = -speed;
        }
        __HAL_TIM_SetCompare(&htim1, RB_EN_Pin, speed);

    }
    else if (name == LB_wheel)
    {
        if (speed == 0)
        {
            HAL_GPIO_WritePin(LB_IN1_GPIO_Port, LB_IN1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(LB_IN2_GPIO_Port, LB_IN2_Pin, GPIO_PIN_RESET);
            return;
        }

        HAL_GPIO_WritePin(LB_IN1_GPIO_Port, LB_IN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LB_IN2_GPIO_Port, LB_IN2_Pin, GPIO_PIN_RESET);
        if (speed < 0)
        {
            HAL_GPIO_TogglePin(LB_IN1_GPIO_Port, LB_IN1_Pin);
            HAL_GPIO_TogglePin(LB_IN2_GPIO_Port, LB_IN2_Pin);
            speed = -speed;
        }
        __HAL_TIM_SetCompare(&htim1, LB_EN_Pin, speed);

    }
    else if (name == LF_wheel)
    {
        if (speed == 0)
        {
            HAL_GPIO_WritePin(LF_IN1_GPIO_Port, LF_IN1_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(LF_IN2_GPIO_Port, LF_IN2_Pin, GPIO_PIN_RESET);
            return;
        }

        HAL_GPIO_WritePin(LF_IN1_GPIO_Port, LF_IN1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LF_IN2_GPIO_Port, LF_IN2_Pin, GPIO_PIN_RESET);
        if (speed < 0)
        {
            HAL_GPIO_TogglePin(LF_IN1_GPIO_Port, LF_IN1_Pin);
            HAL_GPIO_TogglePin(LF_IN2_GPIO_Port, LF_IN2_Pin);
            speed = -speed;
        }
        __HAL_TIM_SetCompare(&htim1, LF_EN_Pin, speed);
    }
}

void car_go_forward (int32_t speed)
{
    motor_control(RF_wheel, SPEED1);
    motor_control(RB_wheel, SPEED1);
    motor_control(LF_wheel, SPEED1);
    motor_control(LB_wheel, SPEED1);
}

void car_go_back (int32_t speed)
{
    motor_control(RF_wheel, SPEED2);
    motor_control(RB_wheel, SPEED2);
    motor_control(LF_wheel, SPEED2);
    motor_control(LB_wheel, SPEED2);
}

void car_turn_left (int32_t speed)
{
    motor_control(RF_wheel, SPEED1);
    motor_control(RB_wheel, SPEED1);
    motor_control(LF_wheel, SPEED2);
    motor_control(LB_wheel, SPEED2);
}

void car_turn_right (int32_t speed)
{
    motor_control(RF_wheel, SPEED2);
    motor_control(RB_wheel, SPEED2);
    motor_control(LF_wheel, SPEED1);
    motor_control(LB_wheel, SPEED1);
}

void car_stop (void)
{
    motor_control(RF_wheel, 0);
    motor_control(RB_wheel, 0);
    motor_control(LF_wheel, 0);
    motor_control(LB_wheel, 0);
}

#ifdef __cplusplus
}
#endif
