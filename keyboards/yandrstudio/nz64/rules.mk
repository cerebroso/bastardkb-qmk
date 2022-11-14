# MCU name
MCU = STM32F401
BOARD = GENERIC_STM32_F401XC

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
<<<<<<<< HEAD:keyboards/bastardkb/skeletyl/v1/elitec/rules.mk

AUDIO_SUPPORTED = no        # Audio is not supported
RGB_MATRIX_SUPPORTED = yes  # RGB matrix is supported and enabled by default
RGBLIGHT_SUPPORTED = yes    # RGB underglow is supported, but not enabled by default
RGB_MATRIX_ENABLE = yes     # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)
RGB_MATRIX_DRIVER = WS2812  # RGB matrix driver support

SPLIT_KEYBOARD = yes
LAYOUTS = split_3x5_3
========
RGB_MATRIX_ENABLE = yes     # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)
RGB_MATRIX_DRIVER = WS2812  # RGB matrix driver support
WS2812_DRIVER = pwm         # Driver for RGB
>>>>>>>> 0b0a10e300aa7b9cab5e9e487c2aa806f52b0951:keyboards/yandrstudio/nz64/rules.mk
