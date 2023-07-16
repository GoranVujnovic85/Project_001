#include<stdio.h>
#include<string.h>

const char korisnik1[] = "Aleksandar Aleksic";

const char korisnik2[] = "Bojan Bojanic";

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

	lista *ptr_list = &prvi;

	while(ptr_list != NULL)
	{

	printf("Korisnik %s ima sledeci broj telefona: %s\n", ptr_list->korisnik , ptr_list->brojTelefona);
	ptr_list = ptr_list->next;

	}
}

void main()
{

	popuniListu();
}

