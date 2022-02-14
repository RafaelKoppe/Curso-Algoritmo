import java.util.Locale;
import java.util.Scanner;

public class glicose {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double glicose;
		
		System.out.print("Digite a medida da glicose: ");
		glicose = sc.nextDouble();
		
		if (glicose <= 100.0) {
			System.out.println("Classificação: normal");
		} else if (glicose <= 140.0 ) {
			System.out.println("Classificação: Elevado");
		} else {
			System.out.println("Classificação: Diabetes");
		}
		
		sc.close();
	}

}
