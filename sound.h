//header file for processing sound (WAV) file.

//#define DEBUG

//constants definition
#define SAMPLERATE 16000 // define the sample rate
#define ESC 0x1b // define the esc
//define the wav header
typedef struct { 
	char chunkID[4]; // "RIFF"
	unsigned int chunkSize;  // 4 bytes
	char format[4]; // "WAVE"
	char subchunk1ID[4]; // "fmt "
	unsigned int subchunk1Size; // unsigned subchunk
	unsigned short audioFormat; // audio format
	unsigned short numChannels; // numchannel
	unsigned int sampleRate; // samplerate
	unsigned int byteRate; // byterate
	unsigned short blockAlign; // block Alight
	unsigned short bitsPerSample; // Bitspersample
	char subChunk2ID[4]; // "data" // subChunk
	unsigned int subChunk2Size; // chubchunk
}WAVHeader;

// function prototypes
void displayWAVheader(char filename[]);
void displayBar(char filename[]);
void printID(char id[]);
