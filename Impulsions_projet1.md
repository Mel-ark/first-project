# Compteur d'impulsions avec bouton poussoir
  Projet simple en C qui permet de lire les appuis d'un bouton poussoir numériquement sur le moniteur série.

## Fonctionnement
 - Le bouton est relié au *GP10* avec une résistance de pull-up externe relié à la broche d'alimentation *3v3* de la Raspberry.
 - Un code écrit en C est compilé et téléversé au *microcontrôleur* de la Raspberry via un câble *micro-USB*.
 - Le résultat est constaté sur le moniteur série qui affiche une série verticale de *1* lorsque le bouton poussoir est au repos et 
   une série de *0* lorsque le bouton poussoir est pressé.

### Matériel

| Composant          | Quantité | Remarque                     |
|:-------------------|:--------:|:-----------------------------|
| Raspberry Pi pico  | 1        | Pico H                       |  
| Bouton poussoir    | 1        | NO(Normalement Ouvert)       |
| Résistance         | 1        | 100kΩ-1/2 W                  |
| Breadbord+fil      | -        | -                            |
| Cable micro-USB    | 1        | Alimentation + liaison série |

#### Câblage

|Elément             | GP_IO du Pico | N° de pin physique           |
|:-------------------|:-------------:|:-----------------------------|
| Bouton borne 1     | GP10          | 15                           |
| Bouton borne 2     | GND           | 18                           |
| Résistance borne 1 | 3V3 (OUT)     | 36                           |
| Résistance borne 2 | GP10          | 15                           |

##### Schéma simplifié

        3V3(OUT) (pin36)
            |
            |
       [Résistance 100K]
            |
            |
            |
            +--------- GP10 (pin15)
            |
            |
      [Bouton poussoir]
            |
            |
            |
        GND(pin36)

# Code source 
- Un fichier séparé est réservé au code source de ce projet.

## Ecriture compilation et exécution 

- Prérequis: 
   - Arduino IDE installé avec la configuration de Raspberry Pi pico installée et mise à jour ou 
   - Sous VS-code, *Rasberry Pi pico* installée 
- Maintenir le bouton *BOOTSEL* de la pico enfoncé en branchant le câble micro-USB.
- Compiler et exécuter le code.

### Amélioration

- Possibilité d'inclure un écran LCD dans le projet comme moniteur.
- Inclure des actionneurs (servo-moteur; relais; voyants...) en sorties et leur attribuer des états en fonction des impulsions.
- Remplacer le bouton par un capteur (présence, température...).

#### Modifications 

Le projet est modifiable à tout moment selon les besoins, l'environnement d'application, la mémoire disponible, la carte choisie et pour diverses autres raisons.

##### Photographie 

- Se trouve également dans un fichier séparé.

            

