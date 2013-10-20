#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/*Konstruktor*/
Knoten::Knoten(int _data){

	data = _data;
	left = NULL;
	right = NULL;

}

/* Methode zum Erstellen neuer Baumknoten */
Knoten* Knoten::NeuerKnoten(int data){

	Knoten* knoten = new Knoten(data);

	/* neuen Knoten zurueckgeben */
	return knoten;
}

/* Datenelement einsortieren */
void Knoten::Einfueg( Knoten **w, int data){

    if( *w == NULL){
        /* hier einfuegen */
        *w = NeuerKnoten( data);
        return;
    }

    if( (*w)->data > data ){
        /* in linken Teilbaum einfuegen*/
        Einfueg( &(*w)->left, data);
    } 
    else{
        /* in rechten Teilbaum einfueg.*/
        Einfueg( &(*w)->right, data);
    }
}

void Knoten::PrintBaum(Knoten *wurzel){

	if (wurzel == NULL) return;

	PrintBaum(wurzel->left);
	printf(" %5d\n", wurzel->data);
	PrintBaum(wurzel->right);
}

/* Testprogramm für Binaerbaum */
int main(){
	
	Knoten *wurzel = NULL;
    int     i, n = 8;
    int     a[] = {7,8,3,5,17,2,10,11};

    /* Elemente a[i] sortiert in 
       den Baum einfuegen */       
    for( i=0; i<n; i++){
		(*wurzel).Einfueg(&wurzel, a[i]);
    }

    /* sortierte Liste ausgeben */
	(*wurzel).PrintBaum(wurzel);

	while(1){;} /* Endlosschleife */
}

