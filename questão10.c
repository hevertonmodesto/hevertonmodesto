#include <stdio.h>

int main(){
	
	char c[4];
  
	for(int i = 0;i<=3;i++){
  	  printf("char x + %d = %p\n",i+1 ,(c+i));
 	}
	int x[4];
	
	for(int i = 0;i<=3;i++){
  	  printf("int x + %d = %p\n",i+1,(x+i));
 	 }
	float f[4];
	for(int i = 0;i<=3;i++){
  	  printf("float x + %d = %p\n",i+1 ,(f+i));
 	 }
	double d[4];
	
	for(int i = 0;i<=3;i++){
 	   printf("double x + %d = %p\n",i+1 ,(d+i));
 	 }
	/*RESULTADO:
	
		char		-> 1 byte
		6487569			4093
		6487570			4094
		6487571			4095
		
		int			-> 2 bytes ----- 4 bytes
		6487556			4094			4096
		6487560			4096			4100
		6487564			4098			4104
		
		float		-> 4 bytes
		6487540			4096
		6487544			4100
		6487548			4104
		
		double		-> 8 bytes
		6487512			4100
		6487520			4108
		6487528			4116
	*/
}
