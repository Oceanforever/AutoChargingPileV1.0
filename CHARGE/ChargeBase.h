#ifndef _CHARGEBASE_H
#define _CHARGEBASE_H
#include "SYSstatus.h"
#include "config.h"
#include "Led.h"

#define UART1_BAUD 9600 
#define TIMER1_PWM_STATUS_ON           Bit_SET 
#define TIMER1_PWM_STATUS_OFF          Bit_RESET

#define INFRARED_SEND_STATUS_ON     	0
#define INFRARED_SEND_STATUS_OFF    	1


//���׮������Ϣ
//�������⣬һ���̵�������������
typedef struct CChargeBase_parameter_all
{
	CLED_parameter			m_LED;
	SYSstatus_parameter m_SYSstatus;//ϵͳ״̬
	unsigned long m_heartBeat;
}CChargeBase_parameter;

//���׮����
extern CChargeBase_parameter ChargeBase;
void AutoCharging_setup(CChargeBase_parameter *CChargeBase_para);//���׮���ó�ʼ��
void AutoCharging_loop(CChargeBase_parameter *CChargeBase_para);//�ж�
void GUA_Infrared_Send(u32 nGUA_Data);
void Timer3_PWM_SetDutyCycle(u8 nGUA_Timer3_PWM_DutyCycle);
void Timer1_PWM_SetDutyCycle(u8 nGUA_Timer1_PWM_DutyCycle);
#endif

