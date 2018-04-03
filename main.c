#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "sound.h"

int main (void)
{
	int rat;
	while(1)
	{
		rat = system("arecord -q -r16000 -c1 s16_LE -d1 test.wav");
		if(
		//RECORD 1 second if sound into test.wav
		//open the wav file and read samples
		displayWAVheader("test.wav");
		//display nescessary information (duration, wav header, etc)
		//calculate fast dBs
		displayBar("test.wav");
		//send fast dBs to web (php program on ww.cc.puv.fi)
		break; // for testing, hust run the loop once
	}
}
