//üç kenarý verilen üçgenin alanýn hesabýný yapalým.

#include <stdio.h>

int main ()

{
	int kenar1;
	int kenar2;
	int kenar3;
	int u;
	float alan;
	
	printf ("lutfen ilk kenarinizi giriniz : ");
	scanf ("%d",&kenar1);
	
	printf ("lutfen ikinci kenarinizi giriniz : ");
	scanf ("%d", &kenar2);
	
	printf ("lutfen ucuncu kenarinizi giriniz : ");
	scanf ("%d", &kenar3);
	
	u = (kenar1 + kenar2 + kenar3)/2 ;
	
	alan = u * (u-kenar1) * (u-kenar2) * (u-kenar3) ;
	
	printf ("ucgeninizin alani : %.2f", sqrt(alan));
	
	
	
	
	
	
	
}
