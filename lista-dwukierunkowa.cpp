#include <iostream>

using namespace std;

struct osoba
{
	string nazwisko;
	string imie;
	osoba* wsk_next;
	osoba* wsk_pre;
};

int main() {

	osoba* wsk;
	osoba o1, o2, o3, o4;

	wsk = &o1;

	(*wsk).imie = "imie1";
	(*wsk).nazwisko = "nazwisko1";
	(*wsk).wsk_next = &o2;
	(*wsk).wsk_pre = NULL;

	(*(*wsk).wsk_next).imie = "imie2";
	(*(*wsk).wsk_next).nazwisko = "nazwisko2";
	(*(*wsk).wsk_next).wsk_next = &o3;
	(*(*wsk).wsk_next).wsk_pre = &o1;

	(*(*(*wsk).wsk_next).wsk_next).imie = "imie3";
	(*(*(*wsk).wsk_next).wsk_next).nazwisko = "nazwisko3";
	(*(*(*wsk).wsk_next).wsk_next).wsk_next = &o4;
	(*(*(*wsk).wsk_next).wsk_next).wsk_next = &o2;

	(*(*(*(*wsk).wsk_next).wsk_next).wsk_next).imie = "imie4";
	(*(*(*(*wsk).wsk_next).wsk_next).wsk_next).nazwisko = "nazwisko4";
	(*(*(*(*wsk).wsk_next).wsk_next).wsk_next).wsk_pre = &o3;

	cout << wsk->wsk_next->wsk_pre->imie;

	return 0;
}
