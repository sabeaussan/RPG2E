#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

#include "../include/Joueur.h"



void affiche_UI(Joueur joueur_1,Joueur joueur_2,int nbTour);
void UI_attaque(Joueur joueur);
string convertEnergieToUI(int nbPointDenergie);
string convertPdvToUI(int nbPointDeVie);
void animation();



#endif // UI_H_INCLUDED
