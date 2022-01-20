#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int pessoas = 0;
  int carros = 10;
  int minutosaberto = 0;
  int voltasminutos = 35;
  struct tm * data_hora_atual;
  time_t segundos;
  time(&segundos);
  data_hora_atual = localtime(&segundos);

   printf("Diga Quantas pessoas têm no park: >>> ");
   scanf("%i", &pessoas);

   minutosaberto = pessoas * voltasminutos / carros;
  int horas = minutosaberto / 60;
   printf("Vc precisará dficar aberto durante %i minutos ou seja %i horas!!:", minutosaberto, horas);

   printf("\nDia............: %i\n", data_hora_atual->tm_mday);
   printf("\nMês............: %i\n", data_hora_atual->tm_mon+1);
   printf("\nAno............: %i\n", data_hora_atual->tm_year+1900);
   printf("\n O dia do ano..: %i\n", data_hora_atual->tm_yday);
   printf("\nO dia da semana: %i\n", data_hora_atual->tm_wday);
   printf("\nAs horas são %i horas e %i minutos e %i segundos!! \n", data_hora_atual->tm_hour, data_hora_atual->tm_min, data_hora_atual->tm_sec);
   printf("\nData ........: %d/", data_hora_atual->tm_mday);
   printf("%d/",data_hora_atual->tm_mon+1); //mês
   printf("%d\n\n",data_hora_atual->tm_year+1900);
  
  return 0;
}