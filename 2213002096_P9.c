#include <stdio.h>
int main(){
	
int area, emp, x;

for (area=1;area<=5;area++){
		printf("\n\nArea%d", area);
		printf("\nNumero de empleados: ");
		scanf("%d", &emp);
			for (x=1;x<=emp;x++){
			if (x<10){
				printf("\nA%dE00%d", area, x);	
			
	}
			else if (x<100 && x>=10){
				printf("\nA%dE0%d", area, x);
			
			}
			else if(x>=100){
				printf("\nA%dE%d", area, x);
}
}
}
return 0;
}

