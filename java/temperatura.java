import java.util.Locale;
import java.util.Scanner;

public class temperatura {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double c, f;
		char temperatura;
		
		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		temperatura = sc.next().charAt(0);
		
		if (temperatura == 'f') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			f = sc.nextDouble();
			c = 5 * (f - 32) / 9;
			System.out.println("Temperatura equivalente em Celsius: " + String.format("%.2f", c));
		} else {
			System.out.print("Digite a temperatura em Celsius: ");
			c = sc.nextDouble();
			f = (9 * c / 5) + 32;
			System.out.println("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", f));
		}
		
		sc.close();
	}

}
