#ifndef __IOT_H__
#define __IOT_H__

/*******************************************************************************
 *** COMMON ENUM
 ******************************************************************************/
typedef enum
{
	NORMAL_MODE,
	SOS_MODE,
	ALARM_MODE,
	PANIC_MODE,
	NUM_IOT_MODES,
} iot_mode_e;

/*******************************************************************************
 *** COMMON TYPEDEF
 ******************************************************************************/
typedef struct
{
	void (*handler)(int);
	int count;
	int state;
	int time;
} task_t;

typedef struct
{
	task_t task;
	iot_mode_e current;
	iot_mode_e requested;
	int timer;
	bool long_press;
	bool pin_state;
} iot_mode_t;

#endif  // __IOT_H__
