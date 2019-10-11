#!/bin/bash
set -x
# Copy to the Release Directory
/opt/Atollic_TrueSTUDIO_for_STM32_x86_64_9.0.0/ARMTools/bin/arm-atollic-eabi-objcopy -O binary Test401.elf Test401.bin
