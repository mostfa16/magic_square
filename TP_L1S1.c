#include <stdio.h>
main()
{int tab[20][20],i,s,j,v,n,tr;
    printf("imprimer le nbr de ligne et colonne : ");
    scanf("%d",&n);
    if(n%2==1 && n>3)
       {
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        tab[i][j]=0;
 i=n/2+1; j=n/2; v=1;
    tab[i][j]=v;

    while(v<n*n)
    {i--;
    if (i<0) i=n-1;
    j++;
    if (j==n) j=0;

if (tab[i][j] != 0)
            {i--;
            if (i<0) i=n-1;
            j--;
            if (j<0) j=n-1;
            }
            v++;
             tab[i][j]=v;}
            for(i=0;i<n;i++)
           {for(j=0;j<n;j++)
        printf("%0.3d  ",tab[i][j]);
        printf("\n\n");
    } }
            else{
                printf("pas de resultat ,essayé un nombre impaire\n");return 0;}
do{
tr=0;
printf("\nimprimer la valeur rechercher : ");
scanf("%d",&s);
  for(j=0;j<n;j++)
  {for(i=0;i<n;i++)
  {if(s==tab[i][j])
    {tr=1;
    printf("Ligne : %d\n",i+1);
    printf("Colonne : %d\n",j+1);
    printf("T[%d][%d] = %d",i,j,s);
}}}
if (tr==0)
    printf("la valeur n'existe pas \n");

}while(s!=0);
}
