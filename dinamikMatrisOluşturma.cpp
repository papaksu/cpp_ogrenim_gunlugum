#include<iostream>

int main() {
	int satir; 
	int sutun;
	std::cout << "Satir sayisini giriniz: \n";
	std::cin >> satir;
	std::cout << "Sutun sayisni giriniz: \n";
	std::cin >> sutun;
	//satır göstericilerini saklayacak matris dizisi:
	int** matris = new int* [satir];
	//her bir satir için sütün dizileri olusturluyor: 
	for (int i = 0;i < satir;++i) {
		matris[i] = new int[sutun];
	}
	//Degere atama işlemi ve kullnımı
	for (int i = 0;i < satir;++i) {
		for (int j = 0; j < sutun;++j) {
			matris[i][j] = i + j;
		}
	}
	//Ekran çıktısı
	std::cout << "Pointer ile SD Dinamik Matris: " << std::endl;
	for (int i = 0; i < satir;++i) {
		for (int j = 0;j < sutun; ++j) {
			std::cout << matris[i][j] << " ";
		}
		std::cout << std::endl;
	}
	delete[] matris;
	matris = nullptr;
}