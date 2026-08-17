#include <iostream>
#include<utility>
// C++ poınter kullanarak diziyi tersine çevirme
    int main() {
		//statik dizi oluşturuldu
	int dark[6] = {3,2,1,6,5,4};
	int boyut = 6;
	int* mi = dark;
	 int* zah = dark + (boyut - 1);
		//döngü ile ters çevrildi
	while (&mi < &zah) {
		std::swap(*mi, *zah);

		mi++;
		zah--;
	}
		//yazdırıldı
	std::cout << "ters çevrilmiş dizi: \n";
	for (int i = 0; i < boyut;i++) {
		std::cout <<dark[i]<<" ";
	}
}





