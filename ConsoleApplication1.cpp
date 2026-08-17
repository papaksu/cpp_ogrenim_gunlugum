#include <iostream>
#include<utility>
// C++ program to reverse an array using pointers
    int main() {
	int dark[6] = {3,2,1,6,5,4};
	int boyut = 6;
	int* mi = dark; 

	 int* zah = dark + (boyut - 1);
	while (&mi < &zah) {
		std::swap(*mi, *zah);

		mi++;
		zah--;
	}
	std::cout << "ters çevrilmiş dizi: \n";
	for (int i = 0; i < boyut;i++) {
		std::cout <<dark[i]<<" ";
	}
}





