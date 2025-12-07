How to test my screen in 3 steps
Step 1:
Cable the screen to an esp32 (or its variants) with this plan:
  VCC	> 5V 
  GND	> GND	
  SCL / SCK >	GPIO 6	
  SDA / MOSI >	GPIO 7	
  RES / RESET >	GPIO 2	
  DC / A0	> GPIO 3	
  CS	> GPIO 10
  BL / LED	> 3.3V
Step 2: upload the code from main.ino
Step 3: look the test

/!\WARNING/!\/!\WARNING/!\/!\WARNING/!\/!\WARNING/!\
This is a simple test code, not a code for a project



Code created using ChatGPT
