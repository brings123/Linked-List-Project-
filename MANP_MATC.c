#include<stdlib.h>
#include<stdio.h>
#include"CONIO2.h"
#include"MANP_MATC.h"

/********************************************************************************************************************************
*******************************************________MACHINE LLC DE TP_________****************************************************
********************************************************************************************************************************/
    void Allouer (maillonT* *nouveau)
    {
        *nouveau = (maillonT*) malloc(sizeof(maillonT));
    }
/*******************************************************************************************************************************/
    void Aff_Val(maillonT *P, float v)
    {
        P->val =v;
    }
/*******************************************************************************************************************************/
    void Aff_Adr(maillonT *P,maillonT *Q)
    {
        P->suiv = Q;
    }
/*******************************************************************************************************************************/
    float Valeur(struct maillonT *P)
    {
        return( P->val) ;
    }
/*******************************************************************************************************************************/
    maillonT *Suivant(maillonT *P)
    {
        return( P->suiv );
    }
/*******************************************************************************************************************************/
    void Liberer(maillonT**ancien)
    {
        free(*ancien);
        *ancien= NULL;
    }
/*******************************************************************************************************************************/
    void Aff_col(maillonT *p,int colonne)//remplit le champ colonne
    {
        p->col=colonne;
    }
/*******************************************************************************************************************************/
    int colonne(maillonT *P)//affiche la position(numéro de la colonne)
    {
        return (P->col);
    }
/*********************************************************************************************************************************
****************************************___CONSTRUIRE ET AFFICHAGE DE MATRICE CREUSE___******************************************
*********************************************************************************************************************************/

void ConstmatC(float MP[100][100],int lig,int col,Tab VC[100])//CONSTRUCTION D'UNE MATRICE CREUSE UTILISONS LES LLC D'APRES UNE MATRICE PLEINE
{
    int cpt=0,i,j;
    maillonT *p=NULL,*T1=NULL;
    for(i=0;i<lig;i++)
    {
        cpt=0;//Le compteur qui determine la taille de chaque liste .
        VC[i].tete=NULL;
        for(j=0;j<col;j++)
        {
            if((MP[i][j])!=0)//POUR TRAITER TOUS LES CAS SANS L'UTILSATION DE 0
            {
                if(cpt==0)//LA PREMIER FOIS
                {
                    Allouer(&p);
                    T1=p;
                    VC[i].tete=p;
                    Aff_Val(p,MP[i][j]);
                    Aff_col(p,j);
                    cpt=1;
                }
                else//LES AUTRES
                {
                    Allouer(&p);
                    Aff_Adr(T1,p);
                    T1=p;
                    Aff_Val(p,MP[i][j]);
                    Aff_col(p,j);
                    cpt++;
                }
            }
        }
        if(cpt!=0)//LE CAS OU TOUS LES VALEUR SONT NULL
        {
            Aff_Adr(p,NULL);
        }
        VC[i].taille=cpt;
    }
}

/*****************************************___AFFICHAGE DE MATRICE CREUSE___******************************************************/
void affich(struct Tab *V,int tai)//le module utilisé si le nombre de colonne ne dépace pas 5 colonnes
{
    int i;
    maillonT *T;
    textcolor(YELLOW);
    gotoxy(2,wherey());//dessin des carées
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,187);
    for(i=0;i<tai;i++)
    {
        textcolor(BLACK);
        printf("d");
        textcolor(YELLOW);
        gotoxy(wherex()-13,wherey()+1);
        T=V[i].tete;
        printf("%c",186);
        textcolor(WHITE);
        printf("TAILLE :%3d",V[i].taille);
        textcolor(YELLOW);
        printf("%c%c%c",186,196,196);
        gotoxy(wherex()-15,wherey()+1);
        printf("%c",186);
        gotoxy(wherex()+11,wherey());
        printf("%c",186);
        gotoxy(wherex()-13,wherey()+1);
        if(i==tai-1)  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,188);
        else printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,185);
        if (T==NULL)
        {
            if(i==tai-1) gotoxy(wherex()+17,wherey()-4);
            else
            gotoxy(wherex()+3,wherey()-3);
            printf("%c",218);
            gotoxy(wherex()-2,wherey()+1);
            printf("%c%c",196,197);
            gotoxy(wherex()-1,wherey()+1);
            printf("%c",192);
        }
        else
        {
            if(i==tai-1) gotoxy(17,wherey()-4);
            else gotoxy(17,wherey()-3);
            while(T!=NULL)
            {
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                gotoxy(wherex()-13,wherey()+1);
                printf("%c",186);
                textcolor(WHITE);
                printf("%11f",Valeur(T));
                textcolor(YELLOW);
                printf("%c%c%c",186,196,196);
                gotoxy(wherex()-15,wherey()+1);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                gotoxy(wherex()+2,wherey()-2);
                T=Suivant(T);
                if (wherex()+15>116)
                {
                    gotoxy(3,wherey()+4);
                    printf("%c%c",196,196);
                    gotoxy(wherex(),wherey()-1);
                }
            }
            gotoxy(wherex()+1,wherey());
            printf("%c",218);
            gotoxy(wherex()-2,wherey()+1);
            printf("%c%c",196,197);
            gotoxy(wherex()-1,wherey()+1);
            printf("%c",192);
        }
        printf("\n \n");
    }
    textcolor(WHITE);
}
/*****************************************___AFFICHAGE DE MATRICE CREUSE___******************************************************/
 void affichage(Tab T[],int tai)//l'affichage dans les autres cas "simple"
    {
        int i;
        maillonT *P;
        for (i=0;i<tai;i++)
        {
            printf("ligne nemuro %d : ",i);
            P=T[i].tete;
            if(P!=NULL)
            {
                while(P!=NULL)
                {
                    printf("%4f |",P->val);
                    P=Suivant(P);
                }
            }
            else {printf("maillon nil");}//le cas d'un ligne pleine de zeros
            printf("\n");
        }
    }

/*********************************************************************************************************************************
********************************************************___AUTRES___**************************************************************
*********************************************************************************************************************************/
int min(int a,int b)//donne le min de 2 nombre
    {
        return ((a < b) ? a : b);
    }
/******************************/
int max(int a,int b)//donne le max de 2 entiers
    {
        return ((a > b) ? a : b);
    }
/******************************/
int maxtai1(Tab V[],int tai)//calcule le nombre de colonne d'une matrice creuse présenter par les llc
    {
        int i,sup;
        sup= V[0].taille;
        for(i=1;i<tai;i++)
        {
            sup=max(sup,V[i].taille);
        }
        return sup;
    }

int maxtai(Tab V[],int tai)
    {
        int i,sup;
        maillonT *p;
        sup=0;
        for(i=0;i<tai;i++)
        {
            p=V[i].tete;
            while(p!=NULL)
            {
                sup=max(sup,colonne(p));
                p=Suivant(p);
            }
        }
        return sup+1;
    }

/******************************/
float puiss(float a,int x)//MODULE QUI CALCULE LA PUISSANCE
    {
        int i=1;
        double r=1;
        while(i<=x)
        {
        r=a*r;
        i++;
        }
        return r;
    }
 /******************************/
    void lect2d (float  T[100][100], int m,int n)
    {
        int i,j;
        for (i=0;i<m;i++)
            {
                for (j=0;j<n;j++)
                    {
                        printf("T[%d][%d]= ",i,j);
                        scanf("%f",&T[i][j]);
                    }
            }
    }
/******************************/
void copyllc(Tab T[],int tai,Tab R[])//COPY UN MATRICE CREUSE DANS UN AUTRE
{
    int i,bol;
    maillonT *pred,*P,*Q;
    for(i=0;i<tai;i++)//PARCOURS DE VECTEUR
    {
        bol=0;//BOOLEEN POUR TRAITER TOUS LES CAS DANS UNE SEULE BOUCLE
        P=T[i].tete;
        if(P!=NULL)
        {
            while(P!=NULL)
            {
                Allouer(&Q);
                Aff_Val(Q,Valeur(P));
                Aff_col(Q,colonne(P));
                if(bol==0)//LA PREMIER FOIS
                {
                    R[i].taille=T[i].taille;
                    R[i].tete=Q;
                    bol=1;
                    pred=Q;
                }
                else//LES AUTRES
                {
                    Aff_Adr(pred,Q);
                    pred=Q;
                }
                P=Suivant(P);
            }
            if(Q!=NULL)
            {
                Aff_Adr(Q,NULL);
            }
            else R[i].tete=NULL;
        }
        else R[i].tete=NULL;
    }
}
/*********************************************************************************************************************************
****************************************___OPERATIONS SURLES MATRICES CREUSES___**************************************************
*********************************************************************************************************************************/
/*****************************************__PRODUIT PAR UN SCALAIRES__***********************************************************/
 void prodscal(Tab VC[],int tai,double scalaire,Tab R[],int*taip )
{
    int i,j;
    double VAL;
    maillonT *Q;
    if(scalaire!=0)
    {
        copyllc(VC,tai,R);
        if (scalaire!=1)//car si scalaire =1 les valeur de matrice ne seront pas changées.
        {
            for (i=0;i<tai;i++)
            {
                Q=R[i].tete;//traitement des tetes
                if(Q!=NULL)
                {
                     while(Q!=NULL)
                    {
                        VAL=Valeur(Q)*scalaire;
                        Aff_Val(Q,VAL);//changement des valeurs
                        Q=Suivant(Q);
                    }
                }
            }
        }
    }
    else//LE CAS OU SCAL=0
    {
        for (j=0;j<tai;j++)
        {
            R[j].tete=NULL;
            R[j].taille=0;
        }
    }
    *taip=tai;
}

/*****************************************__LA SOMME DES DEUX MATRICES__*********************************************************/
void sommematc(Tab V1[],int tai1,Tab V2[],int tai2,Tab R[],int *tai)//la somme des deux matrice
    {
        int i,cpt;
        float val;
        maillonT *P,*Q,*SOM,*Pred;
        if(tai1==tai2&&maxtai(V1,tai1)==maxtai(V1,tai2))//verification de compatibilité des dimensions
        {
            for(i=0;i<tai1;i++)//parcours de vecteur
            {
                cpt=0;//le nombre des llc 'colonnes des matrice'
                P=V1[i].tete;
                Q=V2[i].tete;
                if(P!=NULL&&Q!=NULL)//les deux matrices contient des éléments au méme ligne
                {
                    while(P!=NULL&&Q!=NULL)//le cas ou les deux matrice sont pleine
                    {
                        if(colonne(P)==colonne(Q))
                        {
                            val=(Valeur(P)+Valeur(Q));
                            if(val!=0)
                            {
                                Allouer(&SOM);
                                Aff_Val(SOM,val);
                                Aff_col(SOM,colonne(P));
                            }
                            P=Suivant(P);
                            Q=Suivant(Q);
                        }
                        else if(colonne(P)<colonne(Q))
                        {
                            Allouer(&SOM);
                            Aff_Val(SOM,Valeur(P));
                            Aff_col(SOM,colonne(P));
                            P=Suivant(P);
                        }
                        else
                        {
                            Allouer(&SOM);
                            Aff_Val(SOM,Valeur(Q));
                            Aff_col(SOM,colonne(Q));
                            Q=Suivant(Q);
                        }
                        if(val!=0)
                        {
                            if (cpt==0)
                            {
                                R[i].tete=SOM;
                                Pred=SOM;
                            }
                            else
                            {
                                Aff_Adr(Pred,SOM);
                                Pred=SOM;
                            }
                            cpt++;
                        }
                    }
                }
                if (P!=NULL&&Q==NULL)//le cas ou une des matrice a une ligne vide
                {
                    while(P!=NULL&&Q==NULL)
                    {
                        Allouer(&SOM);
                        Aff_Val(SOM,Valeur(P));
                        Aff_col(SOM,colonne(P));
                        P=Suivant(P);
                        if (cpt==0)
                        {
                            R[i].tete=SOM;
                            Pred=SOM;
                        }
                        else
                        {
                            Aff_Adr(Pred,SOM);
                            Pred=SOM;
                        }
                        cpt++;
                    }
                }
                if (P==NULL&&Q!=NULL)//le cas ou une des matrice a une ligne vide
                {
                    while(P==NULL&&Q!=NULL)
                    {
                        Allouer(&SOM);
                        Aff_Val(SOM,Valeur(Q));
                        Aff_col(SOM,colonne(Q));
                        Q=Suivant(Q);
                        if (cpt==0)
                        {
                            R[i].tete=SOM;
                            Pred=SOM;
                        }
                        else
                        {
                            Aff_Adr(Pred,SOM);
                            Pred=SOM;
                        }
                        cpt++;
                    }
                }
               if (cpt==0)
                    {
                        R[i].tete=NULL;
                    }
                    else
                    {
                        Aff_Adr(SOM,NULL);
                    }
                R[i].taille=cpt;
            }
            *tai=tai1;
            writeCh("la somme a ete faite avec succe.......\n",20);
        }

        else printf("impossible car les dimensions des matrices sont différentes...\n");
    }

/*****************************************__LE transposée de MATRICES__**********************************************************/
 void transpose(Tab VC[],int tai1,Tab V[],int *tai2)
{
    maillonT *p,*pred,*q;
    int cpt,i,j,col;
    col=maxtai(VC,tai1);
    for(i=0;i<col;i++)//parcours des llc
    {
        cpt=0;
        V[i].tete=NULL;
        for(j=0;j<tai1;j++)//parcours de vecteur
        {
            p=VC[j].tete;
            while(p!=NULL&&colonne(p)<=i)//la recherche a une valeur specifier
            {
                if((colonne(p))==i)
                {
                    Allouer(&q);
                    Aff_col(q,j);
                    Aff_Val(q,Valeur(p));
                    if(cpt==0)
                    {
                        V[i].tete=q;
                        pred=q;
                    }
                    else
                    {
                        Aff_Adr(pred,q);
                        pred=q;
                    }
                    cpt++;
                }
                p=Suivant(p);
            }
        }
        V[i].taille=cpt;
        if(cpt!=0)
        {
            Aff_Adr(q,NULL);
        }
    }
    *tai2=col;
}
/*****************************************__LE PRODUIT DES DEUX MATRICES__*******************************************************/
void ProdMAT(Tab V1[],int tai1,Tab V2[],int tai2,Tab VR[],int *taiR)
{
    Tab V3[100];
    int col,cpt,j,i,*tai3;
    float Val;
    maillonT *P,*Q,*Pred,*Prod=NULL;
    col=maxtai(V1,tai1);//calculons le nombre de colonnes
    if (col==tai2)
    {
        transpose(V2,tai2,V3,&tai3);//pour éviter les différents complexes maniupilation on utilise le transposé
        for(j=0;j<tai1;j++)//parcours de vecteur de matrice 1
        {
            Q=V1[j].tete;
            if(Q!=NULL)
            {
                cpt=0;
                for(i=0;i<tai3;i++)//parcours de vecteur de transpose de matrice 2
                {
                    Val=0;
                    P=V3[i].tete;
                    if(P!=NULL&&Q!=NULL)
                    {
                        while(Q!=NULL&&P!=NULL)
                        {
                            Val=Valeur(P)*Valeur(Q)+Val;
                            P=Suivant(P);
                            Q=Suivant(Q);
                        }
                        if(Val!=0)
                        {
                            Q=V1[j].tete;
                            Allouer(&Prod);
                            Aff_Val(Prod,Val);
                            Aff_col(Prod,i);
                            if (cpt==0)
                                {
                                    VR[j].tete=Prod;
                                    Pred=Prod;
                                }
                                else
                                {
                                    Aff_Adr(Pred,Prod);
                                    Pred=Prod;
                                }
                                cpt++;
                        }
                    }
                }
                VR[j].taille=cpt;
                if(Prod!=NULL)
                {
                    Aff_Adr(Prod,NULL);
                }
                else VR[j].tete=NULL;
            }
        }
            *taiR=tai1;
            writeCh("la multiplucation a ete faite avec succe.......\n",20);
    }
    else
    {
        printf("IMPOSSIBLE CAR LES DIMENSIONS NE SONT PAS COMPATIBLES... ");
    }
}

/*********************************************************************************************************************************
*************************************___SAUVGARDER ET RESTAURER UN MATRICE CREUSE___**********************************************
*********************************************************************************************************************************/
/******************************************__RESTAURER__*************************************************************************/
void restaur(float T[100][100],int *lig,int *col)//RESTAURER UNE MATRICE A PARTIR D'UN FICHIER
{
    *col=-2;
    int i=0,j;
    float m;
    FILE* fichier=NULL;
    fichier=fopen("fichier.txt","r");//l'ouverture de fichier
    if(fichier!=NULL)
    {
        while (fgetc(fichier)!=EOF)
        {
            if(fgetc(fichier)=='-') i++;
            fscanf(fichier," %d %f",&j,&m);//lire les nombre de colnnes et valeur des matrice
            T[i][j]=m;
            *col=max(*col,j);
        }
    }
    fclose(fichier);//la fermeteur de fichier
    *lig=i+1;//nombre des lignes
    *col=*col+1;//nombre de colonnes
}

/***********************_______enreg 2______***************/

void restaur2(float T[100][100],int *lig,int *col)//RESTAURER UNE MATRICE A PARTIR D'UN FICHIER
{
    *col=-2;
    int i=0,j;
    float m;
    FILE* fichier2=NULL;
    fichier2=fopen("fichier2.txt","r");//l'ouverture de fichier
    if(fichier2!=NULL)
    {
        while (fgetc(fichier2)!=EOF)
        {
            if(fgetc(fichier2)=='-') i++;
            fscanf(fichier2," %d %f",&j,&m);//lire les nombre de colnnes et valeur des matrice
            T[i][j]=m;
            *col=max(*col,j);
        }
    }
    fclose(fichier2);//la fermeteur de fichier
    *lig=i+1;//nombre des lignes
    *col=*col+1;//nombre de colonnes
}

/*****************************************__SAUVGARDER__*************************************************************************/
void sauv(Tab VC[],int tai)//SAUVGARDER UNE MATRICE DANS UNE FICHIER
{
    FILE* fichier=NULL;
    maillonT* p;
    int i;
    fichier=fopen("fichier.txt","w");//ouverture de fichier
    for(i=0;i<tai;i++)
    {
        p=VC[i].tete;
        if(p!=NULL)
        {
            fprintf(fichier,"-");//pour separer les lignes
            while(p!=NULL)
            {
                fprintf(fichier,"%2d  ",colonne(p));//les colonnes
                fprintf(fichier,"%f\n", Valeur(p));//les valeurs
                p=Suivant(p);
            }
        }
        else fprintf(fichier,"- 0  0.00000\n");//le cas ou les valeur sont 0
    }
    fclose(fichier);//fermeture de fichier
}
/***********************_______enreg 2______***************/
void sauv2(Tab VC[],int tai)//SAUVGARDER UNE MATRICE DANS UNE FICHIER
{
    FILE* fichier2=NULL;
    maillonT* p;
    int i;
    fichier2=fopen("fichier2.txt","w");//ouverture de fichier
    for(i=0;i<tai;i++)
    {
        p=VC[i].tete;
        if(p!=NULL)
        {
            fprintf(fichier2,"-");//pour separer les lignes
            while(p!=NULL)
            {
                fprintf(fichier2,"%2d  ",colonne(p));
                fprintf(fichier2,"%f\n", Valeur(p));
                p=Suivant(p);
            }
        }
        else fprintf(fichier2,"- 0  0.00000\n");//le cas ou les valeur sont 0
    }
    fclose(fichier2);//fermeture de fichier
}
/*********************************************************************************************************************************
****************************************___resolution des equations linéaires___**************************************************
*********************************************************************************************************************************/
void eff_col_lig(Tab V[100],int lig,int colm,Tab Vn[100],int tai)
/*MODULE QUI EFFACE UNE LIGNE ET UNE COLONNE D'UNE MATRICE REPRESENTEE PAR LES LISTES*/
{

    int cpt,i,bol=0,k=-1;
    maillonT *p,*pred,*q;
    for(i=0;i<=(tai-1);i++)//ON PARCOURT LA LISTE
    {
         p=V[i].tete;
         cpt=0;
         Vn[i].tete=NULL;//INITIALISATION DU MAILLON
        while(p!=NULL)
        {
            if(((colonne(p))!=colm)&&(i!=lig))
            {
                if(i>k&&bol==0)
                {
                    k++;//TRAITEMENT DE L'INDICE
                }
                bol=1;
                if(cpt==0)//TRAINTEMENT DE LA TETE
                {
                    Allouer(&q);
                    if((colonne(p))>(colm))
                    {
                        Aff_col(q,(colonne(p))-1);
                    }
                    else
                    {
                        Aff_col(q,(colonne(p)));
                    }
                    Aff_Val(q,Valeur(p));
                    Vn[k].tete=q;
                    cpt++;
                    pred=q;//PRED POUR RELIEE DEUX MAILLON
                }
                else
                {
                    Allouer(&q);
                        if((colonne(p))>(colm))
                        {
                            Aff_col(q,(colonne(p))-1);
                        }
                        else
                        {
                            Aff_col(q,(colonne(p)));
                        }
                        Aff_Val(q,Valeur(p));
                        Aff_Adr(pred,q);
                        cpt++;
                        pred=q;
                }
            }
                p=Suivant(p);
            }
            if (bol==1)//TRAITEMENT DE LA TAILLE
            {
            Vn[k].taille=cpt;
            bol=0;
            }
            if(cpt!=0)//AFFECTER NULL AU DERNIER MAILLON
            {
                Aff_Adr(pred,NULL);
            }
        }
    }
  float Detliste(Tab V[100])//MODULE QUI CALCULE LE DEERMINANT D'UNE MATRICE 2x2 PAR LES LISTES
    {
        int i,j,k;
        maillonT *p;
        float Mat[100][100];
        for(i=0;i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                Mat[i][j]=0;
            }
        }
        for(k=0;k<=1;k++)
        {
            p=V[k].tete;
            while(p!=NULL)
            {
                Mat[k][p->col]=Valeur(p);
                p=Suivant(p);
            }
        }
    return Mat[0][0]*Mat[1][1]-(Mat[0][1]*Mat[1][0]);
    }
 float det(Tab V[100],int n,float *de)//MODULE QUI CALCULE LE DETERMINANT D'UNE MATRICE CARREE PAR LES LISTES
   {
       Tab Vn[100];
       maillonT *p=NULL;
       int i=0;
       i++;
       float som=0;
       if(n==1)
       {
           *de=Valeur(V[0].tete);
        return Valeur(V[0].tete);  //ON CALCULE LE DETERMINANT D'UNE MATRICE 2x2
       }
       else if(n==2)
       {
           *de=Detliste(V);
           return Detliste(V);
       }
       else
        {
        p=V[0].tete;
       while(p!=NULL)
       {
            eff_col_lig(V,0,(p->col),Vn,n);//ON EFFACE LA LIGNE 0 ET LA COLONNE p->col
            som=som+(Valeur(p)*puiss(-1,(p->col))*det(Vn,n-1,de));//ON SOMME LES RESULTAT
            p=Suivant(p);
       }
       *de=som;//LA SOMME DES RESULTAT PRECENDENTE C'EST LE DETERMINANT
       return som;
       }
    }

void inv (Tab V[100],int tai1,Tab VR[],int *tai2)
{
    float dete;
    det(V,tai1,&dete);
    if(dete!=0)
    {

        Mat_Inv(V,tai1,VR);
        *tai2=tai1;
    }
    else if(dete==0) printf(" matrice n'est pas symetrique");
}

void Mat_Inv(Tab V[],int tai,Tab Vi[])//MODULE QUI CALCULE LA MATRICE INVERSE D'UNE MATRICE
{
    int a;
    Tab Vt[100],Vr[100];
    ConstComat(V,tai,Vt);//construction de la Comatrice De V
    transpose(Vt,tai,Vr,&tai);//on la transpose
    prodscal(Vr,tai,(double) 1/det(V,tai,&a),Vi,&tai);//on multiplie la transposé de la comatrice par l'inverse du determinant
}

void ConstComat(Tab V[100],int tai,Tab Vc[100])//MODULE QUI CONSTRUIT UNE COMATRICE D'UNE MATRICE
{
    int i,j;
    float t[100][100];
    int a;
    Tab Vt[100];
    for(i=0;i<tai;i++)
    {
        for(j=0;j<tai;j++)
        {
            eff_col_lig(V,i,j,Vt,tai);//On efface la ligne i et la colonne j
            t[i][j]=det(Vt,tai-1,&a)*puiss(-1,i+j);//On met le resultat dans la matrice t
        }
    }
    ConstmatC(t,tai,tai,Vc);//On construit la liste qui represante la matrice t
}

void equ_lin()//LES SOLUTIONS D4EQUATION LINEAIRES
{
    float t[100][100],v[100][100];
    int lig,col,tai2,tair;
    float dett;
    Tab ER[100],IER[100],V[100],RES[100];
    printf("entrer la matrice de depart :\n\n");
    printf("le nombre de ligne: ");
    scanf("%d",&lig);
    printf("le nombre de colonnes : ");
    scanf("%d",&col);
    lect2d(t,lig,col);
    ConstmatC(t,lig,col,ER);
    det(ER,lig,&dett);
    if(dett!=0)
    {
        printf("le determinant de cette matrice egale : %f\n",dett);
        inv(ER,lig,IER,&tai2);
        if(maxtai1(IER,tai2)<=5) affich(IER,tai2);
        else affichage(IER,tai2);
        printf("\n\n");
        printf("entrer le vecteur :\n\n");
        lect2d(v,col,1);
        ConstmatC(v,col,1,V);
        ProdMAT(IER,lig,V,col,RES,&tair);
        printf("les solutions de ce system sont : \n");
        if(maxtai1(RES,tair)<=5) affich(RES,tair);
        else affichage(RES,tair);
    }
    else if(dett==0) printf(" matrice n'est pas symetrique\n");
    else printf("impossible de resolu cette system car votre matrice n'est pas caree");
}
/*********************************************************************************************************************************
****************************************___COMPLEXITE DES ALGORITHMES___**********************************************************
*********************************************************************************************************************************/

void comple(void)//les complexité des modules
{
    printf("la complexité du module consmat qui construit les matrices au forme de llc est : O(n*m) \n\n");
    printf("la complexité des modules d'affichage qui affichent les matrices au forme de llc est : O(n*m) \n\n");
    printf("la complexité du module copyllc qui copier un matrice au forme de llc dans une autre est : O(n*m) \n\n");
    printf("la complexité du module prodscal qui calcule le produit scalaire est : O(n*m) \n\n");
    printf("la complexité du module sommat qui calcule la somme de deux matrices est : O(n*m) \n\n");
    printf("la complexité du module prodmat qui calcule le produit matricielle est : O(n*m*p) \n\n");
    printf("la complexité du module DETLISTE qui calcule le determnant de 2X2 est : O(16) \n\n");
    printf("la complexité du module DET qui calcule le determnant est : O(n*n) \n\n");
    printf("la complexité du module eff_col_lig est : O(n*m) \n\n");
    printf("la complexité du module ConstComat est : O(n*n*n*m) \n\n");
    printf("la complexité du module Mat_Inv est : O(n*n*n*m) \n\n");
    printf("la complexité du module equ_lin est : O(n*n*n*m) \n\n");
     printf("la complexité du module inv est : O(n*n*n*m) \n\n");
    printf("la complexité du module trans qui calcule le transposée est : O(n*m*p) \n\n\n\n");
}
