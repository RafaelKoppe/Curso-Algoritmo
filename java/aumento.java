import java.util.Locale;
import java.util.Scanner;

public class aumento {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double salario, novoSalario, aumento;
		int porcentagem;
		
		System.out.print("Digite o salario da pessoa: ");
		salario = sc.nextDouble();
		
		novoSalario = 0;
		aumento = 0;
		porcentagem = 0;
		if (salario <= 1000.0) {
			porcentagem = 20;
			aumento = salario * porcentagem / 100;
			novoSalario = aumento + salario;
		} else if (salario > 1000.0 && salario <= 3000.0) {
			porcentagem = 15;
			aumento = salario * porcentagem / 100;
			novoSalario = aumento + salario;
		} else if (salario > 3000.0 && salario <= 8000.0) {
			porcentagem = 10;
			aumento = salario * porcentagem / 100;
			novoSalario = aumento + salario;
		} else if (salario > 8000.0) {
			porcentagem = 5;
			aumento = salario * porcentagem / 100;
			novoSalario = aumento + salario;
		}
		
		System.out.println("Novo salario = R$ " + String.format("%.2f", novoSalario));
		System.out.println("Aumento = R$  " + String.format("%.2f", aumento));
		System.out.println("Porcentagem = " + porcentagem + " %");
		
		sc.close();
	}

}
