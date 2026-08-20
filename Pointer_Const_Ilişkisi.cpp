#include<iostream>
void ikiKatinaCikar(int* arr, int boyut) {
	//döngü ile dizi elemanlarını gezip, iki katına çıkarıyoruz ve pointer direkt diziye koyuyoruzz
	for (int i = 0;i < boyut; i++) {
		std::cout << i + 1 << ". elemanin fonskiyona ugramiş hali: ";
		arr[i] = 2 * arr[i];
		std::cout<<arr[i]  << std::endl;
	}

	std::cout << std::endl;
}

void yazdir(const int* const arr, int boyut) {
	//döngü ile dizi oluştuurluyor ve pointer direkt diziye koyuyoruz
	for (int i = 0;i < boyut; i++) {
		std::cout << i + 1 << ". eleman: " << arr[i] << std::endl;

	}
}

int main() 
{
	int dizi[5] = { 45,103,789,1660,27 };
	int boyut = 5;

	ikiKatinaCikar(dizi, boyut);//Fonksiyonların çağrılama sıralamasını da değiştirirsen çıkan sonuçta değişir.
	yazdir(dizi, boyut);
	return 0;
} // diretk diziyi pointer olarak atadığımız için direkt fonksiyon ile dizinin elemanlarını değiştiriyoruz.
