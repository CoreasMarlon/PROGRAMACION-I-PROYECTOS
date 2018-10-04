#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	int mat[5][5];
	int mat2[5][5];
	int mat3[5][5];
	for(int fila=0; fila<5; fila++){
		for(int col=0; col<5; col++){
			mat[fila][col]=0;
			
			if((fila%2==0 && col%2==0) || (fila==col) || (fila%2==1 && col%2==1)){
			mat2[fila][col]=0;
		}else{
			mat2[fila][col]=1;
		}
			mat3[fila][col]=mat[fila][col]+mat2[fila][col];
		}
	}
	for(int fila=0; fila<5; fila++){
		for(int col=0; col<5; col++){
			cout<<mat3[fila][col]<<"	";
		}
	cout<<endl;
}
	return 0;
}
