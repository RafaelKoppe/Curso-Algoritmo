import java.util.Locale;
import java.util.Scanner;

public class numeros_pares {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, cont;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();
		
		int[] vet = new int[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		System.out.println();
		System.out.print("NUMEROS PARES: ");
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				System.out.print(vet[i] + " ");
			}
		}
		
		System.out.println();
		
		cont = 0;
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				cont = cont + 1;
			}
		}
		System.out.println("QUANTIDADE DE PARES = " + cont);
		
		sc.close();
	}

}
