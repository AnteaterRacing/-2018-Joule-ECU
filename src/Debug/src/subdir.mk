################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/ADC.c" \
"../src/ECU_Init.c" \
"../src/ECU_Operations.c" \
"../src/FTM.c" \
"../src/PWT.c" \
"../src/UART.c" \
"../src/clocks.c" \
"../src/main.c" \

C_SRCS += \
../src/ADC.c \
../src/ECU_Init.c \
../src/ECU_Operations.c \
../src/FTM.c \
../src/PWT.c \
../src/UART.c \
../src/clocks.c \
../src/main.c \

OBJS_OS_FORMAT += \
./src/ADC.o \
./src/ECU_Init.o \
./src/ECU_Operations.o \
./src/FTM.o \
./src/PWT.o \
./src/UART.o \
./src/clocks.o \
./src/main.o \

C_DEPS_QUOTED += \
"./src/ADC.d" \
"./src/ECU_Init.d" \
"./src/ECU_Operations.d" \
"./src/FTM.d" \
"./src/PWT.d" \
"./src/UART.d" \
"./src/clocks.d" \
"./src/main.d" \

OBJS += \
./src/ADC.o \
./src/ECU_Init.o \
./src/ECU_Operations.o \
./src/FTM.o \
./src/PWT.o \
./src/UART.o \
./src/clocks.o \
./src/main.o \

OBJS_QUOTED += \
"./src/ADC.o" \
"./src/ECU_Init.o" \
"./src/ECU_Operations.o" \
"./src/FTM.o" \
"./src/PWT.o" \
"./src/UART.o" \
"./src/clocks.o" \
"./src/main.o" \

C_DEPS += \
./src/ADC.d \
./src/ECU_Init.d \
./src/ECU_Operations.d \
./src/FTM.d \
./src/PWT.d \
./src/UART.d \
./src/clocks.d \
./src/main.d \


# Each subdirectory must supply rules for building sources it contributes
src/ADC.o: ../src/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ADC.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ECU_Init.o: ../src/ECU_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ECU_Init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ECU_Init.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/ECU_Operations.o: ../src/ECU_Operations.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ECU_Operations.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/ECU_Operations.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/FTM.o: ../src/FTM.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/FTM.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/FTM.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/PWT.o: ../src/PWT.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/PWT.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/PWT.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/UART.o: ../src/UART.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/UART.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/UART.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/clocks.o: ../src/clocks.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/clocks.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/clocks.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/main.o: ../src/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


