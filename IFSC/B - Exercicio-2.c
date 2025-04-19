2. Escreva em pseudocódigo, as seguintes expressões matemáticas:
##  a) (A + B) * C

Programa
{

funcao inicio ()
{

real A, B, C, Total;

Escreva ("Insira Valor de A, B e C respectivamente");

Leia (A);
Leia (B);
Leia (C);

Total <- (A + B) * C

Escreva ("Valor total da Expressão (A + B) * C é: ", Total)

Final

}

}

## b) TOTAL / N

Programa
{

funcao inicio ()
{

real A, B, TOTAL, N;

Escreva ("Insira Valor de A, B e N respectivamente");

Leia (A);
Leia (B);
Leia (N);

TOTAL <- (A + B);

TOTAL <- TOTAL / N;

Escreva ("Valor total da Expressão TOTAL / N é: ", TOTAL)

Final

}

}

## c) A - B (C + D²) / E


Programa
{

funcao inicio ()
{

real A, B, C, D, E, Total;

Escreva ("Insira Valor de A, B, C, D, E respectivamente");

Leia (A);
Leia (B);
Leia (C);
Leia (D);
Leia (E);


Total <- A - [B(C + D * D)]/E

Escreva ("Valor total da Expressão A - B (C + D²) / E é: ", Total)

Final

}

}

## d) base^exponente

programa
{

	funcao inicio () {

	inteiro expoente, contador = 0;
	real base, resultado = 1.0;

	escreva ("Informe o valor da base e expoente, respectivamente: ");
	leia (base);
	leia (expoente);


		se ( expoente == 0) {
			escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);
		}
		senao se ( expoente > 0 ) {				
			enquanto ( contador < expoente ) {
				resultado = resultado * base;
				contador = contador + 1;
			}
			escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);
		}
		senao {
			enquanto ( contador > expoente ) {
				resultado = resultado * 1 / base;
				contador = contador - 1;
			}
			escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);	
			}
		}	
}

## e) a * b^c

programa
{
	funcao inicio () {

	inteiro c, contador = 0;
	real b, a, bElevadoc = 1.0, resultado = 1.0;

	escreva ("Informe o valor de a, b, c, respectivamente: ");
	leia (a);
	leia (b);
	leia (c);

		
		se ( c == 0) {
			resultado = a*bElevadoc;
			escreva ("\nO valor de a*b^c é igual a: ", resultado);
		}
		senao se ( c > 0 ) {				
			enquanto ( contador < c ) {
				bElevadoc = bElevadoc * b;
				contador = contador + 1;
			}
			resultado = a*bElevadoc;
			escreva ("\nO valor de a*b^c é igual a: ", resultado);
		}
		senao {
			enquanto ( contador > c ) {
				bElevadoc = bElevadoc * 1 / b;
				contador = contador - 1;
			}
			resultado = a*bElevadoc;
			escreva ("\nO valor de a*b^c é igual a: ", resultado);	
			}
		}		
}
