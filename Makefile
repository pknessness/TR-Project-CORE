flash:
	mbed-tools compile -m NUCLEO_F446RE -t GCC_ARM -f --sterm 

serial:
	mbed-tools sterm --baudrate 9600
