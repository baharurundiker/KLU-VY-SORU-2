#include<stdio.h>
#include<stdlib.h>

int main(void){
	printf("Bahar Urundiker,1220505018,KLU\n");
    printf("Bir dizi icerisindeki en kucukk elemani bulan bir fonksiyon kodu yaziniz\nYaziginiz fonksiyonun yurutme zamanini gosteren T(n) bagintisini belirleyiniz.(T(n) bagintisi word dosyasindadir.)"); 
    printf("\n*******************************************************\n");
	 
	int diziBuyuklugu,maxDeger,minDeger;
	int n = 0;

	printf("dizinin eleman sayisini giriniz\n");
	scanf("%d",&diziBuyuklugu);
	
	
	int elemanDizisi[diziBuyuklugu];
	
	if(diziBuyuklugu > 0){
	
	
    do{
		
		printf("dizinin %d. elemani = ",n+1);
	    scanf("%d",&elemanDizisi[n]);
		if(n==0){
			maxDeger = elemanDizisi[n];
			minDeger = elemanDizisi[n];
		}
		
		if(elemanDizisi[n] > maxDeger){
            maxDeger = elemanDizisi[n];
        }
        
        if(elemanDizisi[n] < minDeger){
            minDeger = elemanDizisi[n];
        }
        n++;
	}while(n < diziBuyuklugu);
	
	 printf("Dizinin en kucuk elemani = %d\n",minDeger);
     printf("Dizinin en buyuk elemani = %d",maxDeger);
}
else{
	printf("Lutfen gecerli eleman sayisi giriniz!!!!");
}
     return 0;
 }
