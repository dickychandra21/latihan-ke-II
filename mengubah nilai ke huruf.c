#include<stdio.h>

int ubah (int nilai);
int main(void)

{
	int nilai;
	printf("PROGRAM MENGUBAH NILAI KE HURUF\n\n");
	printf("MASUKAN NILAI ANTARA 1 SAMPAI 5 :");
	scanf("%d,&nilai");
	ubah(nilai);
	getchar();

}
int ubah (int nilai)
{
	switch(nilai)
	{
	case 5:
		printf("Nilai huruf: A");break;
	case 4:
		printf("nilai huruf :B");break;
	case 3:
		printf("nilai huruf :C");break;
	case 2:
		printf("nilai huruf :D");break;
	case 1:
		printf("nilai huruf :E");break;
	default:
		printf("kesalahan dalam memasukan angka");
	
	}
	return(nilai);
}
