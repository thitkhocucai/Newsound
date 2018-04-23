----------------------------------------------SOUND SENSOR PROJECT---------------------------------------------------------
usb 
This project is meant to collect sound level at a proximity of a Rasperry Pi device. The RPI is equipped with a USB sound card (C-media Electronics, INC. Audio Adapter) and a microphone. The sound is recorded at 16000Hz sample rate and every second will produce 80 pieces of RMS value as a bar - diagram. In the sound file, 8 pieces if data will be printed out by a.php to .txt file
Table of content
1. Configuration
  - One Raspberry Pi B model
  - One micro sd card 16gb
  - one usb a to micro usb cable
  - one sound card
  - one microphone 
  - one ethernet cable
2. Installation 
  - install sd card in raspberry pi
  - plug in ethernet cable
  - plug in sound card with microphone
  - Input the power source with the cable from computer to Rasperry i
3. Operation
  - All the firts setting follow pi intruction in the portal
  - When you have in plug in the cable
  - Download this file by input the code : clone: link to the file
  - Type in: make
  - After that type in ./sound.a
  - The program will running and try to make sound in to microphone
  - The program will record the sound and display in the monitor
4. Mainfest (list of files and short description of their roles)
  - Readme.md
  - main.c
  - sound.c
  - screen.c
  - comm.c
  - comm.h
  - comm.o
  - screen.h
  - sound.h
 5.License
    Raspberry [i is a trademark of the Rassberry license
    The bluetooth word mark and logos are resignted trademarks owned by Bluetooth SIG, Inc.
    Other trademark names are those of their repective owners
    For more information found in Raspberry intruction
 6.Contact ìnormation
 Lam Nguyen 
 Vaasa University of Applied information
 Email: Papazola@gmail.com
