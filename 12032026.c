#include<stdio.h>
/*
int main(){
	int mounth;
	printf("Bir ay numarasi girin : ");
	scanf("%i", &mounth);
	
	switch(mounth){
		case 12:
		case 1:
		case 2:
			printf("Kis mevsimindesiniz");
			break;
		case 3:
		case 4:
		case 5:
			printf("Ilkbahar mevsimindesiniz");
			break;
		case 6:
		case 7:
		case 8:
			printf("Yaz mevsimindesiniz");
			break;
		case 9:
		case 10:
		case 11:
			printf("Sonbahar mevsimindesiniz");
			break;
		default:
			printf("Hata deger girdiniz");
			break;
	}
	return 0;
}
*/
/*
int main(){
	char type;
	printf("Yapacaginiz islemi girin : ");
	scanf("%c", &type);
	
	int num1, num2, result;
	printf("1. Sayiyi girin : ");
	scanf("%i", &num1);
			
	printf("2. Sayiyi girin : ");
	scanf("%i", &num2);
	
	switch(type){
		case '-':
			result = num1 - num2;
			break;
		case '+':
			result = num1 + num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("Hatalý iþlem seçtiniz");
			return 0;
	}
	
	printf("Ýslem sonucunuz : %i", result);
	return 0;
}
*/
/*
int main(){
	float account = 10000.0, process;
	int select;
	
	printf("1 - Para cek\n2 - Para Yatir\n3 - Bakiye Sorgula\n4 - Cikis\nIslem secin : ");
	scanf("%i", &select);
	
	switch(select){
		case 1:
			printf("Cekilecek tutar girin : ");
			scanf("%f", &process);
			
			if(process > account){
				printf("Hesabinizda yeterli miktarda para yok");
				break;
			}
			
			account -= process;
			printf("Son bakiyeniz : %f", account);
			break;
		case 2:
			printf("Yatirilacak tutar girin : ");
			scanf("%f", &process);
			
			account += process;
			printf("Son bakiyeniz : %f", account);
			break;
		case 3:
			printf("Bakiyeniz : %f", account);
			break;
		case 4:
			printf("Kart geri veriliyor");
			break;
		default:
			printf("Hatali girdiniz");
			break;
	}
	return 0;
}
*/

int main(){
	int sayi, on;
	printf("Iki basamakli sayi girin : ");
	scanf("%i", &sayi);
	
	on = sayi / 10;
	sayi = sayi % 10;
	switch(on){
		case 0:
			printf("");
			break;
		case 1:
			printf("On ");
			break;
		case 2:
			printf("Yirmi ");
			break;
		case 3:
			printf("Otuz ");
			break;
		case 4:
			printf("Kirik ");
			break;
		case 5:
			printf("Eli ");
			break;
		case 6:
			printf("Altmis ");
			break;
		case 7:
			printf("Yetmis ");
			break;
		case 8:
			printf("Seksen ");
			break;
		case 9:
			printf("Doksan ");
			break;
		default:
			printf("");
			break;
	}
	
	switch(sayi){
		case 0:
			printf("Sifir");
			break;
		case 1:
			printf("Bir");
			break;
		case 2:
			printf("Iki");
			break;
		case 3:
			printf("Uc");
			break;
		case 4:
			printf("Dort");
			break;
		case 5:
			printf("Bes");
			break;
		case 6:
			printf("Alti");
			break;
		case 7:
			printf("Yedi");
			break;
		case 8:
			printf("Sekiz");
			break;
		case 9:
			printf("Dokuz");
			break;
		default:
			printf("");
			break;
	}
	return 0;
}

