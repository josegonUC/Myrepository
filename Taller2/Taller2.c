#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxNomEstu 50
#define numExam 3
#define numEstu 5

struct Alumno {
    char nombre[maxNomEstu];
    float grados[numExam];
    float promedio;
};

void leerDatos(struct Alumno alumnos[numEstu]) {
    FILE *arch = fopen("notas_alumnos.txt", "r");
    if (arch == NULL) {
        printf("Error al momento de abrir el archivo\n");
        exit(1);
    }
    for (int i = 0; i < numEstu; i++) {
        fscanf(arch, "%s %f %f %f", alumnos[i].nombre, &alumnos[i].grados[0], &alumnos[i].grados[1], &alumnos[i].grados[2]);
    }
    fclose(arch);
}

void calcularPromedio(struct Alumno alumnos[numEstu]) {
    for (int i = 0; i < numEstu; i++) {
        float sum = 0;
        for (int j = 0; j < numExam; j++) {
            sum += alumnos[i].grados[j];
        }
        alumnos[i].promedio = sum / numExam;
    }
}

void generarMatriz(struct Alumno alumnos[numEstu]) {
    FILE *arch = fopen("resultados.txt", "w");
    if (arch == NULL) {
        printf("Error al momento de abrir el archivo\n");
        exit(1);
    }
    fprintf(arch, "Posicion academica\tNombre\tNota final\n");
    for (int i = 0; i < numEstu; i++) {
        fprintf(arch, "%d\t%s\t%.2f\n", i + 1, alumnos[i].nombre, alumnos[i].promedio);
    }
    fclose(arch);
}

int ordenarEstudiantes(const void *a, const void *b) {
    struct Alumno *s1 = (struct Alumno *)a;
    struct Alumno *s2 = (struct Alumno *)b;
    return (s2->promedio - s1->promedio) * 100; // multiplying by 100 to compare floats
}

void ordenarEstudiant(struct Alumno alumnos[numEstu]) {
    qsort(alumnos, numEstu, sizeof(struct Alumno), ordenarEstudiantes);
}

int main() {
    struct Alumno alumnos[numEstu];
    leerDatos(alumnos);
    calcularPromedio(alumnos);
    ordenarEstudiant(alumnos);
    generarMatriz(alumnos);
    printf("Datos procesados y guardados en resultados.txt\n");
    return 0;
}