#ifndef SPI_TXRX_H
#define SPI_TXRX_H
#include <stdint.h>


void BMI088_ACCEL_NS_L();
void BMI088_ACCEL_NS_H();
void BMI088_GYRO_NS_L();
void BMI088_GYRO_NS_H();
void BMI088_ReadReg_ACCEL(uint8_t reg, uint8_t *return_data, uint8_t length);
void BMI088_ReadReg_GYRO(uint8_t reg, uint8_t *return_data, uint8_t length);
void BMI088_WriteReg(uint8_t reg, uint8_t write_data);

void BMI088_Init();

#endif //SPI_TXRX_H
