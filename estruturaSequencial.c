#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
    //1. Faça um Programa que mostre a mensagem "Alo mundo" na tela. 

        printf("Hello World\n");


    //2. Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]
        int numero;

        printf("Insira um numero: ");
        scanf("%i", &numero);

        printf("O número inserido e %i\n", numero);
	

    //3. Faça um Programa que peça dois números e imprima a soma
        int n1, n2, soma;

        printf("Insira dois numeros: ");
        scanf("%i" "%i", &n1, &n2);

        soma = n1 + n2;

        printf("soma = %i\n", soma);
    

    //4. Faça um Programa que peça as 4 notas bimestrais e mostre a média
        int n1, n2, n3, n4;
        float media;

        printf("Insira as 4 notas bimestrais: ");
        scanf("%i" "%i" "%i" "%i", &n1, &n2, &n3, &n4);

        media = (n1 + n2 + n3 + n4) / 4.0;

        printf("media = %.2f\n", media);
    

    //5. Faça um Programa que converta metros para centímetros
        float metros, centimetros;

        printf("Insira a medida em metros: ");
        scanf("%f", &metros);

        centimetros = metros * 100.0;

        printf("centimetros: %.0fcm\n", centimetros);
        
    
    //6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área
        float raio, area;

        printf("Insira o raio do circulo: ");
        scanf("%f", &raio);

        area = 3.14 * raio * raio;

        printf("area = %.2f\n", area);
    

    //7. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário
        float lado, area, dobro;

        printf("Insira o lado do quadrado: ");
        scanf("%f", &lado);

        area = lado * lado;

        dobro = area * 2;

        printf("area = %.2f dobro = %.2f\n", area, dobro);
    

    //8. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês
        int ganhoHora, nHorasTrab, salario;

        printf("Insira o quanto ganha por hora e o numero de horas trabalhadas: ");
        scanf("%i" "%i", &ganhoHora, &nHorasTrab);

        salario = ganhoHora * nHorasTrab;

        printf("O salario este mes e %i\n", salario);
    

    //9. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius C = 5 * ((F-32) / 9).
        int tempF;
        float tempC;

        printf("Insira a temperatura em Fahrenheit: ");
        scanf("%i", &tempF);

        tempC = 5 * ((tempF - 32) / 9.0);

        printf("%iF = %.0fC", tempF, tempC);
    

    //10. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit
        int tempC;
        float tempF;

        printf("Insira a temperatura em Celsius: ");
        scanf("%i", &tempC);

        tempF = ((tempC * 9) / 5.0) + 32;

        printf("%iC = %.0fF", tempC, tempF);
    

    //11. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
        int i1, i2;
        float nR;

        printf("Insira 2 numeros inteiros e um real: ");
        scanf("%i" "%i" "%f", &i1, &i2, &nR);

            //a) o produto do dobro do primeiro com metade do segundo
            int dobro;
            float metade, produto;

            dobro = 2 * i1;
            metade = i2 / 2.0;
            produto = dobro * metade;
            printf("A) dobro = %i | metade = %.1f | produto = %.1f\n", dobro, metade, produto);

            //b) a soma do triplo do primeiro com o terceiro
            int triplo;
            float soma;

            triplo = 3 * i1;
            soma = triplo + nR;
            printf("B) triplo = %i | soma = %.2f\n", triplo, soma);

            //c) o terceiro elevado ao cubo
            float cubo;

            cubo = nR * nR* nR;
            printf("C) cubo = %.2f\n", cubo);


    //12. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58 
        float altura, peso;

        printf("Insira a sua altura em metros: ");
        scanf("%f", &altura);

        peso = (72.7 * altura) - 58;

        printf("O seu peso ideal e %.0fkg", peso);
    

    //13. Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
        float altura, pesoH, pesoM;

        printf("Insira a altura em metros: ");
        scanf("%f", &altura);

        //a) Para homens: (72.7*h) - 58 
            pesoH = (72.7 * altura) - 58;

        //b) Para mulheres: (62.1*h) - 44.7 
            pesoM = (62.1 * altura) - 44.7;

        printf("O peso ideal para homens e %.0fkg e para mulheres e %.0fkg", pesoH, pesoM);
    

   //14. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
    //Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. 
   //João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. 
   //Imprima os dados do programa com as mensagens adequadas.
        float peso;
        float excesso = 0.0;
        float multa = 0.0;

        scanf("%f", &peso);

        if(peso > 50.0){
            excesso = peso - 50.0;
            multa = 4.0 * excesso;
        }

        printf("O peso excedente e %.1f e a multa e %.1f", excesso, multa);


    //15. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
    //Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato
        float ganhoHora, nHorasTrab;

        printf("Insira o quanto ganha por hora e o numero de horas trabalhadas: ");
        scanf("%f" "%f", &ganhoHora, &nHorasTrab);

        //a) salário bruto
        float salario = ganhoHora * nHorasTrab;

        printf("O salario bruto este mes e %.1f\n", salario);

        //b) quanto pagou ao INSS (8%)
        float inss, impostoRenda;

        impostoRenda = salario * 0.11;
        salario = salario - impostoRenda;

        inss = salario * 0.08;

        salario = salario - inss;

        printf("Este mes pagou %.1f ao INSS\n", inss);

        //c) quanto pagou ao sindicato (5%)
        float sindicato;

        sindicato = salario * 0.05;

        salario = salario - sindicato;

        printf("Este mes pagou %.1f ao sindicato\n", sindicato);

        //d) o salário líquido

        printf("O salario liquido este mes e %.1f\n", salario);
        
    
    //16. Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
    //Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
    //Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total. 
        float area, totalLitros, nLatas, preco;

        printf("Insira a area em metros quadrados: ");
        scanf("%f", &area);

        totalLitros = area / 3.0;

        nLatas = totalLitros / 18.0;

        preco = nLatas * 80.0;

        printf("Sao necessarias %.1f latas, com um total de R$ %.2f", nLatas, preco);
    

    //17. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
    //Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados 
    //e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00. 
    //Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
        float area, totalLitros, nLatas, preco;

        printf("Insira a area em metros quadrados: ");
        scanf("%f", &area);

        totalLitros = area / 6.0;
       
        //a) comprar apenas latas de 18 litros
            nLatas = totalLitros / 18.0;

            preco = nLatas * 80.0;

            printf("Sao necessarias %.1f latas de 18L cada, com um total de R$ %.2f\n", nLatas, preco);

        //b) comprar apenas galões de 3,6 litros
            nLatas = totalLitros / 3.6;

            preco = nLatas * 25.0;

            printf("Sao necessarios %.1f galoes de 3.6L cada, com um total de R$ %.2f", nLatas, preco);
    

    //18. Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps)
    //calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
        int tamanho, velocidade;
        float tempoS, tamanhoMb, tempoM;

        printf("Insira o tamanho do arquivo em MB e a velocidade da Internet em Mbps: ");
        scanf("%i" "%i", &tamanho, &velocidade); 

        tamanhoMb = tamanho * 8.0;

        tempoS = tamanhoMb / velocidade;

        tempoM = tempoS / 60.0;

        printf("O download do ficheiro vai demorar %.1f minutos", tempoM);

	return 0;
}