#include<stdlib.h>
#include<stdio.h>
#include "conio2.h"
#include<windows.h>
#include"graphisme.h"
typedef char* chaine ;
 typedef struct maillonT maillonT;
            struct maillonT
                {
                    float val;
                    maillonT* suiv;
                    int col;
                };
        typedef struct Tab Tab;
            struct Tab
                {
                    int taille;
                    maillonT* tete;
                };

//debut d'affichage
void entete ()
{
    esi(0,0);//slogan de esi
    esi(105,0);
    textcolor(LIGHTGREEN);
    gotoxy(57,4);
    char j[]="REPUBLIQUE ALGERIENNE DEMOCRATIQUE ET POPULAIRE";
    writeCh(j,20);
    gotoxy(61,7);
    char k[]="ECOLE SUPERIEURE D'INFORMATIQUE (ESI)\n";
    writeCh(k,20);
    gotoxy(wherex()-2,wherey()-7);
    bienvenu1();
    gotoxy(60,40);
    textattr(207);
    printf("TP 01 : ________'MATRICE CREUSE'_________ ");
    gotoxy(60,35);
    textcolor(WHITE);
}
void realisateurs ()//affiche les information des realisateurs
{
    esi(47,10);//esi
    Merci(40,20);//dessin de merci
    Merci(80,20);
    gotoxy(30,37);
    printf("REALISER PAR:");
    gotoxy(35,39);
    printf("*** GATTAL Abd_Erraouf ");
    gotoxy(40,41);
    printf( "*** Afraoucene Chakib");
    gotoxy(45,43);
    printf("SECTION B   |   GROUPE 6");
    gotoxy(50,45);
    printf("ENCADRE PAR:");
    gotoxy(55,47);
    printf("Mme CHARABI LEILA");
    gotoxy(68,52);
    printf("ANNEE UNIVERSITAIRE : 2015/2016\n");
}
/********___l'écriture ___**/
void writeCh(char ch[],int temps) // Ecrit une chaine de caractere avec un temps d'arret entre chaque caractere
{
    int i;
    for (i=0 ; i < strlen(ch); i++)
    {
        printf("%c",ch[i]);
        Sleep(temps);
    }
}
//dessine de mot menu
void dessine_menu (int x , int y) // Dessine le mot menu à partir du point M(x,y) de la console
{
textcolor(LIGHTGREEN);
 gotoxy(x,y);
 printf("%c%c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+1);
 printf("%c%c%c%c%c%c %c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c    %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+2);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c        %c%c%c%c%c%c   %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+3);
 printf("%c%c%c  %c%c%c  %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c %c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+4);
 printf("%c%c%c   %c   %c%c%c   %c%c%c        %c%c%c%c  %c%c%c%c%c%c%c   %c%c%c   %c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+5);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c    %c%c%c%c%c   %c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219); gotoxy(x,y+6);
 printf("%c%c%c       %c%c%c   %c%c%c%c%c%c%c%c   %c%c%c%c     %c%c%c%c    %c%c%c%c%c%c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
 textcolor(WHITE);
}

//dessine de mot MERCI
void Merci(int x,int y)
{
    textcolor(LIGHTBLUE);
    gotoxy(x,y);
    printf("###   ###                   #\n ");
    gotoxy(x,y+1);
    printf(" ##   ##\n");
    gotoxy(x,y+2);
    printf(" ###  ##\n");
    gotoxy(x,y+3);
    printf(" # # # #   ###  ####  #### ## \n");
    gotoxy(x,y+4);
    printf(" # # # #  #   #  # # #   #  #\n");
    gotoxy(x,y+5);
    printf(" #  #  #  #####  #   #      #\n");
    gotoxy(x,y+6);
    printf(" #  #  #  #      #   ##     #\n");
    gotoxy(x,y+7);
    printf("###   ###  #### ###   #### ###\n");
    textcolor(WHITE);
}
void esi(int d,int c)//dessine le symbole de l'esi
{
    int i;
    textcolor(255);
    gotoxy(d+20,2+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,2+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,2+c);
    textcolor(17);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,3+c);
    textcolor(255);
    printf("%c",219);
    gotoxy(d+28,3+c);
    printf("%c",219);
    gotoxy(d+20,4+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,4+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,4+c);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,5+c);
    printf("%c",219);
    gotoxy(d+33,5+c);
    printf("%c",219);
    gotoxy(d+36,5+c);
    printf("%c%c%c",219,219,219);
    gotoxy(d+20,6+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+28,6+c);
    printf("%c%c%c%c%c%c",219,219,219,219,219,219);
    gotoxy(d+36,6+c);
    printf("%c%c%c",219,219,219);
    printf("\n\n\n");
}
void bienvenu1()//dessine bienvenue
          {
                textcolor(YELLOW);
                Sleep(60);
                cputsxy(5,16, "@@@@                @@@@                                                                                                                                    \n");
                Sleep(60);
                cputsxy(5,17, "@@@@                @@@@                                                                                                                                    \n");Sleep(60);
                cputsxy(5,18, "@@@@                                                                                                                                                        \n");Sleep(60);
                cputsxy(5,19, "@@@@                                                                                                                                                        \n");Sleep(60);
                cputsxy(5,20, "@@@@  @@@@@@@@      @@@@        @@@@@@@@      @@@@  @@@@@@@@    @@@@        @@@@      @@@@@@@@      @@@@  @@@@@@@@      @@@@        @@@@        @@@@@@@@    \n");Sleep(60);
                cputsxy(5,21, "@@@@@@      @@@@    @@@@      @@@@    @@@@    @@@@@@    @@@@@@  @@@@        @@@@    @@@@    @@@@    @@@@@@    @@@@@@    @@@@        @@@@      @@@@    @@@@  \n");Sleep(60);
                cputsxy(5,22, "@@@@          @@@@  @@@@    @@@@        @@@@  @@@@        @@@@    @@@@    @@@@    @@@@        @@@@  @@@@        @@@@    @@@@        @@@@    @@@@        @@@@\n");Sleep(60);
                cputsxy(5,23,"@@@@          @@@@  @@@@    @@@@        @@@@  @@@@        @@@@    @@@@    @@@@    @@@@        @@@@  @@@@        @@@@    @@@@        @@@@    @@@@        @@@@\n");Sleep(60);
                cputsxy(5,24, "@@@@          @@@@  @@@@    @@@@@@@@@@@@@@@@  @@@@        @@@@    @@@@    @@@@    @@@@@@@@@@@@@@@@  @@@@        @@@@    @@@@        @@@@    @@@@@@@@@@@@@@@@\n");Sleep(60);
                cputsxy(5,25,  "@@@@          @@@@  @@@@    @@@@              @@@@        @@@@      @@    @@      @@@@              @@@@        @@@@    @@@@        @@@@    @@@@            \n");Sleep(60);
                cputsxy(5,26, "@@@@          @@@@  @@@@    @@@@              @@@@        @@@@      @@@@@@@@      @@@@              @@@@        @@@@    @@@@        @@@@    @@@@            \n");Sleep(60);
                cputsxy(5,27, "@@@@@@      @@@@    @@@@      @@@@      @@    @@@@        @@@@      @@@@@@@@        @@@@      @@    @@@@        @@@@    @@@@@@    @@@@@@      @@@@      @@  \n");Sleep(60);
                cputsxy(5,28,  "@@@@  @@@@@@@@      @@@@        @@@@@@@@      @@@@        @@@@        @@@@            @@@@@@@@      @@@@        @@@@      @@@@@@@@  @@@@        @@@@@@@@    \n");
                textcolor(WHITE);
          }
//la retour au menu principal
void retourMenu() // Affiche un message pour retourner au menu
{
    printf("APPUYEZ SUR N'IMPORTE QUELLE TOUCHE POUR RETOURNER AU MENU!\n");
    getch();
}
/****************************************************__les menus___**************************************************************/
void menu()//l'affichage et manupilation des menu
{
    float t[100][100],t1[100][100];
    Tab V1[100],V2[100],V3[100],V4[100],SOM[100],PROD[100],PRODS[100],INV[100],TRAN[100],ENREG1[100],ENREG2[100];//LES VECTEURS DES MATRICES CREUSES
    int MOVE=0;
    int lig1,lig2,lig3,lig4,ligP,col1,col2,col3,col4,ligN1,ligN2,colN1,colN2,tais=0,tait=0,taips=0,taiv=0;//LIGNES ET COLONNES DES MATRICES
    double SCAl;//LE SCALAIRE UTILISE DANS PRODUIT SCALAIRE
    float A[100][100],B[100][100],C[100][100],D[100][100],ENR1[100][100],ENR2[100][100];//LES MATRICES PLEINES
    int n;//NOMBRE DE MATRICE A CREE
    int choice,choix,prodm,affi,tran,prods,schoix,enregch,invch;//LES VARIABLES DES CHOIX
    restaur(t,&ligN1,&colN1);//restauration des matrice deja sauvgarder
    ConstmatC(t,ligN1,colN1,ENREG1);
    restaur2(t1,&ligN2,&colN2);
    ConstmatC(t1,ligN2,colN2,ENREG2);
    do
    {
        system("mode con LINES=520 COLS=164");
        entete();
        choice=menu_affichage();
        switch(choice)
        {
        case 1: //INFORMATIONS DES REALISATEURS
            system("mode con LINES=520 COLS=164");//CHANGEMENT DES DIMENSIONS
            realisateurs();
            gotoxy(100,55);
            retourMenu();
            system("cls");
            break;
        case 2://MANIPULATION DES MATRICES
        do
        {
            system("mode con LINES=300 COLS=100");//CHANGEMENT DES DIMENSIONS
            choix=menu_manp();
            switch(choix)
            {
            case 1://CREATION DES MATRICES
                do
                {
                    gotoxy(wherex(),15);
                    printf("Combien de matrice vous voulez construit(4 au Plus) ou taper 0 pour retourne au menu :");
                    scanf("%d",&n);
                }while((n<0)||(n>4));
                if (n==0)//RETOURNE AU MENU PRINCIPALE
                {
                    system("cls");
                }
                else if (n==1) //CREE UNE MATRICE
                {
                    printf("la matrice A:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig1);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col1);
                    lect2d(A,lig1,col1);
                    ConstmatC(A,lig1,col1,V1);
                    writeCh("la matrice a ete cree avec succe.......\n",20);
                    gotoxy(40,55);
                    retourMenu();
                    system("cls");
                }
                else if(n==2)//cree deux matrices
                {
                    printf("la matrice A:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig1);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col1);
                    lect2d(A,lig1,col1);
                    ConstmatC(A,lig1,col1,V1);
                    system("cls");
                    printf("la matrice B:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig2);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col2);
                    lect2d(B,lig2,col2);
                    ConstmatC(B,lig2,col2,V2);
                    writeCh("les matrices ont ete cree avec succe.......\n",20);
                    gotoxy(40,55);
                    retourMenu();
                    system("cls");
                }
                else if(n==3)//creation de 3 matrices
                {
                    printf("la matrice A:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig1);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col1);
                    lect2d(A,lig1,col1);
                    ConstmatC(A,lig1,col1,V1);
                    system("cls");
                    printf("la matrice B:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig2);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col2);
                    lect2d(B,lig2,col2);
                    ConstmatC(B,lig2,col2,V2);
                    system("cls");
                    printf("la matrice C:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig3);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col3);
                    lect2d(C,lig3,col3);
                    ConstmatC(C,lig3,col3,V3);
                    writeCh("les matrices ont ete cree avec succe.......\n",20);
                    gotoxy(40,55);
                    retourMenu();
                    system("cls");
                }
                else if(n==4)//creation de 4 matrices
                {
                    printf("la matrice A:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig1);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col1);
                    lect2d(A,lig1,col1);
                    ConstmatC(A,lig1,col1,V1);
                    system("cls");
                    printf("la matrice B:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig2);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col2);
                    lect2d(B,lig2,col2);
                    ConstmatC(B,lig2,col2,V2);
                    system("cls");
                    printf("la matrice C:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig3);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col3);
                    lect2d(C,lig3,col3);
                    ConstmatC(C,lig3,col3,V3);
                    system("cls");
                    printf("la matrice D:\n");
                    printf("\n entrer le nombre de ligne de votre matrice:");
                    scanf("%d",&lig4);
                    printf("\n entrer le nombre de colonne de votre matrice:");
                    scanf("%d",&col4);
                    lect2d(D,lig4,col4);
                    ConstmatC(D,lig4,col4,V4);
                    writeCh("les matrices ont ete cree avec succe.......\n",20);
                    gotoxy(40,55);
                    retourMenu();
                    system("cls");
                }
                break;

                case 2://affichage
                    do
                    {
                        affi=menu_AFFIC();
                        switch(affi)
                        {
                        case 1://afficher la matrice A
                            if(lig1!=0)
                            {
                                printf("la matrice A:\n");
                                if(maxtai1(V1,lig1)<=5) affich(V1,lig1);
                                else affichage(V1,lig1);
                            }
                            else if(lig1==0)
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 2://afficher la matrice B
                            if(lig2!=0)
                            {
                                printf("la matrice B:\n");
                                if(maxtai1(V2,lig2)<=5) affich(V2,lig2);
                                else affichage(V2,lig2);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 3://afficher la matrice C
                            if(lig3!=0)
                            {
                                printf("la matrice C:\n");
                                if(maxtai1(V3,lig3)<=5) affich(V3,lig3);
                                else affichage(V3,lig3);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 4://afficher la matrice D
                            if(lig4!=0)
                            {
                                printf("la matrice D:\n");
                                if(maxtai1(V4,lig4)<=5) affich(V4,lig4);
                                else affichage(V4,lig4);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 5://afficher la matrice ENREG1
                            if(ligN1!=0)
                            {
                                printf("la matrice ENREG1:\n");
                                if(maxtai1(ENREG1,ligN1)<=5) affich(ENREG1,ligN1);
                                else affichage(ENREG1,ligN1);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 6://afficher la matrice ENREG2
                            if(ligN2!=0)
                            {
                                printf("la matrice ENREG2:\n");
                                if(maxtai1(ENREG2,ligN2)<=5) affich(ENREG2,ligN2);
                                else affichage(ENREG2,ligN2);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 7://afficher la matrice SOM
                            if(tais!=0)
                            {
                                printf("la matrice SOM:\n");
                                if(maxtai1(SOM,tais)<=5) affich(SOM,tais);
                                else affichage(SOM,tais);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 8://afficher la matrice PRODS
                            if(taips!=0)
                            {
                                printf("la matrice PRODS:\n");
                                if(maxtai1(PRODS,taips)<=5) affich(PRODS,taips);
                                else affichage(PRODS,taips);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 9://afficher la matrice PROD
                            if(ligP!=0)
                            {
                                printf("la matrice PROD:\n");
                                if(maxtai1(PROD,ligP)<=5) affich(PROD,ligP);
                                else affichage(PROD,ligP);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 10://afficher la matrice TRANS
                            if(tait!=0)
                            {
                                printf("la matrice transpose:\n");
                                if(maxtai1(TRAN,tait)<=5) affich(TRAN,tait);
                                else affichage(TRAN,tait);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 11://afficher la matrice INV
                            if(taiv!=0)
                            {
                                printf("la matrice inverse:\n");
                                if(maxtai1(INV,taiv)<=5) affich(INV,taiv);
                                else affichage(INV,taiv);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 12://sort de la boucle et retour au menu
                            MOVE=1;
                        break;

                        }
                    }while(MOVE!=1);
                break;
                case 3://SOMME
                    do
                    {
                        schoix=menu_SOM();
                        switch(schoix)
                        {
                            case 1://A+A
                                if (lig1!=0)
                                {
                                    sommematc(V1,lig1,V1,lig1,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 2://A+B
                                if (lig1!=0&&lig2!=0)
                                {
                                    sommematc(V1,lig1,V2,lig2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 3://A+C
                                if (lig1!=0&&lig3!=0)
                                {
                                    sommematc(V1,lig1,V3,lig3,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 4://A+D
                                if (lig1!=0&&lig4!=0)
                                {
                                    sommematc(V1,lig1,V4,lig4,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 5://A+ENREG1
                                if (lig1!=0&&ligN1)
                                {
                                    sommematc(V1,lig1,ENREG1,ligN1,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 6://A+ENREG2
                                if (lig1!=0&&ligN2!=0)
                                {
                                    sommematc(V1,lig1,ENREG2,ligN2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 7://B+B
                                if (lig2!=0)
                                {
                                    sommematc(V2,lig2,V2,lig2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 8://B+C
                                if (lig2!=0&&lig3!=0)
                                {
                                    sommematc(V2,lig2,V3,lig3,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 9://B+D
                                if (lig2!=0&&lig4!=0)
                                {
                                    sommematc(V2,lig2,V4,lig4,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 10://B+ENREG1
                                if (lig2!=0&&ligN1)
                                {
                                    sommematc(V2,lig2,ENREG1,ligN1,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 11://B+ENREG2
                                if (lig2!=0&&ligN2!=0)
                                {
                                    sommematc(V2,lig2,ENREG2,ligN2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 12://C+C
                                if (lig3!=0)
                                {
                                    sommematc(V3,lig3,V3,lig3,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 13://C+D
                                if (lig3!=0&&lig4!=0)
                                {
                                    sommematc(V3,lig3,V4,lig4,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 14://C+ENREG1
                                if (lig3!=0&&ligN1)
                                {
                                    sommematc(V3,lig3,ENREG1,ligN1,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 15://C+ENREG2
                                if (lig3!=0&&ligN2!=0)
                                {
                                    sommematc(V3,lig3,ENREG2,ligN2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 16://D+D
                                if (lig4!=0)
                                {
                                    sommematc(V4,lig4,V4,lig4,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 17://D+ENREG1
                                if (lig4!=0&&ligN1)
                                {
                                    sommematc(V4,lig4,ENREG1,ligN1,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 18://D+ENREG2
                                if (lig4!=0&&ligN2!=0)
                                {
                                    sommematc(V4,lig4,ENREG2,ligN2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 19://ENREG1+ENREG2
                                if (ligN1!=0&&ligN2!=0)
                                {
                                    sommematc(ENREG1,ligN1,ENREG2,ligN2,SOM,&tais);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree les deux matrice pour pouvoir les sommer...\n ");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 20://RETOUR AU MENU
                                MOVE=2;
                            break;
                        }
                    }while(MOVE!=2);
                    break;
                case 4://PRODUIT SCALAIRE D'UN MATRICE
                    do
                    {
                        prods=menu_PRODS();
                        switch(prods)
                        {
                            case 1://VAL*A
                                if(lig1!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(V1,lig1,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 2://VAL*B
                                if(lig2!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(V2,lig2,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 3://VAL*C
                                if(lig3!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(V3,lig3,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 4://VAL*D
                                if(lig4!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(V4,lig4,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 5://VAL*ENREG1
                                if(ligN1!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(ENREG1,ligN1,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 6://VAL*ENREG2
                                if(ligN2!=0)
                                {
                                    printf("entrer le scalaire svp :");
                                    scanf("%lf",&SCAl);
                                    prodscal(ENREG2,ligN2,SCAl,PRODS,&taips);
                                    writeCh("L'operation a ete faite ave succe.....",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 7://RETOUR AU MENU
                                MOVE=3;
                                break;
                            }
                    }while(MOVE!=3);
                    break;
                case 5://PRODUIT MATRICIELLE
                    do
                    {
                       prodm=menu_PRODM();
                       switch(prodm)
                       {
                       case 1://A*A
                        if (lig1!=0)
                        {
                            ProdMAT(V1,lig1,V1,lig1,PROD,&ligP);

                        }
                        else
                        {
                            gotoxy(40,10);
                            textcolor(LIGHTRED);
                            printf("il faut cree la matrice apres ...\n");
                            textcolor(WHITE);
                        }
                        gotoxy(100,55);
                        retourMenu();
                        system("cls");
                        break;
                       case 2://A*B
                            if (lig1!=0&&lig2!=0)
                            {
                                ProdMAT(V1,lig1,V2,lig2,PROD,&ligP);

                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 3://A*C
                            if (lig1!=0&&lig3!=0)
                            {
                                ProdMAT(V1,lig1,V3,lig3,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 4://A*D
                            if (lig1!=0&&lig4!=0)
                            {
                                ProdMAT(V1,lig1,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 5://A*ENREG1
                            if (lig1!=0&&ligN1!=0)
                            {
                                ProdMAT(V1,lig1,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 6://A*ENREG2
                            if (lig1!=0&&ligN2!=0)
                            {
                                ProdMAT(V1,lig1,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 7://B*A
                           if (lig1!=0&&lig2!=0)
                            {
                                ProdMAT(V2,lig2,V1,lig1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 8://B*B
                            if (lig2!=0)
                            {
                                ProdMAT(V2,lig2,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 9://B*C
                            if (lig2!=0&&lig3!=0)
                            {
                                ProdMAT(V2,lig2,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 10://B*D
                            if (lig4!=0&&lig2!=0)
                            {
                                ProdMAT(V2,lig2,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 11://B*ENREG1
                            if (lig2!=0&&ligN1!=0)
                            {
                                ProdMAT(V2,lig2,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 12://B*ENREG2
                            if (lig2!=0&&ligN2!=0)
                            {
                                ProdMAT(V2,lig2,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 13://C*A
                            if (lig1!=0&&lig3!=0)
                            {
                                ProdMAT(V3,lig3,V1,lig1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 14://C*B
                            if (lig3!=0&&lig2!=0)
                            {
                                ProdMAT(V3,lig3,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 15://C*C
                            if (lig3!=0&&lig3!=0)
                            {
                                ProdMAT(V3,lig3,V3,lig3,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 16://C*D
                            if (lig4!=0&&lig3!=0)
                            {
                                ProdMAT(V3,lig3,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 17://C*ENREG1
                            if (lig3!=0&&ligN1!=0)
                            {
                                ProdMAT(V3,lig3,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 18://C*ENREG2
                            if (lig3!=0&&ligN2!=0)
                            {
                                ProdMAT(V3,lig3,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 19://D*A
                            if (lig1!=0&&lig4!=0)
                            {
                                ProdMAT(V4,lig4,V1,lig1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 20://D*B
                            if (lig4!=0&&lig2!=0)
                            {
                                ProdMAT(V4,lig4,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 21://D*C
                            if (lig4!=0&&lig3!=0)
                            {
                                ProdMAT(V4,lig4,V3,lig3,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 22://D*D
                            if (lig4!=0&&lig4!=0)
                            {
                                ProdMAT(V4,lig4,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 23://D*ENREG1
                            if (lig4!=0&&ligN1!=0)
                            {
                                ProdMAT(V4,lig4,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 24://D*ENREG2
                            if (lig4!=0&&ligN2!=0)
                            {
                                ProdMAT(V4,lig4,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 25://ENREG1*A
                            if (lig1!=0&&ligN1!=0)
                            {
                                ProdMAT(ENREG1,ligN1,V1,lig1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 26://ENREG1*B
                            if (lig2!=0&&ligN1!=0)
                            {
                                ProdMAT(ENREG1,ligN1,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 27://ENREG1*C
                            if (lig3!=0&&ligN1!=0)
                            {
                                ProdMAT(ENREG1,ligN1,V3,lig3,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 28://ENREG1*D
                            if (lig4!=0&&ligN1!=0)
                            {
                                ProdMAT(ENREG1,ligN1,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 29://ENREG1*ENREG1
                            if (ligN1!=0)
                            {
                                ProdMAT(ENREG1,ligN1,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 30://ENREG1*ENREG2
                            if (ligN1!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG1,ligN1,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 31://ENREG2*A
                            if (lig1!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,V1,lig1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 32://ENREG2*B
                            if (lig2!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,V2,lig2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 33://ENREG2*C
                            if (lig3!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,V3,lig3,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 34://ENREG2*D
                            if (lig4!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,V4,lig4,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 35://ENREG2*ENREG1
                            if (ligN1!=0&&ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,ENREG1,ligN1,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 36://ENREG2*ENREG2
                            if (ligN2!=0)
                            {
                                ProdMAT(ENREG2,ligN2,ENREG2,ligN2,PROD,&ligP);
                            }
                            else
                            {
                                gotoxy(40,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice apres ...\n");
                                textcolor(WHITE);
                            }
                            gotoxy(100,55);
                            retourMenu();
                            system("cls");
                            break;
                       case 37://RETOUR AU MENU
                            MOVE=4;
                        break;
                       }
                    }while(MOVE!=4);
                    break;
                case 6://TRANSPOSE
                        do
                        {
                            tran=menu_TRANS();
                            switch(tran)
                            {
                            case 1://TRANSPOSE DE MATRICE A
                                if (lig1!=0)
                                {
                                    transpose(V1,lig1,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 2://TRANSPOSE DE MATRICE B
                                if (lig2!=0)
                                {
                                    transpose(V2,lig2,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 3://TRANSPOSE DE MATRICE C
                                if (lig3!=0)
                                {
                                    transpose(V3,lig3,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 4://TRANSPOSE DE MATRICE D
                                if (lig4!=0)
                                {
                                    transpose(V4,lig4,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 5://TRANSPOSE DE MATRICE ENREG1
                                if (ligN1!=0)
                                {
                                    transpose(ENREG1,ligN1,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 6://TRANSPOSE DE MATRICE ENREG2
                                if (ligN2!=0)
                                {
                                    transpose(ENREG2,ligN2,TRAN,&tait);
                                    writeCh("le transpose a ete calcule avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 7://RETOUR AU MENU
                                MOVE=5;
                            break;
                            }
                           }while(MOVE!=5);
                    break;
                case 7://inverse
                     do
                     {
                         invch=menu_INV();
                         switch(invch)
                            {
                            case 1://L'INVERSE DE MATRICE A
                                if (lig1!=0)
                                {
                                    inv(V1,lig1,INV,&taiv);
                                    if (taiv!=0) writeCh("l'inverse a ete calculee avec succe.......\n",20);

                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 2://L'INVERSE DE MATRICE B
                                if (lig2!=0)
                                {
                                    inv(V2,lig2,INV,&taiv);
                                    if (taiv!=0) writeCh("l'inverse a ete calculee avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 3://L'INVERSE DE MATRICE C
                                if (lig3!=0)
                                {
                                    inv(V3,lig3,INV,&taiv);
                                    if (taiv!=0)writeCh("l'inverse a ete calculee avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 4://L'INVERSE DE MATRICE D
                                if (lig4!=0)
                                {
                                    inv(V4,lig4,INV,&taiv);
                                    if (taiv!=0)writeCh("l'inverse a ete calculee avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 5://L'INVERSE DE MATRICE ENREG1
                                if (ligN1!=0)
                                {
                                    inv(ENREG1,ligN1,INV,&taiv);
                                    if (taiv!=0)writeCh("l'inverse a ete calculee avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 6://L'INVERSE DE MATRICE ENREG2
                                if (ligN2!=0)
                                {
                                    inv(ENREG2,ligN2,INV,&taiv);
                                    if (taiv!=0)writeCh("l'inverse a ete calculee avec succe.......\n",20);
                                }
                                else
                                {
                                    gotoxy(20,10);
                                    textcolor(LIGHTRED);
                                    printf("il faut cree la matrice apres ...\n");
                                    textcolor(WHITE);
                                }
                                gotoxy(40,55);
                                retourMenu();
                                system("cls");
                                break;
                            case 7://RETOUR AU MENU
                                MOVE=7;
                            break;
                            }
                           }while(MOVE!=7);
                    break;
                    case 8://sauvgarder
                       do
                       {
                           enregch=menu_ENREG();
                           switch(enregch)
                           {
                           case 1://ENREGISTRER A DANS ENREG1
                            if(lig1!=0)
                            {
                                sauv(V1,lig1);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else if(lig1==0)
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 2://ENREGISTRER A DANS ENREG2
                            if(lig1!=0)
                            {
                                sauv2(V1,lig1);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else if(lig1==0)
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 3://ENREGISTRER B DANS ENREG1
                            if(lig2!=0)
                            {
                                sauv(V2,lig2);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 4://ENREGISTRER B DANS ENREG2
                            if(lig2!=0)
                            {
                                sauv2(V2,lig2);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 5://ENREGISTRER C DANS ENREG1
                            if(lig3!=0)
                            {
                                sauv(V3,lig3);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 6://ENREGISTRER C DANS ENREG2
                            if(lig3!=0)
                            {
                                sauv2(V3,lig3);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 7://ENREGISTRER D DANS ENREG1
                            if(lig4!=0)
                            {
                                sauv(V4,lig4);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 8://ENREGISTRER D DANS ENREG2
                            if(lig4!=0)
                            {
                                sauv2(V4,lig4);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la sauvgarder...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 9://ENREGISTRER SOM DANS ENREG1
                            if(tais!=0)
                            {
                                sauv(SOM,tais);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 10://ENREGISTRER SOM DANS ENREG2
                            if(tais!=0)
                            {
                                sauv2(SOM,tais);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 11://ENREGISTRER PROD DANS ENREG1
                            if(ligP!=0)
                            {
                                sauv(PROD,ligP);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 12://ENREGISTRER PROD DANS ENREG2
                            if(ligP!=0)
                            {
                                sauv(PROD,ligP);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 13://ENREGISTRER PRODS DANS ENREG2
                            if(taips!=0)
                            {
                                sauv(PRODS,taips);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                         case 14://ENREGISTRER PRODS DANS ENREG1
                            if(taips!=0)
                            {
                                sauv2(PRODS,taips);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 15://ENREGISTRER TRANS DANS ENREG1
                            if(tait!=0)
                            {
                                sauv(TRAN,tait);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 16://ENREGISTRER TRANS DANS ENREG2
                            if(tait!=0)
                            {
                                sauv2(TRAN,tait);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 17://ENREGISTRER INV DANS ENREG1
                            if(taiv!=0)
                            {
                                sauv(INV,taiv);
                                restaur(ENR1,&ligN1,&colN1);
                                ConstmatC(ENR1,ligN1,colN1,ENREG1);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 18://ENREGISTRER INV DANS ENREG2
                            if(taiv!=0)
                            {
                                sauv2(INV,taiv);
                                restaur2(ENR2,&ligN2,&colN2);
                                ConstmatC(ENR2,ligN2,colN2,ENREG2);
                                writeCh("L'operation a ete faite ave succe.....",20);
                            }
                            else
                            {
                                gotoxy(20,10);
                                textcolor(LIGHTRED);
                                printf("il faut cree la matrice pour pouvoir la afficher...\n ");
                                textcolor(WHITE);
                            }
                            gotoxy(40,55);
                            retourMenu();
                            system("cls");
                            break;
                        case 19://RETOUR AU MENU
                            MOVE=8;
                        break;

                        }
                    }while(MOVE!=8);
                    break;
                    case 9://quitter
                        MOVE=9;
                    break;
                }
            }while(MOVE!=9);
            break;
        case 3:
            equ_lin();
            retourMenu();
            system("cls");
            break;

        case 4:
            comple();
            retourMenu();
            system("cls");
            break;

        case 5://QUITTER
            MOVE=10;
        break;
        }
    }while(MOVE!=10);
}
int menu_affichage () //Affiche le menu d'affichage et donne le choix de l'utilisateur
{
    chaine t [] = {  "1-  AFFICHER LES INFORMATIONS DES REALISATEURS                                ",
                     "2-  MANIPULER LES MATRICES CREUSES                                            ",
                     "3-  RESOLU LES SYSTEMS D'EQUATIONS LINEAIRES                                  ",
                     "4-  AFFICHER LES COMPLEXITE DES ALGORITHMES                                   ",
                     "5-  QUITTER                                                                   ",
                  };
    int  n = 5 ; // TAILLE DU TABLEAU DE CHAINE
    int i  , quite = 1, y = 30 , x= 53 ;
    char c1,c2;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_manp() // Affiche le menu principal et donne le choix de l'utilisateur
{

    chaine t [] = {  "1-  CREER UNE MATRICE CREUSE                               ",
                     "2-  AFFICHER                                               ",
                     "3-  SOMMER DEUX MATRICE CREUSE                             ",
                     "4-  LE PRODUIT SCALAIRE D'UN MATRICE CREUSE                ",
                     "5-  LE PRODUIT MATRICIELLE ENTRE DEUX MATRICE CREUSE       ",
                     "6-  CALCULER LE TRANSPOSE D'UNE MATRICE CREUSE             ",
                     "7-  INVERSER UN MATRICE CREUSE                             ",
                     "8-  SAUVGARDER UN MATRICE                                  ",
                     "9-  QUITTER                                                ",
                  };
    dessine_menu(20,15);
    int  n = 9 ; // TAILLE DU TABLEAU DE CHAINE
    int i ,quite = 1, y = 25 , x= 20 ;
    char c1,c2 ;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;

}
int menu_PRODM () //Affiche le menu de produit matricielle et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- LE PRODUIT MATRICIELLE A*A                                 ",
                     "2- LE PRODUIT MATRICIELLE A*B                                 ",
                     "3- LE PRODUIT MATRICIELLE A*C                                 ",
                     "4- LE PRODUIT MATRICIELLE A*D                                 ",
                     "5- LE PRODUIT MATRICIELLE A*ENREG1                            ",
                     "6- LE PRODUIT MATRICIELLE A*ENREG2                            ",
                     "7- LE PRODUIT MATRICIELLE B*A                                 ",
                     "8- LE PRODUIT MATRICIELLE B*B                                 ",
                     "9- LE PRODUIT MATRICIELLE B*C                                 ",
                     "10- LE PRODUIT MATRICIELLE B*D                                ",
                     "11- LE PRODUIT MATRICIELLE B*ENREG1                           ",
                     "12- LE PRODUIT MATRICIELLE B*ENREG2                           ",
                     "13- LE PRODUIT MATRICIELLE C*A                                ",
                     "14- LE PRODUIT MATRICIELLE C*B                                ",
                     "15- LE PRODUIT MATRICIELLE C*C                                ",
                     "16- LE PRODUIT MATRICIELLE C*D                                ",
                     "17- LE PRODUIT MATRICIELLE C*ENREG1                           ",
                     "18- LE PRODUIT MATRICIELLE C*ENREG2                           ",
                     "19- LE PRODUIT MATRICIELLE D*A                                ",
                     "20- LE PRODUIT MATRICIELLE D*B                                ",
                     "21- LE PRODUIT MATRICIELLE D*C                                ",
                     "22- LE PRODUIT MATRICIELLE D*D                                ",
                     "23- LE PRODUIT MATRICIELLE D*ENREG1                           ",
                     "24- LE PRODUIT MATRICIELLE D*ENREG2                           ",
                     "25- LE PRODUIT MATRICIELLE ENREG1*A                           ",
                     "26- LE PRODUIT MATRICIELLE ENREG1*B                           ",
                     "27- LE PRODUIT MATRICIELLE ENREG1*C                           ",
                     "28- LE PRODUIT MATRICIELLE ENREG1*D                           ",
                     "29- LE PRODUIT MATRICIELLE ENREG1*ENREG1                      ",
                     "30- LE PRODUIT MATRICIELLE ENREG1*ENREG2                      ",
                     "31- LE PRODUIT MATRICIELLE ENREG2*A                           ",
                     "32- LE PRODUIT MATRICIELLE ENREG2*B                           ",
                     "33- LE PRODUIT MATRICIELLE ENREG2*C                           ",
                     "34- LE PRODUIT MATRICIELLE ENREG2*D                           ",
                     "35- LE PRODUIT MATRICIELLE ENREG2*ENREG1                      ",
                     "36- LE PRODUIT MATRICIELLE ENREG2*ENREG2                      ",
                     "37-  RETOUR AU MENU PRINCIPAL                                 ",
                  };
    int  n = 37 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 10 , x= 20 ;
    char c1,c2;
    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_AFFIC () //Affiche le menu d'affichage et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- AFFICHAGE DE MATRICE A                                       ",
                     "2- AFFICHAGE DE MATRICE B                                       ",
                     "3- AFFICHAGE DE MATRICE C                                       ",
                     "4- AFFICHAGE DE MATRICE D                                       ",
                     "5- AFFICHAGE DE MATRICE ENREG1                                  ",
                     "6- AFFICHAGE DE MATRICE ENREG2                                  ",
                     "7- AFFICHAGE DE MATRICE 'RESULTAT DE SOMME'                     ",
                     "8- AFFICHAGE DE MATRICE 'RESULTAT DE PRODUIT PAR UN SCALAIRE '  ",
                     "9- AFFICHAGE DE MATRICE 'RESULTAT DE PRODUIT MATRICIELLE'       ",
                     "10- AFFICHAGE DE MATRICE 'RESULTAT DE TRANSPOSE'                ",
                     "11- AFFICHAGE DE MATRICE INVERSE                                ",
                     "12- RETOUR AU MENU PRINCIPAL                                    ",
                  };
    int  n = 12 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 10 , x= 20 ;
    char c1,c2 ;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_TRANS () //Affiche le menu de transpose et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- TRANSPOSE DE MATRICE A                                ",
                     "2- TRANSPOSE DE MATRICE B                                ",
                     "3- TRANSPOSE DE MATRICE C                                ",
                     "4- TRANSPOSE DE MATRICE D                                ",
                     "5- TRANSPOSE DE MATRICE ENREG1                           ",
                     "6- TRANSPOSE DE MATRICE ENREG2                           ",
                     "7- RETOUR AU MENU PRINCIPAL                              ",
                  };
    int  n = 7 ; // TAILLE DU TABLEAU DE CHAINE
    int i ,quite = 1 , y = 10 , x= 20 ;
    char c1,c2 ;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_PRODS () //Affiche le menu de produit par un scalaire et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- PRODUIT SCALAIRE DE MATRICE A                                ",
                     "2- PRODUIT SCALAIRE DE MATRICE B                                ",
                     "3- PRODUIT SCALAIRE DE MATRICE C                                ",
                     "4- PRODUIT SCALAIRE DE MATRICE D                                ",
                     "5- PRODUIT SCALAIRE DE MATRICE ENREG1                           ",
                     "6- PRODUIT SCALAIRE DE MATRICE ENREG2                           ",
                     "7- RETOUR AU MENU PRINCIPAL                                     ",
                  };
    int  n = 7 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 10 , x= 20 ;
    char c1,c2;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_SOM () //Affiche le menu de somme et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- LA SOMME A+A                                ",
                     "2- LA SOMME A+B                                ",
                     "3- LA SOMME A+C                                ",
                     "4- LA SOMME A+D                                ",
                     "5- LA SOMME A+ENREG1                           ",
                     "6- LA SOMME A+ENREG2                           ",
                     "7- LA SOMME B+B                                ",
                     "8- LA SOMME B+C                                ",
                     "9- LA SOMME B+D                                ",
                     "10- LA SOMME B+ENREG1                          ",
                     "11- LA SOMME B+ENREG2                          ",
                     "12- LA SOMME C+C                               ",
                     "13- LA SOMME C+D                               ",
                     "14- LA SOMME C+ENREG1                          ",
                     "15- LA SOMME C+ENREG2                          ",
                     "16- LA SOMME D+D                               ",
                     "17- LA SOMME D+ENREG1                          ",
                     "18- LA SOMME D+ENREG2                          ",
                     "19- LA SOMME ENREG1+ENREG2                     ",
                     "20- RETOUR AU MENU PRINCIPAL                   ",
                  };
    int  n = 20 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 10 , x= 20 ;
    char c1,c2 ;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
int menu_ENREG() // Affiche le menu principal et donne le choix de l'utilisateur
{

    chaine t [] = {  "1-  SAUVGARDER LA MATRICE A DANS ENREG1                                   ",
                     "2-  SAUVGARDER LA MATRICE A DANS ENREG2                                   ",
                     "3-  SAUVGARDER LA MATRICE B DANS ENREG1                                   ",
                     "4-  SAUVGARDER LA MATRICE B DANS ENREG2                                   ",
                     "5-  SAUVGARDER LA MATRICE C DANS ENREG1                                   ",
                     "6-  SAUVGARDER LA MATRICE C DANS ENREG2                                   ",
                     "7-  SAUVGARDER LA MATRICE D DANS ENREG1                                   ",
                     "8-  SAUVGARDER LA MATRICE D DANS ENREG2                                   ",
                     "9-  SAUVGARDER LA MATRICE SOMME DANS ENREG1                               ",
                     "10-  SAUVGARDER LA MATRICE SOMME DANS ENREG2                              ",
                     "11-  SAUVGARDER LA MATRICE PRODUIT MATRICIELLE DANS ENREG1                ",
                     "12-  SAUVGARDER LA MATRICE PRODUIT MATRICIELLE DANS ENREG2                ",
                     "13-  SAUVGARDER LA MATRICE PRODUIT SCALAIRE DANS ENREG1                   ",
                     "14-  SAUVGARDER LA MATRICE PRODUIT SCALAIRE DANS ENREG2                   ",
                     "15-  SAUVGARDER LA MATRICE TRANSPOSE DANS ENREG1                          ",
                     "16-  SAUVGARDER LA MATRICE TRANSPOSE DANS ENREG2                          ",
                     "17-  SAUVGARDER LA MATRICE INVERSE DANS ENREG1                            ",
                     "18-  SAUVGARDER LA MATRICE INVERSE DANS ENREG2                            ",
                     "19-  RETOURNE AU MENU PRINCIPALE                                          ",
                  };
    int  n = 19 ; // TAILLE DU TABLEAU DE CHAINE
    int i , quite = 1, y = 10 , x= 20 ;
    char c1,c2;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;

}
int menu_INV () //Affiche le menu de l'inverse et donne le choix de l'utilisateur
{
    chaine t [] = {  "1- L'INVERSE DE MATRICE A                                ",
                     "2- L'INVERSE DE MATRICE B                                ",
                     "3- L'INVERSE DE MATRICE C                                ",
                     "4- L'INVERSE DE MATRICE D                                ",
                     "5- L'INVERSE DE MATRICE ENREG1                           ",
                     "6- L'INVERSE DE MATRICE ENREG2                           ",
                     "7- RETOUR AU MENU PRINCIPAL                              ",
                  };
    int  n = 7 ; // TAILLE DU TABLEAU DE CHAINE
    int i ,quite = 1 , y = 10 , x= 20 ;
    char c1,c2 ;

    textcolor(15);
    for( i = 0 ; i< n ; i++)
    {
        if (i==0) textbackground(2);
        else textbackground(0);
        gotoxy(x,y+i);
        printf("%s\n",t[i]);
    }
    i=0;
    while( quite)
    {
        c1 = getch();
        if( c1 == 13 ) quite =0 ;

        else if( c1 == -32 )
        {
            c2 = getch();
            if (c2 == 72 )
            {
                if(i > 0)
                {
                    gotoxy(x,i-1+y);
                    textbackground(3);
                    printf("%s\n",t[i-1]);
                    textbackground(0);
                    gotoxy(x,i+y);
                    printf("%s\n",t[i]);
                    i--;
                }
                else
                {
                    gotoxy(x,y+n-1);
                    textbackground(3);
                    printf("%s\n",t[n-1]);
                    gotoxy(x,y);
                    textbackground(0);
                    printf("%s\n",t[0]);
                    i=n-1;
                }
            }
            else if (c2 == 80)
            {
                if( i < n-1)
                {
                    gotoxy(x,y+i+1);
                    textbackground(4);
                    printf("%s\n",t[i+1]);
                    textbackground(0);
                    gotoxy(x,y+i);
                    printf("%s\n",t[i]);
                    i++;
                }
                else
                {
                    gotoxy(x,y);
                    textbackground(4);
                    printf("%s\n",t[0]);
                    gotoxy(x,y+i);
                    textbackground(0);
                    printf("%s\n",t[i]);
                    i=0 ;
                }
            }
        }
    }
    system("cls");
    return i+1;
}
