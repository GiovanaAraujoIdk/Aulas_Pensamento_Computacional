#include <stdio.h>
int main() {
for (int i = 1; i <= 10; i++) {
if (i == 7) {
continue; // Pula o printf abaixo e vai direto para i++
}
printf("Numero: %d\n", i);
}
return 0;
}