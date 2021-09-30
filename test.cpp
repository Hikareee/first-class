#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
int Hori = 20;
int Miya = 20; 

int X = 10;
int Y = 10; 

char map[Hori][Miya];


for (int i = 0; i < Hori; i++){
	for (int j = 0; j < Miya; j++){
		if (i == 0 || j == 0 || i == (Hori - 1) || j == (Miya - 1)){
			map[i][j] = '*';
		}
		else {
			map[i][j] = ' ';
		}
	}
}


   map[Y][X] = 'T';
   while (true){
   	for (int i = 0; i < 32; i++){
   		printf ("\n");
	   }
   
   
   
   for (int i = 0; i < Hori; i++){
	for (int j = 0; j < Miya; j++){
		printf ("%c ", map[i][j]);
	}
	printf ("\n");
}
    
    
    
    
    
	char commands;
	
	printf ("move with |w|a|s|d:  ");
	scanf ("%c", &commands);
	getchar();
	
	switch (commands){
		case'w' : {
			map[Y][X] = ' ';
			Y --;
			map[Y][X] = 'T';
			
			
			break;
		}
		case 'a' : {
			map[Y][X] = ' ';
			X --;
			map[Y][X] = 'T';
			
			break;
		}
 
 
        case 's' :{
        	map[Y][X] = ' ';
        	Y ++;
        	map[Y][X] = 'T';
			
			break;
		}
 
        case 'd' : {
			map[Y][X] = ' ';
			X ++;
			map[Y][X] = 'T';
			
			break;
		}
 
 
      }
	
}
	
	
	
	
	return 0;
}
