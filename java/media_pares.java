import java.util.Locale;
import java.util.Scanner;

public class media_pares {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, somapar,npares;
		double media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		int[] vet = new int[n]; //Representação do vetor
		
		for (int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		
		somapar = 0;
		npares = 0;
		for (int i = 0; i < n; i++) {
			if (vet[i] % 2 == 0) {
				somapar = somapar + vet[i];
				npares = npares + 1;
			}
		}
		
		if (npares == 0) {
			System.out.println("NENHUMA NUMERO PAR");			
		} else {
			media = (double) somapar / npares;
			System.out.print("MEDIA DOS PARES = " + String.format("%.1f", media));
		}
		
		sc.close();
	}

}
