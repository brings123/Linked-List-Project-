#ifndef MANP_MATC_H_INCLUDED
#define MANP_MATC_H_INCLUDED

/********************************************************************************************************************************
*******************************************_____DECLARATION DES STRUCTURES_____**************************************************
********************************************************************************************************************************/
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
/*********************************************************************************************************************************
******************************************____MACHINE LLC DE TP____***************************************************************
*********************************************************************************************************************************/
            void Allouer (maillonT* *nouveau);//allouer une nouvelle maillon
            void Aff_Val(maillonT *P, float v);//affecte une valeur dans une maillon
            void Aff_Adr(maillonT *P,maillonT *Q);// affecte l'adresse d'une maillon dans une autre maillon
            float Valeur(struct maillonT *P);//affiche la valeur enregistrer dans une maillon
            maillonT *Suivant(maillonT *P);// suivant d'un maillon
            void Liberer(maillonT**ancien);//liberer une maillon
            void Aff_col(maillonT *p,int colonne);//affecte le nombre de colonne dans une maillon
            int colonne(maillonT *P);//affiche la position(numéro de la colonne)
/*********************************************************************************************************************************/
/***************************************___CONSTRUIRE ET AFFICHAGE DE MATRICE CREUSE___*******************************************
**********************************************************************************************************************************/
            void ConstmatC(float MP[100][100],int lig,int col,Tab VC[100]);//le module qui construit les matrices creuses
            void affichage(Tab T[],int tai);//l'affichage d'une matrice creuse
            void affich(struct Tab *V,int tai);//le module utilisé si le nombre de colonne ne dépace pas 5 colonnes
/*********************************************************************************************************************************
****************************************___OPERATIONS SURLES MATRICES CREUSES___**************************************************
*********************************************************************************************************************************/
            void prodscal(Tab VC[],int tai,double scalaire,Tab R[],int*taip );//produit d'une matrice par un scalaire
            void sommematc(Tab V1[],int tai1,Tab V2[],int tai2,Tab R[],int*tai);//la somme des deux matrices creuses
            void transpose(Tab VC[],int tai1,Tab V[],int *tai2);//calcule le transposée d'une matrice
            void ProdMAT(Tab V1[],int tai1,Tab V2[],int tai2,Tab VR[],int *taiR);//le produit matricielle des 2 matrices
/*********************************************************************************************************************************
*************************************___SAUVGARDER ET RESTAURER UN MATRICE CREUSE___**********************************************
*********************************************************************************************************************************/
            void restaur(float T[100][100],int *lig,int *col);//RESTAURER UNE MATRICE A PARTIR D'UN FICHIER
            void restaur2(float T[100][100],int *lig,int *col);
            void sauv(Tab VC[],int tai);//SAUVGARDER UNE MATRICE DANS UNE FICHIER
            void sauv2(Tab VC[],int tai);
/*********************************************************************************************************************************
****************************************___resolution des equations linéaires___**************************************************
*********************************************************************************************************************************/
            float Detliste(Tab V[100]);//MODULE QUI CALCULE LE DEERMINANT D'UNE MATRICE 2x2 PAR LES LISTES
            float det(Tab V[100],int n,float *de);//MODULE QUI CALCULE LE DETERMINANT D'UNE MATRICE CARREE PAR LES LISTES
            void equ_lin();
            void inv (Tab V[100],int tai1,Tab VR[],int *tai2);
            void Mat_Inv(Tab V[],int tai,Tab Vi[]);//MODULE QUI CALCULE LA MATRICE INVERSE D'UNE MATRICE
            void ConstComat(Tab V[100],int tai,Tab Vc[100]);//MODULE QUI CONSTRUIT UNE COMATRICE D'UNE MATRICE
            void eff_col_lig(Tab V[100],int lig,int colm,Tab Vn[100],int tai);/*MODULE QUI EFFACE UNE LIGNE ET UNE COLONNE D'UNE MATRICE REPRESENTEE PAR LES LISTES*/
/*********************************************************************************************************************************
********************************************************___AUTRES___**************************************************************
*********************************************************************************************************************************/
            int max(int a,int b);
            int min(int a,int b);
            int maxtai(Tab V[],int tai);//calcule le nombre de colonne d'une matrice creuse présenter par les llc
            void lect2d (float  T[100][100], int m,int n);
            void copyllc(Tab T[],int tai,Tab R[]);//COPY UN MATRICE CREUSE DANS UN AUTRE
            float puiss(float a,int x);//MODULE QUI CALCULE LA PUISSANCE


#endif // MANP_MATC_H_INCLUDED
