#ifndef _SYSSTATUS_H
#define _SYSSTATUS_H

#include "stm32f10x.h"
typedef struct SYSstatus_parameter_all
{
	char key1_status; 
	char key2_status;
	u32 tim1,tim2;  //��ֲ��һ�汾ʱ��������
}SYSstatus_parameter;


#endif

