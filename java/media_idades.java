import java.util.Locale;
import java.util.Scanner;

public class media_idades {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int idades, cont;
		double media, somaIdades;
		
		System.out.println("Digite as idades: ");
		idades = sc.nextInt();
		
		cont = 0;
		somaIdades = 0;
			while (idades > 0) {
				cont = cont + 1;
				somaIdades = somaIdades + idades;
				idades = sc.nextInt();
			}
		
		if (cont == 0) {
			System.out.println("IMPOSSIVEL CALCULAR");
		} else {	
			media = somaIdades / cont; 
			System.out.println("MEDIA = " + String.format("%.2f", media));	
		}
		
		sc.close();
	}

}
