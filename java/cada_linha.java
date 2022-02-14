import java.util.Locale;
import java.util.Scanner;

public class cada_linha {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, maior;
		
		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();
		
		int[][] matriz = new int[N][N];
		int[] vetor = new int[N];
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextInt();
			}
		}
		
		for (int i = 0; i < N; i++) {
				maior = matriz[i][0];
			for (int j = 1; j < N; j++) {
				if (matriz[i][j] > maior) {
					maior = matriz[i][j];
				}
			}
			vetor[i] = maior;
		}
		
		System.out.println("MAIOR ELEMENTO DE CADA LINHA: ");
		for (int i = 0; i < N; i++) {
			System.out.println(vetor[i]);
		}
		
		sc.close();
	}

}
