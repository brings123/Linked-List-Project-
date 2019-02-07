#ifndef GRAPHISME_H_INCLUDED
#define GRAPHISME_H_INCLUDED
#include<stdlib.h>
#include<stdio.h>
#include "conio2.h"
#include<windows.h>
typedef char* chaine ;


void entete ();//debut d'affichage
void realisateurs ();//les information sur les realisateurs
/********___l'écriture ___*******************************************************/
void writeCh(char ch[],int temps); // Ecrit une chaine de caractere avec un temps d'arret entre chaque caractere
void dessine_menu (int x , int y); // Dessine le mot menu à partir du point M(x,y) de la console
void esi(int d,int c);//dessine le symbole d'esi à partir du point M(x,y)
void bienvenu1();//dessine le mot bienvenu
void retourMenu(); // Affiche un message pour retourner au menu
/****************************************************__les menus___**************************************************************/
void menu();//le module qui gére la menu principale
int menu_affichage (); //Affiche le menu d'affichage et donne le choix de l'utilisateur
int menu_manp(); // Affiche le menu principal et donne le choix de l'utilisateur
int menu_PRODM (); //Affiche le menu de produit matricielle et donne le choix de l'utilisateur
int menu_AFFIC () ;//Affiche le menu d'affichage et donne le choix de l'utilisateur
int menu_TRANS (); //Affiche le menu de transpose et donne le choix de l'utilisateur
int menu_PRODS (); //Affiche le menu de produit par un scalaire et donne le choix de l'utilisateur
int menu_SOM (); //Affiche le menu de somme et donne le choix de l'utilisateur
int menu_ENREG(); // Affiche le menu principal et donne le choix de l'utilisateur
int menu_INV (); //Affiche le menu de l'inverse et donne le choix de l'utilisateur

#endif // GRAPHISME_H_INCLUDED
