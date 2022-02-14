import java.util.Locale;
import java.util.Scanner;

public class soma_matrizes {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int M, N;
		
		System.out.print("Quantas linhas vai ter cada matriz? ");
		M = sc.nextInt();
		System.out.print("Quantas colunas vai ter cada matriz?");
		N = sc.nextInt();
		
		int[][] matrizA = new int[M][N];
		int[][] matrizB = new int[M][N];
		int[][] matrizC = new int[M][N];
		
		System.out.println("Digite os valores da matriz A: ");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matrizA[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Digite os valores da matriz B: ");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matrizB[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("MATRIZ SOMA: ");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
				System.out.print(matrizC[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}

}
