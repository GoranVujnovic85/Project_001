#include<stdio.h>
#include<string.h>

const char korisnik1[] = "Aleksandar Aleksic";
<<<<<<< HEAD
const char korisnik2[] = "Bojan Bojanic";
=======
const char korisnik2[] = "Bojan Bojanic"
>>>>>>> 4fa1a9bfd1c64295d7f0ebeb4df3a7fca60f9a9b

typedef struct
{
	char brojTelefona[15];
	char *korisnik;
	struct lista *next;

}lista;


lista prvi;
lista drugi;

void popuniListu(void)
{
	strcpy(prvi.brojTelefona, "064/888-11-11");
	prvi.korisnik = korisnik1;
	prvi.next = &drugi;

	strcpy(drugi.brojTelefona, "064/888-11-12");
	drugi.korisnik = korisnik2;
	drugi.next = NULL;

	printf("Korisnik %s ima sledeci broj telefona: %s\n", prvi.korisnik , prvi.brojTelefona);
	printf("Korisnik %s ima sledeci broj telefona: %s\n", drugi.korisnik , drugi.brojTelefona);
}

void main()
{

	popuniListu();
}

