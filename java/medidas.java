import java.util.Locale;
import java.util.Scanner;

public class medidas {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, areaTri, areaQua, areaTrap;
		
		System.out.print("Digite a medida de A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida de B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida de C: ");
		c = sc.nextDouble();
		
		areaQua = a * a;
		areaTri = (a * b) / 2;
		areaTrap = ((a + b ) * c) / 2;
		
		System.out.println("AREA DO QUADRADO: " + String.format("%.4f", areaQua));
		System.out.println("AREA DO TRIANGULO: " + String.format("%.4f", areaTri));
		System.out.println("AREA DO TRAPEZIO: " + String.format("%.4f", areaTrap));
		
		sc.close();
	}

}
