#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Pkmn.h"

const char * const TYPES[] = {
   "Bug",
   "Dark",
   "Dragon",
   "Electric",
   "Fairy",
   "Fighting",
   "Fire",
   "Flying",
   "Ghost",
   "Grass",
   "Ground",
   "Ice",
   "Normal",
   "Poison",
   "Psychic",
   "Rock",
   "Steel",
   "Water"};

struct _list {
   struct Pkmn *head;
   int numNodes;
};

struct _pkmn {
    int id;
    char name[PKMN_NAME_LENGTH];
    double height;
    double weight;
    int type1;
    int type2;
    struct Pkmn *next;
    struct Pkmn *prev;
    int found; // A flag that shows whether the pokemon is
    // already in the pokedex
};

const char * getTypeString(int i) {
   return TYPES[i];
}

Pkmn createPkmn(int id, char * name, double height, double weight, 
  int type1, int type2, int found) {
    Pkmn pokemon = malloc(sizeof(Pkmn));
    if (pokemon == NULL){
        printf("Out of memory\n");
        exit(EXIT_FAILURE);
    }

    scanf("%d\n", &(pokemon->id);

    scanf("%s\n", pokemon->name); 
    scanf("%f\n", &(pokemon->height);
    scanf("%f\n", &(pokemon->weight);
    scanf("%d\n", &(pokemon->type);
    scanf("%d\n", &pokemon.type2);

      if(type2<type1){ 
        //The types were initalised by order of scanning,
        //but we wish to ensure they are in alphabetical order, as organised
        //in the type array*
        int temp = pokemon->type2;
        pokemon->type2=pokemon->type1;
        pokemom->type1= temp; // Creates a temporary variable to hold
        // type2 in order to set type 1 as the original type 2 after
        // type 2 has been reassigned the value held in type 1
      }
    return pokemon;
} 

void printCurrentPkmn(PkmnList list) {

  if (list->head == NULL){
      printf("There are no Pokemon to print");
      exit(EXIT_FAILURE);
  }

  printf("Id: %03d\n", pokemon->id);
  if (list->head->found == UNFOUND) {
      head->found = TRUE;
      printf("Name: %s\n", list->head->name);
      printf("Height: --\n");
      printf("Weight: --\n");
      printf("Type: --\n");

  } else {
      int i = 0;
      while (name != NULL){
          name[i] = "*";
          i++;
      }
      printf("Name: %s\n", list->head->name);
      printf("Height: %.2f\n",list->head->height);
      printf("Weight: %.2f\n",list->head->weight);
      if (type2 == NO_TYPE) {
          printf("Type: %s\n", getTypeString(list->head->type1));
      } else {
          printf("Type %s/%s\n", getTypeString(list->head->type1), 
            getTypeString(list->head->type2));
      }
  }
}

PkmnList createPkmnList() {
    PkmnList list = malloc(sizeof(struct PkmnList));
    if (list == NULL) {
        printf("Out of memory\n");
        exit(EXIT_FAILURE);
    }

    list->head = NULL;
    list->numberOfNewPkmn = 0;

    return list;
}

void freePkmnList(PkmnList list) {
    assert(list!=NULL);
    Pkmn cur = list->head;
    Pkmn prev = NULL;
    while (cur != NULL) {
        prev = cur;
        cur = cur->next;
        free(prev);
      }
    free(list);
}

void addPkmnToList(PkmnList list, Pkmn pkmn) {
    assert (list != NULL);
    if(list->numNodes == 0){ // EMPTY LIST
        list->head = pkmn;
    } else {
        Pkmn cur = list->head; // Sets current to head of list
        int i;
        for (i = 1, i < list->numNodes, i++){
            cur = cur->next; // Keeps going through until the final node is raached
        }
        cur->next = pkmn;
    }
    list->numNodes++;
}

void printPkmnList(PkmnList list) {
   assert(list!=NULL);
   Pkmn cur = list->head;
   if(list->numNodes == 0){
        printf("No Pokemon in list.\n");
    } else {
        while (cur != NULL) {
            if (cur->prev == NULL) {
              printf("--> #%3d: %s\n", list->cur->id, 
                list->cur->name); 
            } else {
              printf("    #%3d: %s\n", list->cur->id,
                list->cur->name);
            }
            cur = cur->next;
        }
   }
}

void nextPkmn(PkmnList list) {
    if (list->head->next != NULL) {}
        Pkmn cur = list->head;
        cur = cur->next;
}

void prevPkmn(PkmnList list) {
    if (list->head->prev != NULL) {
        Pkmn cur = list->head;
        cur = cur->prev;
    }
}
/*
void jumpToPkmn(PkmnList list, int id) {
    int temp;
    scanf("%d",&temp)

    id = list->head->id;
} 
*/
void removePkmn(PkmnList list) {
    if (list->numNodes == 1) {
        free(list->head);
    } else if(list->numNodes > 1){
        Pkmn cur = list->head;
        Pkmn prev = NULL;
        while (cur != NULL) {
            prev = cur;
            cur = prev->next;
            free(prev);
        }
    } else if (list->numNodes == 0) { // No pokemon to delete
        printf("No Pokemon in list.\n");
    }

}
/*
// Stage 3 Functions
void findPkmn(int seed, int factor, int numberOfNewPkmn, PkmnList list) {
    factor = 151;
    seed = rand()%factor+1; // makes 1-151 rather than 0-150



}

int totalFound(PkmnList list) {
    int length = 0;
    Pkmn curr = list->head;
    while (cur!=NULL){
        length++
        cur = cur-> next;
    }
   return length;
}

/*
// Stage 4 Functions
void addEvolution(PkmnList list, int pkmnId, int evolutionId) {
   // ADD YOUR CODE HERE
}

void showEvolutions(PkmnList list) {
   // ADD YOUR CODE HERE
}


// Stage 5 Functions
PkmnList getPkmnOfType(PkmnList list, int type) {
   assert(list != NULL);

   return NULL;
}

PkmnList getFoundPkmn(PkmnList list) {
   // ADD YOUR CODE HERE
   return NULL;
}

PkmnList searchByName(PkmnList list, char text[]) {
   // ADD YOUR CODE HERE
   return NULL;
}
*/

