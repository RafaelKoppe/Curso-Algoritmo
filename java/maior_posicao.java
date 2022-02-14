import java.util.Locale;
import java.util.Scanner;

public class maior_posicao {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, posicao;
		double maior;
		
		System.out.print("Quanto numeros voce vai digitar? ");
		n = sc.nextInt();
		
		double[] vetor = new double[n];
		
		for (int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vetor[i] = sc.nextDouble();
		}
		
		maior = vetor[0];
		posicao = 0;
		for (int i = 1; i < n; i++) {
			if(vetor[i] > maior) {
				maior = vetor[i];
				posicao = i;
			}
		}
		
		System.out.println();
		System.out.println("MAIOR VALOR = " + String.format("%.1f", maior));
		System.out.println("POSICAO DO MAIOR VALOR = " + posicao);	
		
		sc.close();
	}

}
