#include <iostream>

int main()
{ // Dizi tanımlama ve başlatma
	int intDizi[] = { 10,20,30 };
	double doubleDizi[] = { 10.5,20.5,30.5 };
	char charDizi[] = { 'a','b','c' };
	
	int* ptrInt = intDizi;
	double* ptrDouble = doubleDizi;
	char* ptrChar = charDizi;
	
	//İnt türündki pointer adres ve tutuğu değerleri yazdırıyoruz.
	std::cout << "--- INT POINTER (sizeof: " << sizeof(int) << " bayt) ---" << std::endl;
	std::cout << " Baslangic Adresi( ptrInt): " << ptrInt << " | Deger: " << *ptrInt << std::endl;
	ptrInt++; // Pointer'ı bir sonraki int elemanına kaydır
	std::cout << "Bir sonraki Adres (ptrInt++) : " << ptrInt << " |Deger: " << *ptrInt << std::endl;

	std::cout << "\n---DOUBLE POINTER (sizeof: " << sizeof(char) << " bayt)---" << std::endl;
	std::cout << "Başlangiç Adresi (ptrDouble) :" << ptrDouble << " |Deger: " << *ptrDouble << std::endl;
	ptrDouble++;//Pointer'ı bir sonraki double elemanina kaydırır.
	std::cout << " Bir sonraki adres (ptrDouble++) :  " << ptrDouble << " |Deger: " << *ptrDouble << std::endl;

	std::cout << "\n ---CHAR POINTER (sizeof: " << sizeof(char) << " bayt) ---" << std::endl;
	//void*  yapılamsını nedeni: cout, char* görünce adresi  değil metni yazdırır.
	std::cout << "Baslangic Adresi (ptrChar) : " << (void*)ptrChar << " |Deger: " << *ptrChar << std::endl;
	ptrChar++;
	std::cout << "Bir sonraki adres(ptrChar++) :" << (void*)ptrChar << " |Deger: " << *ptrChar << std::endl;

	
}

