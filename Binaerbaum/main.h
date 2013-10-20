
#ifndef MAIN_H
  #define MAIN_H /* zur Vermeidung von Mehrfachinklusion */


class Knoten{ // so koennte das in C++ aussehen
public:
    int data;       
    Knoten *left, *right;

	// Konstruktor
	Knoten(int data);

	/* Konstruktor f�r Baumknoten */
	Knoten *NeuerKnoten(int data);

	/* Datenelement einsortieren */
	void Einfueg( Knoten **w, int data);

	/* Baumknoten �in-order� ausgeben */
	void PrintBaum(Knoten *wurzel);
};

/* Testprogramm f�r Binaerbaum */
int main();

#endif /* MAIN_H */ 