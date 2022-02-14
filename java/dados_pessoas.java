import java.util.Locale;
import java.util.Scanner;

public class dados_pessoas {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, nHomens, contM = 0;
		double maior, menor, somaM = 0, media;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		n = sc.nextInt();
		
		double[] altura = new double[n];
		char[] genero = new char[n];
		
		for (int i = 0; i < n; i++) {
			System.out.print("Altura da " + (i + 1) + "a pessoa: ");
			altura[i] = sc.nextDouble();
			System.out.print("Genero da " + (i + 1) + "a pessoa: ");
			genero[i] = sc.next().charAt(0);
		}
		
		menor = altura[0];
		for (int i = 1; i < n; i++) {
			if (altura[i] < menor) {
				menor = altura[i];
			}
		}
		
		System.out.println("Menor altura = " + menor);
		
		maior = altura[0];
		for (int i = 1; i < n; i++) {
			if (altura[i] > maior) {
				maior = altura[i];
			}
		}
		
		System.out.println("Maior altura = " + maior);
		
		for (int i = 0; i < n; i++) {
			if (genero[i] == 'F') {
				somaM = somaM + altura[i];
				contM = contM + 1;
			}
		}
		
		media = somaM / contM;
		System.out.println("Media das alturas das mulheres = " + String.format("%.2f", media));
		
		nHomens = n - contM;
		System.out.println("Numero de homens = " + nHomens);
		
		sc.close();
	}

}
