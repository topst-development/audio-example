#include <stdio.h>
#include <stdlib.h>
	  
int main (void)
{
	int re;
	
	printf("Recording for 3 seconds\n");
	if (re = system("arecord -f S16_LE -d 3 -c 2 -r 16000 --device=\"hw:0,0\" ./test-mic.wav\n") < 0) {
		printf("Record failed, error code : %d\n", re);
	}
	
	printf("playing\n");
	if (re = system("aplay ./test-mic.wav\n") < 0) {
		printf("Play failed, error code : %d\n", re);
	}
	
	if ( re = system("rm -rf test-mic.wav\n") < 0 ) {
		printf("Remove failed, error code : %d\n", re);
	}
	printf("Closing\n");
	
	return 0;
}
