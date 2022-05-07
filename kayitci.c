////////////////////////////////////////////////////////////////////////////////
//
// OZKAN-KARATAS 200255032 IKINCI OGRETIM
//
//   Odev icinde çalisanlar;
// - Kullanici tarafindan ogrenilen ay secimi
// - Kullanici tarafindan secilen fonksiyonun calismasi
// - Dosya boyutunu ogrenmek
// - Kayitlar arasina yeni kayit eklemek
// - Secilen aydaki tum harcamalarin ekrana bastirilmasi
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
 {
   FILE *dosya;
   int tercih1; // ay secimi
   int tercih2; // menu secimi
   
   aysecimi:
   	
   printf("Kacinci ay icin islem yapmak istiyorsunuz 1-12 arassnda bir deger giriniz ?\n");
   scanf("%d",&tercih1);
   
   if(tercih1>12)
   {
   	system("cls");
   	printf("Yanlis secim yaptiniz 1-12 arasinda bir deger giriniz !!!\n");
   	goto aysecimi;
   }
   system("cls");
   printf("1-Dosya Boyutunu Goster\n2-Harcama Ekle\n3-Harcama Ara (Gun Bazinda)\n4-Harcama Ara (Fiyat Bazinda)\n5-Tum harcamalari Goster\n6-Harcama Toplamlarini Yazdir\n7-Ay Secimine Geri Don\n");
   scanf("%d",&tercih2);
   system("cls"); 
   switch(tercih2)
   {
   	case 1: dosyaboyutu(tercih1);			break;
	case 2: harcamaekle(tercih1); 			break;
   	case 3: 								break; // bu satirdaki fonksiyon tamamlanamadi
   	case 4: fiyatbazinda(tercih1); 			break;
   	case 5: harcamatoplamgoster(tercih1); 	break;
   	case 6: harcamatoplam(tercih1); 		break;
   	case 7: goto aysecimi; 					break;
   	default: printf("Yanlis secim yaptiniz !");
   }
   return 0;
}	
dosyaboyutu(int a) // secilen dosyanin 'byte' cinsinden boyutunu yazdiran fonksiyon
{
	if(a==1)
	{
	FILE *dosya = fopen("1.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==2)
	{
	FILE *dosya = fopen("2.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==3)
	{
	FILE *dosya = fopen("3.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==4)
	{
	FILE *dosya = fopen("4.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==5)
	{
	FILE *dosya = fopen("5.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==6)
	{
	FILE *dosya = fopen("6.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==7)
	{
	FILE *dosya = fopen("7.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==8)
	{
	FILE *dosya = fopen("8.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==9)
	{
	FILE *dosya = fopen("9.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==10)
	{
	FILE *dosya = fopen("10.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==11)
	{
	FILE *dosya = fopen("11.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
	if(a==12)
	{
	FILE *dosya = fopen("12.txt","rb");
	fseek(dosya,0,SEEK_END);
	printf("Bu dosya %d byte boyutundadır.",ftell(dosya));
	fclose(dosya);
	}
}
harcamaekle(int a) // kayitlar arasina ekleme yapan fonksiyon
{
	int gun,harcama;
	char adi[50];
	if(a==1)
	{
	FILE *dosya = fopen("1.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==2)
	{
	FILE *dosya = fopen("2.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==3)
	{
	FILE *dosya = fopen("3.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);;
	}
	if(a==4)
	{
	FILE *dosya = fopen("4.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==5)
	{
	FILE *dosya = fopen("5.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==6)
	{
	FILE *dosya = fopen("6.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==7)
	{
	FILE *dosya = fopen("7.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==8)
	{
	FILE *dosya = fopen("8.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==9)
	{
	FILE *dosya = fopen("9.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==10)
	{
	FILE *dosya = fopen("10.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==11)
	{
	FILE *dosya = fopen("11.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
	if(a==12)
	{
	FILE *dosya = fopen("12.txt","a");
	printf("Harcama gununu giriniz:");
    scanf("%d",&gun);
    printf("Harcama nedenini giriniz:");
    scanf("%s",adi);
    printf("Harcama tutarini giriniz:");
    scanf("%d",&harcama);
    fprintf(dosya,"%d ",gun);
    fprintf(dosya,"%s ",adi);
    fprintf(dosya,"%d",harcama);
    fprintf(dosya," ");
	fclose(dosya);
	}
}
harcamatoplamgoster(int a) // secilen dosya icerisindeki tum harcama ve harcama detaylarini yazdiran fonksiyon
{
	char oku;
	if(a==1)
	{
		FILE *dosya = fopen("1.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==2)
	{
		FILE *dosya = fopen("2.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==3)
	{
		FILE *dosya = fopen("3.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==4)
	{
		FILE *dosya = fopen("4.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==5)
	{
		FILE *dosya = fopen("5.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==6)
	{
		FILE *dosya = fopen("6.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==7)
	{
		FILE *dosya = fopen("7.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==8)
	{
		FILE *dosya = fopen("8.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==9)
	{
		FILE *dosya = fopen("9.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==10)
	{
		FILE *dosya = fopen("10.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==11)
	{
		FILE *dosya = fopen("11.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
	if(a==12)
	{
		FILE *dosya = fopen("12.txt","r");
		do
		{
			oku = getc(dosya);
			printf("%c",oku);
		}
		while(oku!=EOF);
		fclose(dosya);
	}
}
harcamatoplam(int a) // secilen dosya icindeki harcama toplamini hesaplayan fonksiyon
{
	char gun[50],harcamaDetay[50];
	int harcama[50],i=0;
	int toplam = 0;
	if(a==1)
	{
		FILE *dosya = fopen("1.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Ocak ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==2)
	{
		FILE *dosya = fopen("2.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Subat ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==3)
	{
		FILE *dosya = fopen("3.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Mart ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==4)
	{
		FILE *dosya = fopen("4.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Nisan ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==5)
	{
		FILE *dosya = fopen("5.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Mayis ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==6)
	{
		FILE *dosya = fopen("6.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Haziran ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==7)
	{
		FILE *dosya = fopen("7.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Temmuz ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==8)
	{
		FILE *dosya = fopen("8.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Agustos ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==9)
	{
		FILE *dosya = fopen("9.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Eylul ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==10)
	{
		FILE *dosya = fopen("10.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Ekim ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==11)
	{
		FILE *dosya = fopen("11.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Kasim ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	if(a==12)
	{
		FILE *dosya = fopen("12.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		int eleman = (sizeof(harcama)/sizeof(int));
		for(int i = 0; i < 50; i++)
		{
			toplam += harcama[i];
		}
		printf("Aralik ayi harcamaniz : %d",toplam);
		fclose(dosya);
	}
	
}
fiyatbazinda(int a) // secilen dosya icindeki en buyuk veya en kucuk harcamayi hesaplayan fonksiyon
{
	int eleman,enbuyuk,enkucuk;
    int toplam = 0;
	char gun[50],harcamaDetay[50];
	int harcama[50],i=0;
	int karar;
	printf("1-En Buyuk Harcama\n2-En Kucuk Harcama");
	scanf("%d",&karar);
	if(a==1)
	{
		FILE *dosya = fopen("1.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
    	
	}
	if(a==2)
	{
		FILE *dosya = fopen("2.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}	
	}
	if(a==3)
	{
		FILE *dosya = fopen("3.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==4)
	{
		FILE *dosya = fopen("4.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==5)
	{
		FILE *dosya = fopen("5.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==6)
	{
		FILE *dosya = fopen("6.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==7)
	{
		FILE *dosya = fopen("7.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==8)
	{
		FILE *dosya = fopen("8.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==9)
	{
		FILE *dosya = fopen("9.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==10)
	{
		FILE *dosya = fopen("10.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==11)
	{
		FILE *dosya = fopen("11.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
	if(a==12)
	{
		FILE *dosya = fopen("12.txt","r");
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d \n",gun[i],harcamaDetay[i],&harcama[i]);
			i++;
		}
		for(int i = 0; i < eleman; i++)
    	{
			if(i == 0)
			{
				enbuyuk = harcama[i];
        	}
        	if(harcama[i] > enbuyuk)
			{
            	enbuyuk = harcama[i];
        	}
        	if(harcama[i] < enkucuk)
			{
            	enkucuk = harcama[i];
        	}
    	}
    	switch(karar)
    	{
    		case 1 : printf("Dizinin en buyuk degeri = %d",enbuyuk); break;
    		case 2 : printf("Dizinin en kucuk degeri = %d",enkucuk); break;
		}
	}
}