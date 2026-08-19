#include<iostream> 
#include<string>
int main() {
	std::string str = "This is my life. ";

	//1. Boyut ve Kapasite fonksiyonları
	std::cout << "\n---1.Boyut ve  Kapasiste ---" << std::endl;
	std::cout << "Metin: " << str << std::endl;
	std::cout << "length()" << str.length() << std::endl;//Karakter sayısı
	std::cout << " size()" << str.size() << std::endl; // length ile aynı
	std::cout << "empty(): " << (str.empty() ? "true" : "false") << std::endl; // Boş mu?
	std::cout << "empty: " << str.capacity() << std::endl; //  Yendien bellek tahsis etmeden tutabileceği max boyutu

	// 2.Karakter Erişimi
	std::cout << "\n---2.Karakter Erişimi ---" << std::endl;
	std::cout << "str[0]:" << str[0] << std::endl; //'T' , sınır kontrolü yapmaz
	std::cout << "str.at(1): " << str.at(1) << std::endl; //'e' (Sınır kontrolü yapmaz
	std::cout << "front(): " << str.front() << std::endl; // İlk karakter
	std::cout << "back(): " << str.back() << std::endl; // Son karakter
	std::cout << "c_str(): " << str.c_str() << std::endl; // C tarzı const karakter dizisi döndürür
	
	// 3. Karakter Ekleme ve Silme
	std::cout << "\n---3. Modifikasyon ---" << std::endl;

	str.push_back('K'); //Sodan tek karakter ekler
	std::cout << "push_back: "<< str << std::endl;

	str.pop_back(); // Son karakteri siler
	std::cout << "pop.back(): " << str << std::endl;

	str.append("KINGS NEVER DIE.");// Sona metin ekler
	std::cout << "appen: " << str << std::endl;
	
	str.insert(11, "shape of heart "); // Belirtilen konuma metin ekler
	std::cout << "insert(): " << str << std::endl;

	str.erase(0, 4); // Belirtilen konumdan itibaren belirtilen sayıda karakteri siler
	std::cout << "erase(): " << str << std::endl;



	str.replace(0, 4, "those"); // Belirtilen konumdan itibaren belirtilen sayıda karakteri değiştirir
	std::cout << "replace(): " << str << std::endl;
    
	// 4. Karakter Arama ve ALT METİN(substring) Alma	
	std::cout << "\n---4. Karakter Arama ve ALT METİN(substring) Alma ---" << std::endl;
	std::string text = " NOT EVERYONE CAN BE A EVIL.";

	// std::string::npos -> Bulunamadı durumunu ifade eder.
size_t pos =text.find("EVIL"); // "EVIL" metninin konumunu bulur
std::cout << "find(): " << pos << ".indeks " << std::endl;
std::cout << "find(): " << text.find("EVIL", pos + 1) << std::endl; // Sonraki konumu bulmak için pos + 1 kullanılır

size_t rpos = text.rfind("EVIL"); // "EVIL" metninin sondan konumunu bulur
std::cout<< "RFİND(): " << rpos << ". indeks" << std::endl;

// substr(başlangıç_indeksi, uzunluk)
std::string sub = text.substr(4, 3); // 4. indeksten itibaren 3 karakter alır
std::cout << "substr(4, 3): " << sub << std::endl;
// 5. Karşılaştırma
std::cout << "\n--- 5. Karsilastirma ---" << std::endl;
std::string s1 = "Elma";
std::string s2 = "Armut";

// compare() -> 0: Eşit, <0: s1 daha küçük, >0: s1 daha büyük
if (s1.compare(s2) == 0) {
	std::cout << "Metinler esit" << std::endl;
}
else {
	std::cout << "Metinler esit degil" << std::endl;
}
// 6. İçeriği Temizleme
str.clear();                        // Tüm metni siler
std::cout << "\n--- 6. Temizleme ---" << std::endl;
std::cout << "clear() sonrasi empty(): " << (str.empty() ? "Evet" : "Hayir") << std::endl;

return 0;
}


