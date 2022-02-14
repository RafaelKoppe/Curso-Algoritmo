import java.util.Locale;
import java.util.Scanner;

public class circulo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double r, area;
		
		System.out.print("Digite o valor do raio do circulo: ");
		r = sc.nextDouble(); 
		
		area = Math.PI * Math.pow(r, 2);
		System.out.print("AREA: " + String.format("%.3f", area));
		
		sc.close();
	}

}
