# arduino-led-blink
blink the onboard LED at pin 13

This program blinks the onboard LED [at pin 13] in an incremental order, with a delay of 2sec between each iteration.
And on the serial monitor[Tools > Serial Monitor] you can see when the blinking starts, stops and no.of times it blinks.

blining pattern:

*blink*

*blink* *blink*

*blink* *blink* *blink* 

*blink* *blink* *blink* *blink* 

...

Serial monitor output:

blinking started.....blinking stopped (1)

blinking started.....blinking stopped (2)

blinking started.....blinking stopped (3)

blinking started.....blinking stopped (4)

...


Sources:
https://www.arduino.cc/en/Reference/pinMode
https://www.arduino.cc/en/reference/serial
https://www.arduino.cc/en/Reference/DigitalWrite
