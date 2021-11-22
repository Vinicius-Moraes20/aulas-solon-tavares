import java.util.Scanner;

public class ContaCorrentePrincipal {

    Scanner read = new Scanner(System.in);
    ContaCorrente conta1 = new ContaCorrente();

    public void execSaque() {
        System.out.print("Digite o valor que você deseja sacar: R$");
        float valSaque = read.nextFloat();


        if (conta1.sacar(valSaque)) {
            System.out.println("Saque aprovado");
        }
    }

    public void execDeposito() {
        System.out.print("Digite o valor que você deseja depositar: R$");
        conta1.depositar(read.nextFloat());
    }

    public void execConsulta() {
        conta1.imprimir();
    }

    public void Cadastrar() {
        System.out.print("Digite seu nome: ");
        conta1.setNomeCliente(read.next());
        System.out.print("Digite o numero da conta: ");
        conta1.setConta(read.nextInt());
        System.out.print("Digite o numero da agencia: ");
        conta1.setAgencia(read.nextInt());
    }


    ContaCorrentePrincipal conta = new ContaCorrentePrincipal();

    public static void main(String [] args) {
        int opMenu;

        while (true) {
            System.out.println("[1] Cadastrar");
            System.out.println("[2] Sacar");
            System.out.println("[3] Depositar");
            System.out.println("[4] Consultar dados da conta");
            System.out.println("[5] Finalizar programa");
            
            
        }
    }
}
