/* 
 * File:   GlobalCAN_IDs.h
 * Author: John
 *
 * Created on November 15, 2019, 5:16 PM
 */

#ifndef GLOBALCAN_IDS_H
#define	GLOBALCAN_IDS_H

#ifdef	__cplusplus
extern "C" {
#endif

#define GLOBAL_DEVICES 10
#define GLOBAL_DATA_IDX_PER_DEV 7



//Complete index of all the
typedef enum {
	DEVICE_STATUS=0,
	DEVICE_MACRO,
	DATA_0,
	DATA_1,
	DATA_2,
	DATA_3,
	DATA_4
} GlobalDeviceData_t;
#define getGBL_DEVICE_STATUS(c) c*GLOBAL_DATA_IDX_PER_DEV + DEVICE_STATUS
#define getGBL_MACRO_INDEX(c) c*GLOBAL_DATA_IDX_PER_DEV + DEVICE_MACRO

volatile int receiveArrayCAN_Global[GLOBAL_DEVICES*GLOBAL_DATA_IDX_PER_DEV +1];
volatile bool GBL_CAN_FT_recievedFlag[GLOBAL_DEVICES*GLOBAL_DATA_IDX_PER_DEV +1];

#ifdef	__cplusplus
}
#endif

#endif	/* GLOBALCAN_IDS_H */
