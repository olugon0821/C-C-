#include <stdio.h>
#include <string.h>

int main() {

FILE * fp = fopen("input.txt","wt");

    fputs("Hello World!",fp);
    fclose(fp);

FILE * search = fopen("input.txt","rt");
char hw[100];
    fgets(hw,sizeof(hw),search);
    fclose(search);

FILE * out = fopen("output.txt","wt");
for (int i = strlen(hw)-1; i >= 0 ; i--) {
        fprintf(search,"%c",hw[i]);
    }
    fclose(out);

return 0;
}
