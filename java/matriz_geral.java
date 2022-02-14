import java.util.Locale;
import java.util.Scanner;

public class matriz_geral {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, l, c;
		double somaMatriz = 0;
		
		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();
		
		double[][] matriz = new double[N][N];
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextDouble();
			}
		}
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (matriz[i][j] > 0) {
					somaMatriz = somaMatriz + matriz[i][j];
				}
			}
		}
		System.out.println();
		System.out.println("SOMA DOS POSITIVOS: " + String.format("%.1f", somaMatriz));
		
		System.out.println();
		System.out.println();
		System.out.print("Escolha uma linha: ");
		l = sc.nextInt();
		
		System.out.print("LINHA ESCOLHIDA: ");
		for (int j = 0; j < N; j++) {
			System.out.print(matriz[l][j] + " ");
		}
		
		System.out.println();
		System.out.println();
		System.out.print("Escolha uma coluna: ");
		c = sc.nextInt();
		
		System.out.print("LINHA ESCOLHIDA: ");
		for (int i = 0; i < N; i++) {
			System.out.print(matriz[i][c] + " ");
		}
		
		System.out.println();
		System.out.println();
		System.out.print("DIAGONAL PRINCIPAL: ");
		for (int i = 0; i < N; i++) {
			System.out.print(matriz[i][i] + " ");
		}
		
		System.out.println();
		System.out.println();
		System.out.println("MATRIZ ALTERADA: ");
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (matriz[i][j] < 0) {
					matriz[i][j] = Math.pow(matriz[i][j], 2);
				}
				System.out.print(matriz[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}

}
