#include<stdio.h>


//İki sayının çarpımını ekrana yazdırın
/*int main(){
	float n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%f",&n1);
	
	printf("Sayi 2 girin : ");
	scanf("%f",&n2);
	
	double result = n1 * n2;
	printf("Kalvyeden girdiginiz %f ile ikinci girdiginiz %f sayisinin carpiminin sonucu %.2lf", n1,n2,result);
	
	return 0;
}*/

//Girilen karakterin sayılık değerini yazdırın
/*int main(){
	
	char c;
	
	printf("Bir karakter girin : ");
	scanf("%c", &c);
	
	printf("%c -> %i", c, c);
	
	return 0;
}*/

//İki sayı girin, yerlerini değiştirip tekrardan o iki sayıyı yazdırın
/*int main(){
	int n1, n2, temp;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n2);
	
	temp = n2;
	n2 = n1;
	n1 = temp;
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}*/

//İki sayı girin, yerlerini değiştirip tekrardan o iki sayıyı yazdırın
/*int main(){
	int n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	n2 = n1;
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}*/

/*İki sayı girin, yerlerini değiştirip tekrardan o iki sayıyı yazdırın
<BUNA DİKKAT ET>*/
/*int main(){
	int n1, n2;
	
	printf("Sayi 1 girin : ");
	scanf("%i", &n1);
	
	printf("Sayi 2 girin : ");
	scanf("%i", &n2);
	
	n1 = n1 - n2;
	n2 = n1 + n2;
	n1 = n2 - n1;
	
	printf("Sayi1 : %i\nSayi 2 : %i", n1, n2);
	return 0;
}*/

//Girilen sayı "çift" mi "tek" mi olduğunu yazdırın
/*int main(){
	int sayi;
	
	printf("Sayi girin : ");
	scanf("%i", &sayi);
	
	if(sayi % 2 == 0){
		printf("Cift sayidir");
	}else{
		printf("Tek sayidir");
	}
	
	return 0;
}*/

//Girilen 3 sayının en büyüğünü yazdırın
/*int main(){
	
	int max, i = 0;
	
	for(i = 0; i < 3; i++){
		printf("Sayi girin : ");
		int sayi;
		scanf("%i", &sayi);
		
		if(i == 0){
			max = sayi;
		}
		
		if(max < sayi){
			max = sayi;
		}
	}
	
	printf("En buyuk sayi : %i", max);
	return 0;
}*/

