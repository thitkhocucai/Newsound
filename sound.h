// header file for processing sound (WAV) fila

//define DEBUG

//constants definition 
#define SAMPLERATE 16000

//define the wav header
typedef struct{
	char chunkID[4];
	unsigned int chunkSize;
	char format[4];
	char subchunk1ID[4];
	unsigned int subchunk1Size;
	unsigned short audioFormat;
	unsigned short sumChannels;
	unsigned int sampleRate;
	unsigned int byteRate;
	unsigned short blockAlign;
	unsigned short bitsPerSample;
	char subchunk2ID[4];
	unsigned int subchunk2Size;
}WAVHeader;

//function prtotype
void displayWAVHeader(char filename[]);
void displayBar(char filename[]);
void printID(char id[]);