
#ifndef MAIN_H
  #define MAIN_H /* zur Vermeidung von Mehrfachinklusion */


class Knoten{ // so koennte das in C++ aussehen
public:
    int data;       
    Knoten *left, *right; // Zeiger auf Knoten (*Name_des_Zeigers  Datentyp Zeiger auf Knoten

	// Konstruktor
	Knoten();			// Standart-Konstruktor
	Knoten(int data);

	// Destructor -  dem Destructor werden niemal Parameter uebergeben
	~Knoten();

	/* Konstruktor für Baumknoten */
	Knoten *NeuerKnoten(int data);

	/* Datenelement einsortieren */
	void Einfueg( Knoten **w, int data);

	/* Baumknoten “in-order“ ausgeben */
	void PrintBaum(Knoten *wurzel);

	/* alle Baumknoten löschen */
	void LoescheBaum(Knoten *wurzel);

	/* gibt die Baumhöhe aus*/
	void PrintBaumhöhe(int counter);
};

/* Testprogramm für Binaerbaum */
int main();

#endif /* MAIN_H */ 