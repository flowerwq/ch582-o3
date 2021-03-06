#ifndef __MODBUS_COILS_H__
#define __MODBUS_COILS_H__
#include "stdint.h"
#include "lightmodbus/slave.h"

typedef enum mb_coil_addr{
	MB_COILS_ADDR_BASE = 0,
	MB_COILS_ADDR_RELAY_BASE = MB_COILS_ADDR_BASE,
	MB_COILS_ADDR_RELAY_1 = MB_COILS_ADDR_RELAY_BASE,
	MB_COILS_ADDR_RELAY_MAX,
	
	MB_COILS_ADDR_V12_BASE = 10,
	MB_COILS_ADDR_V12_1 = MB_COILS_ADDR_V12_BASE,
	MB_COILS_ADDR_V12_MAX,

	MB_COILS_ADDR_BUZZER_BASE = 20,
	MB_COILS_ADDR_BUZZER_1 = MB_COILS_ADDR_BUZZER_BASE,
	MB_COILS_ADDR_BUZZER_MAX,
	
	//Channel switch 1 - 32
	MB_COILS_ADDR_SWITCH_BASE = 30,
	MB_COILS_ADDR_S1 = MB_COILS_ADDR_SWITCH_BASE,
	MB_COILS_ADDR_S2,
	MB_COILS_ADDR_S3,
	MB_COILS_ADDR_S4,
	MB_COILS_ADDR_S5,
	MB_COILS_ADDR_S6,
	MB_COILS_ADDR_S7,
	MB_COILS_ADDR_S8,
	MB_COILS_ADDR_S9,
	MB_COILS_ADDR_S10,
	MB_COILS_ADDR_S11,
	MB_COILS_ADDR_S12,
	MB_COILS_ADDR_S13,
	MB_COILS_ADDR_S14,
	MB_COILS_ADDR_S15,
	MB_COILS_ADDR_S16,
	MB_COILS_ADDR_S17,
	MB_COILS_ADDR_S18,
	MB_COILS_ADDR_S19,
	MB_COILS_ADDR_S20,
	MB_COILS_ADDR_S21,
	MB_COILS_ADDR_S22,
	MB_COILS_ADDR_S23,
	MB_COILS_ADDR_S24,
	MB_COILS_ADDR_S25,
	MB_COILS_ADDR_S26,
	MB_COILS_ADDR_S27,
	MB_COILS_ADDR_S28,
	MB_COILS_ADDR_S29,
	MB_COILS_ADDR_S30,
	MB_COILS_ADDR_S31,
	MB_COILS_ADDR_S32,
	MB_COILS_ADDR_SWITCH_MAX,
	MB_COILS_ADDR_MAX = MB_COILS_ADDR_SWITCH_MAX
} mb_coil_addr_t;

#define MB_COIL_SWITCH_VALID(addr)	((addr) >= MB_COILS_ADDR_SWITCH_BASE && (addr) < MB_COILS_ADDR_SWITCH_MAX)

typedef enum mb_discrete_input_addr{
	MB_DI_ADDR_BASE = 0,
	MB_DI_ADDR_SMOKE,
	MB_DI_ADDR_WATER,
	MB_DI_ADDR_DOOR1,
	MB_DI_ADDR_DOOR2,
	MB_DI_ADDR_MAX
} mb_discrete_input_addr_t;

void modbus_coil_update(mb_coil_addr_t addr, uint8_t value);
void mb_coils_init();
uint16_t modbus_coil_callback( ModbusRegisterQuery query, 
	ModbusDataType datatype, uint16_t index, uint16_t value, void *ctx );
void modbus_di_update(mb_coil_addr_t addr, uint8_t value);

#endif
