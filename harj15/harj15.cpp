/**
Harjoitus 15 (Palautus vko 45)

TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
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