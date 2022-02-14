import java.util.Locale;
import java.util.Scanner;

public class comerciante {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n, abaixo = 0, entre = 0, acima = 0;
		double totalCompra = 0, totalVenda = 0, lucrototal, porcentagem, lucro;
		
		System.out.print("Serao digitados dados de quantos produtos? ");
		n = sc.nextInt();
		
		String[] nome = new String[n];
		double[] precovenda = new double[n];
		double[] precocompra = new double[n];
		
		for (int i = 0; i < n; i++ ) {
			System.out.println("Produto "+ (i+1) + ":");
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Preco de compra: ");
			precocompra[i] = sc.nextDouble();
			System.out.print("Preco de venda: ");
			precovenda[i] = sc.nextDouble();
		}
		
		for (int i = 0; i < n; i++) {
			lucro = precovenda[i] - precocompra[i];
			porcentagem = (lucro * 100) / precocompra[i];
			if (porcentagem < 10.0) {
				abaixo = abaixo + 1;
			} else if (porcentagem < 20.0) {
				entre = entre + 1;
			} else {
				acima = acima + 1;
			}
		}
		
		for (int i = 0; i < n; i++) {
			totalCompra = totalCompra + precocompra[i];
			totalVenda= totalVenda + precovenda[i];
		}
		
		lucrototal = totalVenda - totalCompra;
		
		System.out.println("RELATORIO:");
		System.out.println("Lucro abaixo de 10%: " + abaixo);
		System.out.println("Lucro entre 10% e 20%: " + entre);
		System.out.println("Lucro acima de %20: " + acima);
		System.out.println("Valor total de compra: " + String.format("%.2f", totalCompra));
		System.out.println("Valor total de venda: " + String.format("%.2f", totalVenda));
		System.out.println("Lucro total: " + String.format("%.2f", lucrototal));
		
		sc.close();
	}

}
