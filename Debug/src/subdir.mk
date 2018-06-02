################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/ADC.c" \
"../src/CAN.c" \
"../src/ECU_Init.c" \
"../src/ECU_Operations.c" \
"../src/Error.c" \
"../src/FTM.c" \
"../src/I2C.c" \
"../src/Input_Scan.c" \
"../src/LSM9DS0.c" \
"../src/MSCAN_Module.c" \
"../src/PWT.c" \
"../src/PWTModule.c" \
"../src/UART.c" \
"../src/WheelSpeed.c" \
"../src/clocks.c" \
"../src/ics.c" \
"../src/main.c" \
"../src/msCANID.c" \
"../src/msCANdrv.c" \
"../src/msCANgv.c" \
"../src/nvic.c" \
"../src/sbc_init.c" \
"../src/spi.c" \

C_SRCS += \
../src/ADC.c \
../src/CAN.c \
../src/ECU_Init.c \
../src/ECU_Operations.c \
../src/Error.c \
../src/FTM.c \
../src/I2C.c \
../src/Input_Scan.c \
../src/LSM9DS0.c \
../src/MSCAN_Module.c \
../src/PWT.c \
../src/PWTModule.c \
../src/UART.c \
../src/WheelSpeed.c \
../src/clocks.c \
../src/ics.c \
../src/main.c \
../src/msCANID.c \
../src/msCANdrv.c \
../src/msCANgv.c \
../src/nvic.c \
../src/sbc_init.c \
../src/spi.c \

OBJS_OS_FORMAT += \
./src/ADC.o \
./src/CAN.o \
./src/ECU_Init.o \
./src/ECU_Operations.o \
./src/Error.o \
./src/FTM.o \
./src/I2C.o \
./src/Input_Scan.o \
./src/LSM9DS0.o \
./src/MSCAN_Module.o \
./src/PWT.o \
./src/PWTModule.o \
./src/UART.o \
./src/WheelSpeed.o \
./src/clocks.o \
./src/ics.o \
./src/main.o \
./src/msCANID.o \
./src/msCANdrv.o \
./src/msCANgv.o \
./src/nvic.o \
./src/sbc_init.o \
./src/spi.o \

C_DEPS_QUOTED += \
"./src/ADC.d" \
"./src/CAN.d" \
"./src/ECU_Init.d" \
"./src/ECU_Operations.d" \
"./src/Error.d" \
"./src/FTM.d" \
"./src/I2C.d" \
"./src/Input_Scan.d" \
"./src/LSM9DS0.d" \
"./src/MSCAN_Module.d" \
"./src/PWT.d" \
"./src/PWTModule.d" \
"./src/UART.d" \
"./src/WheelSpeed.d" \
"./src/clocks.d" \
"./src/ics.d" \
"./src/main.d" \
"./src/msCANID.d" \
"./src/msCANdrv.d" \
"./src/msCANgv.d" \
"./src/nvic.d" \
"./src/sbc_init.d" \
"./src/spi.d" \

OBJS += \
./src/ADC.o \
./src/CAN.o \
./src/ECU_Init.o \
./src/ECU_Operations.o \
./src/Error.o \
./src/FTM.o \
./src/I2C.o \
./src/Input_Scan.o \
./src/LSM9DS0.o \
./src/MSCAN_Module.o \
./src/PWT.o \
./src/PWTModule.o \
./src/UART.o \
./src/WheelSpeed.o \
./src/clocks.o \
./src/ics.o \
./src/main.o \
./src/msCANID.o \
./src/msCANdrv.o \
./src/msCANgv.o \
./src/nvic.o \
./src/sbc_init.o \
./src/spi.o \

OBJS_QUOTED += \
"./src/ADC.o" \
"./src/CAN.o" \
"./src/ECU_Init.o" \
"./src/ECU_Operations.o" \
"./src/Error.o" \
"./src/FTM.o" \
"./src/I2C.o" \
"./src/Input_Scan.o" \
"./src/LSM9DS0.o" \
"./src/MSCAN_Module.o" \
"./src/PWT.o" \
"./src/PWTModule.o" \
"./src/UART.o" \
"./src/WheelSpeed.o" \
"./src/clocks.o" \
"./src/ics.o" \
"./src/main.o" \
"./src/msCANID.o" \
"./src/msCANdrv.o" \
"./src/msCANgv.o" \
"./src/nvic.o" \
"./src/sbc_init.o" \
"./src/spi.o" \

C_DEPS += \
./src/ADC.d \
./src/CAN.d \
./src/ECU_Init.d \
./src/ECU_Operations.d \
./src/Error.d \
./src/FTM.d \
./src/I2C.d \
./src/Input_Scan.d \
./src/LSM9DS0.d \
./src/MSCAN_Module.d \
./src/PWT.d \
./src/PWTModule.d \
./src/UART.d \
./src/WheelSpeed.d \
./src/clocks.d \
./src/ics.d \
./src/main.d \
./src/msCANID.d \
./src/msCANdrv.d \
./src/msCANgv.d \
./src/nvic.d \
./src/sbc_init.d \
./src/spi.d \


# Each subdirectory must supply rules for building sources it contributes
src/ADC.o: ../src/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ADC.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/CAN.o: ../src/CAN.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/CAN.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/CAN.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ECU_Init.o: ../src/ECU_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ECU_Init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ECU_Init.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ECU_Operations.o: ../src/ECU_Operations.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ECU_Operations.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ECU_Operations.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Error.o: ../src/Error.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Error.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Error.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FTM.o: ../src/FTM.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/FTM.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/FTM.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/I2C.o: ../src/I2C.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/I2C.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/I2C.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Input_Scan.o: ../src/Input_Scan.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Input_Scan.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Input_Scan.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/LSM9DS0.o: ../src/LSM9DS0.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/LSM9DS0.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/LSM9DS0.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/MSCAN_Module.o: ../src/MSCAN_Module.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MSCAN_Module.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MSCAN_Module.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/PWT.o: ../src/PWT.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/PWT.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/PWT.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/PWTModule.o: ../src/PWTModule.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/PWTModule.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/PWTModule.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/UART.o: ../src/UART.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/UART.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/UART.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/WheelSpeed.o: ../src/WheelSpeed.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/WheelSpeed.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/WheelSpeed.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/clocks.o: ../src/clocks.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/clocks.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/clocks.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ics.o: ../src/ics.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ics.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ics.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/main.o: ../src/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/msCANID.o: ../src/msCANID.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/msCANID.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/msCANID.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/msCANdrv.o: ../src/msCANdrv.c
	@echo 'Building file: $<'
	@echo 'Executing target #21 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/msCANdrv.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/msCANdrv.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/msCANgv.o: ../src/msCANgv.c
	@echo 'Building file: $<'
	@echo 'Executing target #22 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/msCANgv.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/msCANgv.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/nvic.o: ../src/nvic.c
	@echo 'Building file: $<'
	@echo 'Executing target #23 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/nvic.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/sbc_init.o: ../src/sbc_init.c
	@echo 'Building file: $<'
	@echo 'Executing target #24 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/sbc_init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/sbc_init.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/spi.o: ../src/spi.c
	@echo 'Building file: $<'
	@echo 'Executing target #25 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/spi.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/spi.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


