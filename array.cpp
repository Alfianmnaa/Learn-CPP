#include <iostream>
using namespace std;

int main(){
	int nilaiSiswa[] = {20,60,80,90,40,100};
	for(int i = 0 ; i <= 5; i++){
		if(nilaiSiswa[i] > 70){
			cout << "lulus" << endl;
		} else {
			cout << "tidak lulus" << endl;
		}
	}
}
