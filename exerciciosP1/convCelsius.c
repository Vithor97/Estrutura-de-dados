#include<stdio.h>

float grausCelsius(float grauF){
  float Celsius;
  Celsius = (grauF - 32)/1.8;
  return Celsius;
}
float grausFahrenheit(float grauC){
  float Fahrenheit;
  Fahrenheit = (grauC * 1.8)+32;
  return Fahrenheit;
}

int main(){

 float numF,numC;
 int i;

  printf("Digite 1 para C e 2 para F, -1 sai: ");
  scanf("%d",&i);

  while(i!=-1){
  if(i==1){
  printf("\n\ndigite a temperatura em graus Celsius: ");
  scanf("%f",&numC);
  printf("\nA temperatura em Fahrenheit é de: %1.f",grausFahrenheit(numC));
}
 else if(i==2){
  printf("digite a temperatura em graus Fahrenheit: ");
  scanf("%f",&numF);
  printf("\nA temperatura em Celsius é de: %1.f",grausCelsius(numF));
}
  printf("\n\nDigite 1 para C e 2 para F, -1 sai: ");
  scanf("%d",&i);
  }
return 0;
}
