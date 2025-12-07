How to test my screen in 3 steps
Step 1:
Cable the screen to an esp32 (or its variants) with this plan:
  VCC >	5V
  GND	> GND
  CS	> GPIO 10
  RESET	> GPIO 2
  DC	> GPIO 3
  SDI / MOSI >	GPIO 7
  SDO / MISO	> GPIO 5
  SCK	> GPIO 6
  LED	> 3.3V
Step 2: upload the code from main.ino
Step 3: look the test

/!\WARNING/!\/!\WARNING/!\/!\WARNING/!\/!\WARNING/!\
This is a simple test code, not a code for a project



Code created using ChatGPT
