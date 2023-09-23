#include <stdio.h>
#include <stdlib.h>
typedef int ra9m;
typedef struct deadline{
    int jours;
int heurs;
int minut; }deadline;
typedef struct taches{
    int id;
    int statut;
    char titre[50];
    char description[100] ;
    deadline n;
}taches;
taches tache[200];
int n=0;

void ajouter();

int main()
{
   menu();

    return 0;
}
void menu(){
 int num,chose;

    printf("-------gestion_todo--------\n");
    printf ("1 ajouter un nouvelle tache\n");//complet
    printf("2 ajouter plusieurs nouvelle taches \n");// complet
    printf("3 afficher la liste de toutes les taches\n");
    printf ("4 Modifier une tâche \n");
    printf ("5 Supprimer une tâche par identifiant\n");
    printf("6 Rechercher les Taches \n");
    printf ("7 Statistiques \n");
    printf("8 qitter \n");

    printf("------donne_ton_chose-------\n");
    scanf("%d",&num);


    switch (num)
    {

    case 1:
        ajouter();
        menu();
        break;
    case 2:
        plusieur_ajouter();
        menu();
        break;
    case 3:
        afficher_la_liste_de_toutes_les_taches ();
        menu();
        break;
    case 4:
        printf("Modifier la description d'une tache \n Modifier le statut d’une tache\n Modifier le deadline d’une tache");
        break;
    case 5:
        printf ("Supprimer une tache par identifiant ");
        break;

    case 6:
        printf("Rechercher une tâche par son Identifiant \n Rechercher une tâche par son Titre ");
    case 7:
        printf ("Afficher le nombre total des tâches \n Afficher le nombre de tâches complètes et incomplètes \n Afficher le nombre de jours restants jusqu'au délai de chaque tâche\n");

        case 8:("quiter");
        break;

    default:
        printf("valide num ");

    }
}

 void ajouter(){
    printf("ajouter une nouvelle tache:\n");

    printf("donner ton id ");
    scanf("%d",&tache[0].id);
    printf("donne le statut ");
    scanf("%d",&tache[0].statut);
    printf("donner le titre ");
    scanf("%s",tache[0].titre[50]);
    printf("donner  description:%n ");
    scanf("%s",tache [0].description[100]);
    printf("donner  jour/heures/minute ");
    scanf("%d/%d/%d" ,&tache[0].n.jours,&tache[0].n.heurs,&tache[0].n.minut);
    n++;
 }
    void plusieur_ajouter(){
        int a;
    printf("donner le nombre des taches");
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        ajouter();
    };}
    void afficher_la_liste_de_toutes_les_taches (){

    printf("la liste de toutes les taches:\n");

     int i;
for (i=0;i<n;i++){
     printf("donne identifiant %s",tache[i].description);

    printf("donne le titre %s",tache[0].titre);

    printf(" donne description %s",tache[0].description);

    printf(" donne deadline %d",tache[0].n.jours);

       if (tache[i].statut==1){
      printf("le tache %d est a_raliser ",i);}
       else if (tache[i].statut==2){
        printf("tache %d est en_cours_de_realisation ",i);}
       if (tache[i].statut==3){
        printf("tache %d est finalisee,",i);}
        }}

void modifier(){
 int b,a;
 printf("donne id");
 scanf("%d", &b );
 int i;
     for (i=0 ;i<n;i++){
if (b == tache[i].id);
     {
printf(" 1 donne le statut ");
printf("2 donner  description:%n ");
 printf(" 3donner  jour/heures/minute ");//deadline
 printf ("donne ton choix \n");
 scanf("%d",&a);
 switch (i){
        case 1:
     printf("un neveau statut");
     scanf("%d",tache[i].statut);
     break;
        case 2:
        printf ("la description:");
        scanf("%s",tache[i].description);
     break;
        case 3:
        printf(" jour / heures / minute");
        scanf("%d/%d/%d",&tache[i].n.jours, &tache[i].n.heurs ,&tache[i].n.minut);//n= deadline
     break;
    default :
         printf("valide num");
    break;
 } }
}
}


