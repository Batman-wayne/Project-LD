#ifndef IO_HANDLER_H_
#define IO_HANDLER_H_
#include "alt_types.h"
#include "system.h"

// These addresses are defined in system.h generated by Eclipse, and they
// should have been matched to the addresses shown in Qsys.
// If for any reason they are not correctly defined, you can replace these
// with the addresses you read in Qsys.
#define otg_hpi_address			(volatile int*) 	OTG_HPI_ADDRESS_BASE
#define otg_hpi_data			(volatile int*)	    OTG_HPI_DATA_BASE
#define otg_hpi_r				(volatile char*)	OTG_HPI_R_BASE
#define otg_hpi_cs				(volatile char*)	OTG_HPI_CS_BASE //FOR SOME REASON CS BASE BEHAVES WEIRDLY MIGHT HAVE TO SET MANUALLY
#define otg_hpi_w				(volatile char*)	OTG_HPI_W_BASE
#define otg_hpi_reset			(volatile char*)	OTG_HPI_RESET_BASE
#define mouse_x_base			(volatile int*)		MOUSE_X_BASE
#define mouse_y_base			(volatile int*)		MOUSE_Y_BASE
#define cal_start				(volatile char*)	CALIBRATE_START_BASE
#define click					(volatile char*)	MOUSE_CLICK_BASE
#define blueg					(volatile int*)		BLUE_BASE
#define redg					(volatile int*)		RED_BASE
#define green1g					(volatile int*)		GREEN1_BASE
#define green2g					(volatile int*)		GREEN2_BASE


void IO_write(alt_u8 Address, alt_u16 Data);
alt_u16 IO_read(alt_u8 Address);
void IO_init(void);


#endif
