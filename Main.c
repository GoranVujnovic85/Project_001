#include<stdio.h>
#include<string.h>

const char korisnik1[] = "Aleksandar Aleksic";
const char korisnik2[] = "Bojan Bojanic"

typedef struct
{
	char brojTelefona[15];
	char *korisnik;
	struct lista *next;

}lista;


lista prvi;

void popuniListu(void)
{
	strcpy(prvi.brojTelefona, "064/888-11-11");
	prvi.korisnik = korisnik1;
	prvi.next = NULL;

	printf("Korisnik %s ima sledeci broj telefona: %s\n", prvi.korisnik , prvi.brojTelefona);

}

void main()
{

	popuniListu();
}

