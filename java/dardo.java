import java.util.Locale;
import java.util.Scanner;

public class dardo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double dardo1, dardo2, dardo3, maior;
		
		System.out.println("Digite as tres distancias: ");
		dardo1 = sc.nextDouble();
		dardo2 = sc.nextDouble();
		dardo3 = sc.nextDouble();
		
		if (dardo1 > dardo2 && dardo1 > dardo3) {
			maior = dardo1;
		} else if (dardo2 > dardo3) {
			maior = dardo2;
		} else {
			maior = dardo3;
		}
		
		System.out.println("MAIOR DISTANCIA = " + String.format("%.2f", maior));
		
		sc.close();
	}

}
