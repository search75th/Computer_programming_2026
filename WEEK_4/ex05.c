#include <stdio.h>
#include <string.h>

int main() {
    char element[20], state[20];
    int atoms;
    char hydrogen;

    printf("Enter main element (Carbon/Nitrogen): ");
    scanf("%s", element);

    printf("Enter number of atoms: ");
    scanf("%d", &atoms);

    printf("Enter state (gas/liquid/solid): ");
    scanf("%s", state);

    printf("Does it contain Hydrogen? (Y/N): ");
    scanf(" %c", &hydrogen);

    if (strcmp(element, "Carbon") == 0 && atoms == 5 &&
        strcmp(state, "gas") == 0 && (hydrogen == 'Y' || hydrogen == 'y')) {
        printf("Type 5 Compound\n");
    }
    else if (strcmp(element, "Carbon") == 0 && atoms == 5 &&
             strcmp(state, "gas") == 0) {
        printf("Type 1 Compound\n");
    }
    else if (strcmp(element, "Carbon") == 0 && atoms == 6 &&
             strcmp(state, "liquid") == 0) {
        printf("Type 2 Compound\n");
    }
    else if (strcmp(element, "Nitrogen") == 0 && atoms == 6 &&
             strcmp(state, "gas") == 0) {
        printf("Type 3 Compound\n");
    }
    else if (strcmp(element, "Nitrogen") == 0 && atoms == 4 &&
             strcmp(state, "solid") == 0) {
        printf("Type 4 Compound\n");
    }
    else {
        printf("Unknown Compound Type\n");
    }

    return 0;
}