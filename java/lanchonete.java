import java.util.Locale;
import java.util.Scanner;

public class lanchonete {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo, quantidade;
		double preco;
		
		System.out.print("Codigo do produto comprado: ");
		codigo = sc.nextInt();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		
		preco = 0;
		if (codigo == 1) {
			preco = quantidade * 5.00;
		} else if (codigo == 2) {
			preco = quantidade * 3.50;
		} else if (codigo == 3) {
			preco = quantidade * 4.80;
		} else if (codigo == 4) {
			preco = quantidade * 8.90;
		} else if (codigo == 5) {
			preco = quantidade * 7.32;
		}
		
		System.out.println("Valor a pagar: R$ " + String.format("%.2f", preco));
		
		sc.close();
	}

}
