#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/*Konstruktor*/
Knoten::Knoten(int _data){ // c++ Notation zu der Klasse Knoten den Konstructor

	data = _data; 
	left = NULL;
	right = NULL;

}

/*Destruktor*/
Knoten::~Knoten(){
	

	if (this->left != NULL){
		delete this->left;
		printf("delete left, ");
	}

	
	if (this->right != NULL){
		delete this->right;
	printf("delete right, ");
	}

	
	

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

void Knoten::PrintBaumh�he(int counter){
	printf("Der Baum ist:%5d Elemente hoch!\n", counter);
}



/* Testprogramm f�r Binaerbaum */
int main(){
	int counter = 0;
	Knoten *wurzel = NULL;
    int     i, n = 8;
    int     a[] = {7,8,3,5,17,2,10,11};

    /* Elemente a[i] sortiert in 
       den Baum einfuegen */       
    for( i=0; i<n; i++){
		(*wurzel).Einfueg(&wurzel, a[i]);
		counter++;
		(*wurzel).PrintBaumh�he(counter);
    }

    /* sortierte Liste ausgeben */
	(*wurzel).PrintBaum(wurzel);

	/* l�schen des Baums*/
	
	delete wurzel;
	counter = 0;
	

	while(1){;} /* Endlosschleife */
}

