/**
Harjoitus 15 (Palautus vko 45)

T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!

Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
pitk�n merkkijonon (ei v�lily�ntej�).
a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
(tulostus tyyppi� "cout << mjono1[4];" jne)
b) Ohjelma k��nt�� annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n�yt�lle
(tulostus tyyppi� "cout << mjono2;")
c) merkkijono voi olla kuinka pitk�
tahansa (max 100 kirjainta).
Sy�tetyn merkkijonon pituutta ei saa
laskea mill��n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k�ytt�j�lle.
V�lily�nnit jonossa ovat sallittuja.

K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA
*/

#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char input[17];

	cout<<"Anna 17-merkkinen merkkijono:"<<endl;
	cin.get(input, 17);

	
	cout<<"A)"<<endl;
	for(int i=16;1>0,i--;){
	cout<<input[i];

}
	char jono[17];
	strcpy_s(jono,input);
	cout<<"B)"<<endl;
	cout<<jono<<endl;

	char input2[100];
	cout<<"C)"<<endl;
	cout<<"Anna jokin merkkijono"<<endl;
	cin>>input2>>ws; 
}