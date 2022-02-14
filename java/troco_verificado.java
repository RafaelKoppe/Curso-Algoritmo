import java.util.Locale;
import java.util.Scanner;

public class troco_verificado {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
			
		int quantidade;
		double preco, dinheiro , troco, valor, restante;
		
		System.out.print("Preço unitário do produto: ");
		preco = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		valor = preco * quantidade;
		
		if (dinheiro > valor) {
			troco = dinheiro - valor;
			System.out.println("TROCO = " + String.format("%.2f", troco));
		} else {
			restante = valor - dinheiro;
			System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + String.format("%.2f", restante) 
								+ " REAIS");
		}
		
		sc.close();
	}

}
