#include<stdio.h>

void InputNumberArray1(int Number1[2][2],int Number2[2][2],int Number3[2][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Input Number1[%d][%d]:",i,j);
			scanf("%d",&Number1[i][j]);
		}

	}
	
}

void InputNumberArray2(int Number1[2][2],int Number2[2][2],int Number3[2][2]){
	  for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Input Number2[%d][%d]",i,j);
			scanf("%d",&Number2[i][j]);
		}

	}
}

void PlusArray(int Number1[2][2],int Number2[2][2],int Number3[2][2]){
		for(int i=1;i>=0;i--){
		        for(int j=1;j>=0;j--){
		        	Number3[i][j]=Number1[i][j]+Number2[i][j];
		        		printf("Number3[%d][%d] = %d\n",i,j,Number3[i][j]);
		        }
		   }
}

void MinusArraArray(int Number1[2][2],int Number2[2][2],int Number3[2][2]){
		for(int i=1;i>=0;i--){
		        for(int j=1;j>=0;j--){
		        	Number3[i][j]=Number1[i][j]-Number2[i][j];
		        		printf("Number3[%d][%d] = %d\n",i,j,Number3[i][j]);
		        }
		   }
}

int main(){
	int Number1[2][2],Number2[2][2],Number3[2][2];
	int Case;
	
	printf("----------------- Number1 ------------------\n");
	InputNumberArray1(Number1,Number2,Number3);
	printf("----------------- Number1 ------------------\n");
	InputNumberArray2(Number1,Number2,Number3);
	printf("----------------- Select Case ------------------\n");
	printf("Caase 1 PlusArray()\n");
	printf("Case 2 MinusArray()\n");
	printf("Please Select(1,2): ");
	scanf("%d",&Case);
	printf("----------------- Number3 ------------------\n");
	switch(Case){
		case 1 :
			PlusArray(Number1,Number2,Number3);
			break;
		case 2 :
			MinusArraArray(Number1,Number2,Number3);
			break;
    }
}
