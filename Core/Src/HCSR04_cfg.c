/*
 * HCSR04_cfg.c
 *
 *  Created on: Mar 10, 2026
 *      Author: karthik
 */


/*
 * File: HCSR04_cfg.c
 * Driver Name: [[ HC-SR04 Ultrasonic Sensor ]]
 * SW Layer:   ECUAL
 * Created on: Jun 28, 2020
 * Author:     Khaled Magdy
 * -------------------------------------------
 * For More Information, Tutorials, etc.
 * Visit Website: www.DeepBlueMbedded.com
 *
 */

#include "../inc/HCSR04.h"

const HCSR04_CfgType HCSR04_CfgParam[HCSR04_UNITS] =
{
    // HC-SR04 Sensor Unit 1 Configurations
    {
	GPIOC,
	GPIO_PIN_8,
	TIM12,
	TIM_CHANNEL_1,
	84
    }
};
