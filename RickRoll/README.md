Update the DigiKeyboard.h header to include: 

#define KEY_UP_ARROW 0x52

#define KEY_DOWN_ARROW 0x51

#define KEY_LEFT_ARROW 0x50

#define KEY_RIGHT_ARROW 0x4F

the LEFT_ARROW is there by default, so make sure you dont have two instances.

Default path on Windows for the header is 

C:/Users/user_name_here/AppData/Local/Arduino15/packages/digistump/hardware/avr/version_number_here/libraries/digisparkkeyboard/
