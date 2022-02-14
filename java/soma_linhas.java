import java.util.Locale;
import java.util.Scanner;

public class soma_linhas {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int M, N;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		M = sc.nextInt();
		System.out.print("Qual a quantidade de colunas da matriz? ");
		N = sc.nextInt();
		
		double[][] matriz = new double[M][N];
		double[] vetor = new double[M];
		
		for (int i = 0; i < M; i++) {
			System.out.println("Digite os elementos da " + (i + 1) + "a. linha: ");
				for (int j = 0; j < N; j++) {
					matriz[i][j] = sc.nextDouble();
				}
		}
		
		vetor[0] = 0;
		System.out.println("VETOR GERADO: ");
		for (int i = 0; i < M; i++) {
				for (int j = 0; j < N; j++) {
					vetor[i] = vetor[i] + matriz[i][j]; 
			}
			System.out.println(vetor[i]);
		}
		
		sc.close();
	}

}
