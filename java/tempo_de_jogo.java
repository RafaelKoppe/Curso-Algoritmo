import java.util.Locale;
import java.util.Scanner;

public class tempo_de_jogo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int horaInicial, horaFinal, duracao;
		
		System.out.print("Hora inicial: ");
		horaInicial = sc.nextInt();
		System.out.print("Hora final: ");
		horaFinal = sc.nextInt();
		
		if (horaInicial >= horaFinal) {
			duracao = 24 - (horaInicial - horaFinal);	
		} else {
			duracao = horaFinal - horaInicial;
		}
		
		System.out.println("O JOGO DUROU " + duracao + " HORA(S)");
		
		sc.close();
	}

}
