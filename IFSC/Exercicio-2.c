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

	inteiro base, expoente, contador = 1, resultado = 0;

	escreva ("Informe o valor da base e expoente, respectivamente: ");
	leia (base);
	leia (expoente);


		se ( expoente == 0) {

			resultado = 1;

			escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);
		}

		senao {

			se ( expoente < 0) {

			escreva ("Aí é raíz quadrada. Me ajude!");
		}
		
		 senao {

			se ( expoente == 1) {

			resultado = base

			escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);
			
			} 

			senao {
				
				enquanto ( contador < expoente ) {

					se ( contador == 1 ) {

						resultado = base * base;
						contador = contador + 1;
					}

					senao {

						resultado = resultado * base;
						contador = contador + 1;
						
					}
					
				}

				escreva ("\nO valor da base ", base, " elevado ao expoente ", expoente, " é igual a: ", resultado);
			}

				
		}

	}

}
}

## e) a * b^c

programa
{

	funcao inicio () {

	inteiro a, b, c, bElevadoC = 0, contador = 1, resultado = 0;

	escreva ("Informe o valor de A, B e C, respectivamente: ");
	leia (a);
	leia (b);
	leia (c);


		se ( c == 0) {

			bElevadoC = 1;

			resultado = a * bElevadoC;

			escreva ("\nResultado de A * B elevado a C é igual: ", resultado);

		}

		senao {

			se ( c < 0) {

			escreva ("Aí é raiz de B sobre C. Me ajude!");
		}
		
		 senao {

			se ( c == 1) {

			bElevadoC = b;
			resultado = a * b;

			escreva ("\nResultado de A * B elevado a C é igual: ", resultado);
			
			} 

			senao {
				
				enquanto ( contador < c ) {

					se ( contador == 1 ) {

						bElevadoC = b * b;
						contador = contador + 1;
					}

					senao {

						bElevadoC = bElevadoC * b;
						contador = contador + 1;
						
					}
					
				}
				
				resultado = a * bElevadoC;
				
				escreva ("\nResultado de A * B elevado a C é igual: ", resultado);
			}

				
		}

	}

		

	
		
	
}
}
