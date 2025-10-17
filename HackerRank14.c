#include <stdio.h>
#include <string.h>

int main() {
    static char sentence[200000];
    
    if (fgets(sentence, sizeof(sentence), stdin) == NULL){
	return 0;
	}
    
    sentence[strcspn(sentence, "\r\n")] = '\0';
    
    char *lim = " \t\r\n";
    char *word = strtok(sentence, lim);
    
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, lim);
    }
    return 0;
}


