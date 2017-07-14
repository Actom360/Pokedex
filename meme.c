#include <stdio.h>
#include <stdlib.h>

int main(){


	for(int i = 0; i< 100; i++){
		// convert number to string
		char string[7] = "area"; 
		if(i / 10 == 0){ //then its below 10
			string[4] = (char) ('0' + i);
			string[5] = 0; // 0 is a terminating character
		}
		else{
			string[4] = (char) ('0' + (i - i%10)/10);
			//printf("%c\n", (char) ('0' + (i - i%10)/10));
			string[5] = (char) ('0' + i%10); 
			string[6] = 0;
		}
		printf("%s", string);

		FILE * file= fopen(string, "r");
		char buf[20];
		while (fscanf(file, "%s", buf) != EOF){
		printf("%s\n", buf);
	}

	// sometimes you try things and they dont work
	/*char areas2[90][6];
	for(int i = 10; i< 100; i++){

	}*/
/*
	FILE * file= fopen("area0", "r");
	char buf[10];
	while (fscanf(file, "%s", buf) != EOF){
	printf("%s\n", buf);*/
}
}