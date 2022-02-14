import java.util.Locale;
import java.util.Scanner;

public class alturas {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, cont;
		double somaAltura, mediaAltura, porcentagem;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		N = sc.nextInt();
		
		String[] vetNome = new String[N];
		int[] vetIdade = new int[N];
		double[] vetAltura = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.println("Dados da " + String.format("%d", i + 1) + "a pessoa: ");
			System.out.print("Nome: ");
			vetNome[i] = sc.next();
			System.out.print("Idade: ");
			vetIdade[i] = sc.nextInt();
			System.out.print("Altura: ");
			vetAltura[i] = sc.nextDouble();
		}
		System.out.println();
		
		somaAltura = 0;
		for (int i = 0; i < N; i++) {
			somaAltura = somaAltura + vetAltura[i];			
		}
		
		mediaAltura = somaAltura / N;
		System.out.println("Altura média: " + String.format("%.2f", mediaAltura));
		
		cont = 0;
		for (int i = 0; i < N; i++) {
			if (vetIdade[i] < 16) {
				cont = cont + 1;
			}
		}
		
		porcentagem = ((double)cont / N) * 100.0;
		System.out.println("Pessoas com menos de 16 anos: " + 
				   String.format("%.1f", porcentagem) + "%");
		
		for (int i = 0; i < N; i++) {
			if (vetIdade[i] < 16) {
				System.out.println(vetNome[i]);
			}
		}
		
		sc.close();
	}

}
