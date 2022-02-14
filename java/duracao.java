import java.util.Locale;
import java.util.Scanner;

public class duracao {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int minutos, horas, segundos;
		
		System.out.print("Digite a duracao em segundos: ");
		segundos = sc.nextInt();
		
		horas = segundos / 3600;
		minutos = (segundos % 3600) / 60;
		segundos = (segundos % 3600) % 60;
		
		System.out.println( horas + ":" +  minutos + ":" + segundos);
		
		sc.close();
	}

}
