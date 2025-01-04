
# PLATFORM_KEY := chibios
MCU := RP2040
BOARD := QMK_PM2040
BOOTLOADER := rp2040
VIA_ENABLE          = yes
VIAL_ENABLE         = yes
LTO_ENABLE          = yes

SERIAL_DRIVER		?= vendor

RGBLIGHT_ENABLE     = no# Can't have RGBLIGHT and RGB_MATRIX at the same time.
RGBLIGHT_DRIVER     = ws2812
CONVERT_TO=rp2040_ce
RGB_MATRIX_ENABLE   = yes# Can't have RGBLIGHT and RGB_MATRIX at the same time.
VIALRGB_ENABLE 		= yes
MOUSEKEY_ENABLE     = yes
OLED_ENABLE         = yes
#OLED_DRIVER         = SSD1306
EXTRAKEY_ENABLE     = yes
COMBO_ENABLE        = yes


QMK_SETTINGS        = yes
