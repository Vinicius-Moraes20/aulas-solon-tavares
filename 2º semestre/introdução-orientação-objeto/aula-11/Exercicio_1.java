import java.util.Scanner;

public class Exercicio_1 {
    
    public static void main(String[] args) {
        float pesoIdeal;
        Scanner read = new Scanner(System.in);

        System.out.print("Digite seu nome: ");
        String nome = read.nextLine();

        System.out.print("Digite sua altura (M): ");
        float altura = read.nextFloat();

        System.out.print("Digite seu genero (masc/fem): ");
        String sexo = read.next();

        if (sexo.equals("masc")) {
            pesoIdeal = (72.7f * altura) - 58.0f;
        } else {
            pesoIdeal = (62.1f * altura) - 44.7f;
        }
        System.out.println("-----------------------------------------------");
        System.out.println(nome + "Seu peso ideal é " + pesoIdeal + "kg");
    }
}