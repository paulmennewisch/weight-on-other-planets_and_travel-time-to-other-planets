#include <stdio.h>

//Gravitationskonstanten
#define GK_E 9.81
#define GK_M 3.71
#define GK_MO 1.62
#define GK_V 8.87
#define GK_J 24.79
#define GK_P 0.62
#define GK_N 11.1
#define GK_U 8.69
#define GK_S 10.44
#define GK_EU 1.314
#define GK_SO 274.0
 
int main() 
{
    float start_gewicht=0;
    float end_gewicht=0;
    float veränderungsfaktor=0;
    int auswahl = 0;
    float ortsfaktor;

    printf("\nHallo :] haben Sie sich schonmal gefragt wie viel Sie auf anderen Planeten wiegen würden?\n");
    printf("Wir sind hier um das herauszufinden...\n");
    printf("Wenn Sie Ihr genaues Gewicht nicht wissen, dann geben Sie einfach ein ungefähres oder geratenes an.\nViel Spaß!\n");

    printf("\nIhr Gewicht (in kg) auf der Erdoberfläche: ");
    scanf("%f", &start_gewicht);

    if(start_gewicht>0)
    {
        printf("\nWählen Sie bitte eine Zahl von 1 bis 11 aus\n(1=Erde; 2=Mars; 3=Mond; 4=Venus; 5=Jupiter; 6=Pluto; 7=Neptun; 8=Uranus; 9=Saturn; 10=Europa; 11=Sonne): ");
        scanf("%d", &auswahl);
        
        if(auswahl>0 && auswahl<12)
        {
            switch (auswahl)
            {
                default:
                    ortsfaktor = GK_E;
                    break;
                case 1:
                    ortsfaktor = GK_E;
                    break;
                case 2:
                    ortsfaktor = GK_M;
                    break;
                case 3:
                    ortsfaktor = GK_MO;
                    break;
                case 4:
                    ortsfaktor = GK_V;
                    break;
                case 5:
                    ortsfaktor = GK_J;
                    break;
                case 6:
                    ortsfaktor = GK_P;
                    break;
                case 7:
                    ortsfaktor = GK_N;
                    break;
                case 8:
                    ortsfaktor = GK_U;
                    break;
                case 9:
                    ortsfaktor = GK_S;
                    break;
                case 10:
                    ortsfaktor = GK_EU;
                    break;
                case 11:
                    ortsfaktor = GK_SO;
                    break;
            }

            end_gewicht = (start_gewicht / GK_E) * ortsfaktor;
            veränderungsfaktor = end_gewicht/start_gewicht;

            printf("\nIhr Gewicht auf dem ausgewählten Himmelskörper ist: %f kg\n", end_gewicht);
            printf("\nDas ist %f mal so viel wie auf der Erde!\n\n", veränderungsfaktor);
            return 0;
        }
        else
        {
            printf("\nFehlerhafte Eingabe: Bitte geben Sie eine Zahl von 1 bis 11 ein!\n");
            return 0;
        }
    }
    else
    {
        printf("\nFehlerhafte Eingabe: Bitte geben Sie einen positiven Wert ein!\n");
        return 0;
    }
}
