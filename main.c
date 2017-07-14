#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Pkmn.h"

void printMenu();

int main(int argc, char * argv[]) {

   PkmnList list = createPkmnList();
   Pkmn pokemon;
   *id = NULL;
   *name = NULL;
   *height = NULL;
   *weight = NULL;
   *type1 = NO_TYPE;
   *type2 = NO_TYPE;

   callRand(); 
   printMenu();

   char selection;
   scanf(" %c", &selection);
   while(selection != 'q') {
      if(selection == 'a') {
            pokemon = createPkmn(id, *name, height, 
            weight, type1, type2);
           // if(pokemon->found == FALSE){
            addPkmnToList(list, poke1);
        // }
      } else if (selection == 'p') {
         printPkmnList(list);
      } else if (selection == 'd') {
         printCurrentPkmn(list);
      } else if (selection == 'f') {
         findPkmn(seed, factor, numberOfNewPkmn, list);
      } else if (selection == '>'){
         nextPkmn(list);
      } else if (selection == '<'){
         prevPkmn(list);
      } else if (selection == 'e'){
         addEvolution(list, id);
      } else if (selection == 'j'){
          jumpToPkmn(list, id);
      } else if (selection == 'r'){
          removePkmn(list);
      } else if (selection == 'c'){
         int i = 0;
         while ()

      } else if (selection == 's') {
          showEvolution(list);
      } else {
          printf("Invalid selection\n");
          exit(EXIT_FAILURE);
      }
      printMenu();
      scanf("%c", &selection);
   }

   freePkmnList(list);

   return EXIT_SUCCESS;
}

void printMenu() {

   printf("a - Add a Pokemon to the list\n");
   printf("p - Print list\n");
   printf("d - Display details of the current Pokemon\n");
   printf("> - Move to the next Pokemon\n");
   printf("< - Move to the previous Pokemon\n");
   printf("j - Jump to a specific Pokemon\n");
   printf("r - Remove the current Pokemon\n");
   printf("f - Find Pokemon\n");
   printf("c - Count the number of Pokemon which have been found\n");
   printf("e - Add an evolution to a Pokemon\n");
   printf("s - Show the evolutions of the current Pokemon\n");
   printf("q - Quit\n");
}

void callRand(){
  srandom(time(NULL));
}