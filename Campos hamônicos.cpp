#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int rep;
	char mt [4];
	
	//tela inicial
	printf ("                        Campo harmônico menor e maior\n\n");
	printf ("                                   Tom:   \n                             N° de acidentes: 0\n\n");
	printf ("                               Dó      |   C \n");
	printf ("                               Ré      |   D \n");
	printf ("                               Mi      |   E \n");
	printf ("                               Fá      |   F \n");
	printf ("                               Sol     |   G \n");
	printf ("                               Lá      |   A \n");
	printf ("                               Si      |   B \n\n");
	printf ("                              Menor    |   m \n");
	printf ("                             Diminuto  |   ° \n");
	printf ("                            Sustenido  |   # \n");
	printf ("                              Bemol    |   @ \n\n");
	
	for(rep=0;rep==0;rep++){
		printf("Mude o tom para maior ou menor com acidentes:");
		scanf(" %3s",&mt);
			
		//campo hamonico maior
		if (strcmp(mt, "C") == 0 || strcmp(mt, "c") == 0 || strcmp(mt, "B#") == 0 || strcmp(mt, "b#") == 0){
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: C \n                             N° de acidentes: 0\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si   °  |   B° \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
		if (strcmp(mt, "C#") == 0 || strcmp(mt, "c#") == 0 || strcmp(mt, "D@") == 0 || strcmp(mt, "d@") == 0){
     	   rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                Tom: C# ou Db \n                             N° de acidentes: 7\n\n");
			printf ("                               Dó #    |   C# \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Mi # m  |   E#m \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol#    |   G# \n");
			printf ("                               Lá # m  |   A#m \n");
			printf ("                               Si # °  |   B#° \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
        if (strcmp(mt, "D") == 0 || strcmp(mt, "d") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: D \n                             N° de acidentes: 2\n\n");
			printf ("                               Dó # °  |   C#° \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
		if (strcmp(mt, "D#") == 0 || strcmp(mt, "d#") == 0 || strcmp(mt, "E@") == 0 || strcmp(mt, "e@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                Tom: D# ou Eb \n                             N° de acidentes: 3\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré   °  |   D° \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá   m  |   Fm \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá b    |   Ab \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
        if (strcmp(mt, "E") == 0 || strcmp(mt, "e") == 0 || strcmp(mt, "F@") == 0 || strcmp(mt, "f@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: E \n                             N° de acidentes: 4\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré # °  |   D#° \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
		if (strcmp(mt, "F") == 0 || strcmp(mt, "f") == 0 || strcmp(mt, "E#") == 0 || strcmp(mt, "e#") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: F \n                             N° de acidentes: 1\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi   °  |   E° \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        if (strcmp(mt, "F#") == 0 || strcmp(mt, "f#") == 0 || strcmp(mt, "G@") == 0 || strcmp(mt, "g@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                Tom: F# ou Gb \n                             N° de acidentes: 5\n\n");
			printf ("                               Dó #    |   C# \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Fá   °  |   F° \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá # m  |   A#m \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
        if (strcmp(mt, "G") == 0 || strcmp(mt, "g") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: G \n                             N° de acidentes: 1\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá # °  |   F#° \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        if (strcmp(mt, "G#") == 0 || strcmp(mt, "g#") == 0 || strcmp(mt, "A@") == 0 || strcmp(mt, "a@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                Tom: G# ou Ab \n                             N° de acidentes: 4\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré b    |   Db \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá   m  |   Fm \n");
			printf ("                               Sol  °  |   G° \n");
			printf ("                               Lá b    |   Ab \n");
			printf ("                               Si b m  |   Bbm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
        if (strcmp(mt, "A") == 0 || strcmp(mt, "a") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: A \n                             N° de acidentes: 3\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol# °  |   G#° \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        if (strcmp(mt, "A#") == 0 || strcmp(mt, "a#") == 0 || strcmp(mt, "B@") == 0 || strcmp(mt, "b@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                Tom: A# ou Bb \n                             N° de acidentes: 2\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá   °  |   A° \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
        
        if (strcmp(mt, "B") == 0 || strcmp(mt, "b") == 0 || strcmp(mt, "C@") == 0 || strcmp(mt, "c@") == 0) {
            rep--;
            system("cls");

			printf ("                                  Tom maior\n\n");
			printf ("                                   Tom: B \n                             N° de acidentes: 5\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá # °  |   A#° \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
        }
		
		//campo hamonico menor
		if (strcmp(mt, "Cm") == 0 || strcmp(mt, "cm") == 0 || strcmp(mt, "B#m") == 0 || strcmp(mt, "b#m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Cm \n                             N° de acidentes: 3\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré   °  |   D° \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá   m  |   Fm \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá b    |   Ab \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		if (strcmp(mt, "C#m") == 0 || strcmp(mt, "c#m") == 0 || strcmp(mt, "D@m") == 0 || strcmp(mt, "b@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                               Tom: C#m ou Dbm \n                             N° de acidentes: 4\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré # °  |   D#° \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Dm") == 0 || strcmp(mt, "dm") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Dm \n                             N° de acidentes: 1\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi   °  |   E° \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		if (strcmp(mt, "D#m") == 0 || strcmp(mt, "d#m") == 0 || strcmp(mt, "E@m") == 0 || strcmp(mt, "e@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                               Tom: D#m ou Ebm \n                             N° de acidentes: 6\n\n");
			printf ("                               Dó #    |   C# \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Mi # °  |   E#° \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá # m  |   A#m \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Em") == 0 || strcmp(mt, "em") == 0 || strcmp(mt, "F@m") == 0 || strcmp(mt, "f@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Em \n                             N° de acidentes: 1\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá # °  |   F#° \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Fm") == 0 || strcmp(mt, "fm") == 0 || strcmp(mt, "E#m") == 0 || strcmp(mt, "e#m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Fm \n                             N° de acidentes: 4\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré b    |   Db \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá   m  |   Fm \n");
			printf ("                               Sol  °  |   G° \n");
			printf ("                               Lá b    |   Ab \n");
			printf ("                               Si b m  |   Bbm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		if (strcmp(mt, "F#m") == 0 || strcmp(mt, "f#m") == 0 || strcmp(mt, "G@m") == 0 || strcmp(mt, "g@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                               Tom: F#m ou Gbm \n                             N° de acidentes: 3\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol# °  |   G#° \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Gm") == 0 || strcmp(mt, "gm") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Gm \n                             N° de acidentes: 2\n\n");
			printf ("                               Dó   m  |   Cm \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi b    |   Eb \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol  m  |   Gm \n");
			printf ("                               Lá   °  |   A° \n");
			printf ("                               Si b    |   Bb \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		if (strcmp(mt, "G#m") == 0 || strcmp(mt, "g#m") == 0 || strcmp(mt, "A@m") == 0 || strcmp(mt, "a@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                               Tom: G#m ou Abm \n                             N° de acidentes: 5\n\n");
			printf ("                               Dó # m  |   C#m \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Mi      |   E \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol# m  |   G#m \n");
			printf ("                               Lá # °  |   A#° \n");
			printf ("                               Si      |   B \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Am") == 0 || strcmp(mt, "am") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Am \n                             N° de acidentes: 0\n\n");
			printf ("                               Dó      |   C \n");
			printf ("                               Ré   m  |   Dm \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá      |   F \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá   m  |   Am \n");
			printf ("                               Si   °  |   B° \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		if (strcmp(mt, "A#m") == 0 || strcmp(mt, "a#m") == 0 || strcmp(mt, "B@m") == 0 || strcmp(mt, "b@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                               Tom: A#m ou Bbm \n                             N° de acidentes: 7\n\n");
			printf ("                               Dó #    |   C# \n");
			printf ("                               Ré # m  |   D#m \n");
			printf ("                               Mi # m  |   E#m \n");
			printf ("                               Fá #    |   F# \n");
			printf ("                               Sol#    |   G# \n");
			printf ("                               Lá # m  |   A#m \n");
			printf ("                               Si # °  |   B#° \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		
		if (strcmp(mt, "Bm") == 0 || strcmp(mt, "bm") == 0 || strcmp(mt, "C@m") == 0 || strcmp(mt, "c@m") == 0){
			rep--;
			system ("cls");
			
			printf ("                                  Tom menor\n\n");
			printf ("                                   Tom: Bm \n                             N° de acidentes: 2\n\n");
			printf ("                               Dó # °  |   C#° \n");
			printf ("                               Ré      |   D \n");
			printf ("                               Mi   m  |   Em \n");
			printf ("                               Fá # m  |   F#m \n");
			printf ("                               Sol     |   G \n");
			printf ("                               Lá      |   A \n");
			printf ("                               Si   m  |   Bm \n\n");
			printf ("                              Menor    |   m \n");
			printf ("                             Diminuto  |   ° \n");
			printf ("                            Sustenido  |   # \n");
			printf ("                              Bemol    |   @ \n\n");
		}
		}
	}
