#include <math.h>
#include <stdio.h>
#include <string.h>


#define PI 3.14159

//Standardgravitationsparameter der Sonne (In m²/s⁻³)
#define GM 1.32712440041279419*1e20

//Abstände der Planetenbahnen (In Metern) (Große Halbachse)
//Daten stammen aus der "Planetary Fact Sheet - Metric" der NASA
#define RME 57.9*1e9
#define RV 108.2*1e9
#define RE 149.59787*1e9
#define RM 228.0*1e9
#define RJ 778.5*1e9
#define RS 1432.0*1e9
#define RU 2867.0*1e9
#define RN 4515.0*1e9
#define RP 5906.4*1e9

int main()
{
    double a=0;
    double T=0;
    double t=0;
    double tJ=0;
    double zielR=0;
    int auswahl=0;
    char planet_name[30] = "";

    

    printf("\nIn diesem Programm geht es um die Reisezeiten von der Erde zu anderen Planeten im Sonnensystem.\nViel Spaß!\n\n");

    printf("\nGeben Sie eine Zahl von 1 bis 9 ein, um Ihr Reiseziel auszuwählen.\n(1=Merkur; 2=Venus; 3=Erde; 4=Mars; 5=Jupiter; 6=Saturn; 7=Uranus; 8=Neptun; 9=Pluto): ");
    scanf("%d", &auswahl);
    
    if(auswahl>0 && auswahl<10)
    {
        switch (auswahl)
        {
        case 1:
            zielR=RME;
            strcpy(planet_name, "zum Merkur");
            break;
        case 2:
            zielR=RV;
            strcpy(planet_name, "zur Venus");
            break;
        case 3:
            zielR=RE;
            strcpy(planet_name, "zur Erde");
            break;
        case 4:
            zielR=RM;
            strcpy(planet_name, "zum Mars");
            break;
        case 5:
            zielR=RJ;
            strcpy(planet_name, "zum Jupiter");
            break;
        case 6:
            zielR=RS;
            strcpy(planet_name, "zum Saturn");
            break;
        case 7:
            zielR=RU;
            strcpy(planet_name, "zum Uranus");
            break;
        case 8:
            zielR=RN;
            strcpy(planet_name, "zum Neptun");
            break;
        case 9:
            zielR=RP;
            strcpy(planet_name, "zum Pluto");
            break;
        default:
            zielR=0;
            strcpy(planet_name, "zum Ausgewählten Planeten");
            break;
        }

        // Große Halbachse der Transferellipse
        a = (RE+zielR)/(2);

        // Umlaufzeit der Transferellipse
        T = (2*PI) * sqrt((a*a*a)/(GM));

        // Berechnung der Reisezeit
        t = T/2;

        // Umrechnung in Tage
        t = t/86400;

        // Umrechnung in Jahre (extra Variabel)
        tJ=t/365.25;


        printf("\nDie Reisezeit von der Erde bis %s beträgt ungefähr: %lfTage oder %lfJahre\n\n", planet_name,t,tJ);

        return 0;
    }
    else
    {
        printf("Fehlerhafte Eingabe! Geben Sie bitte nur Zahlen von 1 bis 9 ein!");
    }
}
