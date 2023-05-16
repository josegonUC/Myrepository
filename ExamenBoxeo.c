// Jose Miguel Gonzalez Fernandez - 29.834.290

#include <stdio.h>
#include <stdlib.h>

#define MAX_ROUNDS 12
#define MAX_SCORE 10
#define MIN_SCORE 9
#define KNOCKDOWN_POINTS 2
#define INITIAL_PRIZE 100000

// Prototipos
int puntos(int round, int fighter);
int Knockdown(int round, int fighter);
float calcularPrize(int score, int rounds);

int main() {
    int i, j, score, knockdown, winnerS = 0, loserS = 0, winnerR = 0, loserR = 0;
    float winnerPrize, loserPrize;
    char decision[3];

    
    int scores[MAX_ROUNDS][2];
    int knockdowns[MAX_ROUNDS][2];

    // Simulación de los resultados de los 12 rounds
    for (i = 0; i < MAX_ROUNDS; i++) {
        printf("Round %d\n", i + 1);

        // Simulación de los puntajes y los knockdowns en cada round
        for (j = 0; j < 2; j++) {
            scores[i][j] = puntos(i, j);
            knockdowns[i][j] = Knockdown(i, j);
        }
    }

    // Determinación del tipo de decisión
    if (winnerS > loserS) {
        if (winnerR == MAX_ROUNDS) {
            sprintf(decision, "UD");
        }
        else if (winnerR >= 7) {
            sprintf(decision, "MD");
        }
        else {
            sprintf(decision, "SD");
        }
    }
    else {
        if (loserR == MAX_ROUNDS) {
            sprintf(decision, "UD");
        }
        else if (loserR >= 7) {
            sprintf(decision, "MD");
        }
        else {
            sprintf(decision, "SD");
        }
    }

    // Cálculo de los premios de los boxeadores
    winnerPrize = calcularPrize(winnerS, winnerR);
    loserPrize = calcularPrize(loserS, loserR);

    printf("Puntuacion Final:\n");
    printf("Ganador: %d puntos\n", winnerS);
    printf("Perdedor: %d puntos\n", loserS);
    printf("\nRounds Ganados:\n");
    printf("Ganador: %d rounds\n", winnerR);
    printf("Perdedor: %d rounds\n", loserR);
    printf("\nTipo de Victoria: %s\n", decision);
    printf("\nPremios:\n");
    printf("Ganador: $%.2f\n", winnerPrize);
    printf("Perdedor: $%.2f\n", loserPrize);

    return 0;
}

// Function to get the score for a fighter in a round
int puntos(int round, int fighter) {
    int score;
    printf("Peleador %d: ", fighter + 1);
    scanf("%d", &score);
    return score;
}

// Function to get the knockdown for a fighter in a round
int Knockdown(int round, int fighter) {
    int knockdown;
    printf("Knockdown? (0 = no, 1 = si): ");
    scanf("%d", &knockdown);
    return knockdown;
}

// Function to calculate the prize for a fighter
float calcularPrize(int score, int rounds) {
    float prize;
    prize = INITIAL_PRIZE + (INITIAL_PRIZE * (rounds * 0.05));
    return prize;
}