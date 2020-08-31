################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Keypad4x4verUdemy.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Keypad4x4verUdemy.list \

OBJCOPY_BIN += \
Keypad4x4verUdemy.bin \


# All Target
all: Keypad4x4verUdemy.elf secondary-outputs

# Tool invocations
Keypad4x4verUdemy.elf: $(OBJS) $(USER_OBJS) D:\GitHub\Embeded-C\target\Keypad4x4verUdemy\STM32F446RETX_FLASH.ld
	arm-none-eabi-gcc -o "Keypad4x4verUdemy.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\GitHub\Embeded-C\target\Keypad4x4verUdemy\STM32F446RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Keypad4x4verUdemy.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Keypad4x4verUdemy.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Keypad4x4verUdemy.list"
	@echo 'Finished building: $@'
	@echo ' '

Keypad4x4verUdemy.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Keypad4x4verUdemy.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
