#define SUB_LED_NOTIFICATION

char const*const RED_LED_ON          = "01 0 1";
char const*const GREEN_LED_ON        = "01 1 1";
char const*const BLUE_LED_ON         = "01 2 1";
char const*const RED_LED_OFF         = "01 0 0";
char const*const GREEN_LED_OFF       = "01 1 0";
char const*const BLUE_LED_OFF        = "01 2 0";

char const*const RED_LED_BLINK_ON    = "02 0 1";
char const*const GREEN_LED_BLINK_ON  = "02 1 1";
char const*const BLUE_LED_BLINK_ON   = "02 2 1";
char const*const RED_LED_BLINK_OFF   = "02 0 0";
char const*const GREEN_LED_BLINK_OFF = "02 1 0";
char const*const BLUE_LED_BLINK_OFF  = "02 2 0";

char const*const RED2_LED_BLINK_ON    = "02 4 1";
char const*const GREEN2_LED_BLINK_ON  = "02 5 1";
char const*const BLUE2_LED_BLINK_ON   = "02 6 1";
char const*const RED2_LED_BLINK_OFF   = "02 4 0";
char const*const GREEN2_LED_BLINK_OFF = "02 5 0";
char const*const BLUE2_LED_BLINK_OFF  = "02 6 0";

char const*const KEY_LED_ON          = "01 3 1";
char const*const KEY_LED_OFF         = "01 3 0";

<<<<<<< HEAD
char const*const LCD_BACKLIGHT_FILE  = "/sys/devices/platform/msm_fb.590593/leds/lcd-backlight/brightness";
=======
char const*const LCD_BACKLIGHT_FILE  = "/sys/class/leds/lcd-backlight/brightness";
>>>>>>> 40cd9b8dd75915e7e5d46832e6ec3bc1fa9af590

char const*const LED_CONTROL_FILE    = "/sys/class/led/fih_led/control";

