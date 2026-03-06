#include<stdio.h>

//Girilen karakter "sesli" mi "sessiz" mi olduðunu yazdýrýn
/*int main(){
	char key[] = {'i','o','a','e', 'u', 'I', 'O', 'A', 'E', 'U'};
	char value;
	int i = 0;
	
	printf("Harf girin : ");
	scanf("%c", &value);
	
	for(i; i < sizeof(key); i++){
		if(value == key[i]){
			printf("Sessli");
			return 0;
		}
	}
	
	printf("Sessiz");
	return 0;
}*/

//Yol ve Zaman bilgisini alarak ortalama kaç km hýzla gitmesi gerktiðini yazdýrýn
/*int main(){
	float yol, varis;
	
	printf("Toplam yolu girin : ");
	scanf("%f", &yol);
	
	printf("Varmak istediginiz zamani girin : ");
	scanf("%f", &varis);
	
	printf("Ortalama hiziniz bu olmali : %.2f", yol/varis);
	return 0;
}*/

//Doðum gününün ve bugünün bilgisini alarak GÜN, AY, YIL þeklinde ne kadar yaþadýðýný yazdýrýn
/*int main(){
	int year, mounth, day, yearB, mounthB, dayB;
	
	printf("Dogum tarihiniz girin : (GUN/AY/YIL)");
	scanf("%i/%i/%i", &dayB, &mounthB, &yearB);
	
	printf("Bugunun tarihini girin : ");
	scanf("%i/%i/%i", &day, &mounth, &year);
	
	if(day > 31 || dayB > 31 || mounth > 12 || mounthB > 12 || (year-yearB) < 0){
		printf("Hatalý deðer girdiniz.");
		return 0;
	} 
	
	if(dayB > day){
		day += 30;
		mounth -= 1;
	}
	
	if(mounthB > mounth){
		mounth += 12;
		year -= 1;
	}
	
	printf("Dunyada %i gun %i ay %i yil varsiniz", (day - dayB), (mounth - mounthB), (year - yearB));
	return 0;
}*/

//Kare, üçgen ve dikdörtgen alan hesaplarýndan birini seçerek o seçilen iþlemin sonucunu yazdýrýn
int main(){
	int select;
	float result;
	
	printf("1 - Karenin alanini hesapla\n2 - Ucgenin alanini hesapla\n3 - Dikdortgen alanini hesapla\nHesaplama secin : ");
	scanf("%i", &select);
	
	if(select == 1){
		int kare;
		printf("Karenin bir kenar uzunlugunu girin:");
		scanf("%i", &kare);
		
		result = kare * kare;
	}else if(select == 3){
		int uzun, kisa;
		printf("Dikdortgenin bir uzun kenari girin:");
		scanf("%i", &uzun);
		
		printf("Dikdortgenin bir kisa kenari girin:");
		scanf("%i", &kisa);
		
		result = uzun * kisa;
	}else if(select == 2){
		float taban, h;
		printf("Ucgenin taban uzunlugunu girin:");
		scanf("%f", &taban);
		
		printf("Ucgenin yuksekligini girin:");
		scanf("%f", &h);
		
		result = (taban * h) / 2;
	}else{
		printf("Hatalý deðer giriniz");
		return 0;
	}
	
	printf("Alani : %.2f", result);
	return 0;
}
