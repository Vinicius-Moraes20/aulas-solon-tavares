public class ContaCorrente {
    private String nomeCliente;
    private int conta;
    private int agencia;
    private double saldo;

    public void setNomeCliente(String nome) {
        this.nomeCliente = nome;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setConta(int numeroConta) {
        this.conta = numeroConta;
    }

    public int getConta() {
        return conta;
    }

    public void setAgencia(int numeroAgencia) {
        this.agencia = numeroAgencia;
    }

    public int getAgencia() {
        return agencia;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public double getSaldo() {
        return saldo;
    }


    public boolean sacar(double valorSaque) {
        if (getSaldo() < valorSaque) {
            return false;
        } else {
            setSaldo(getSaldo() - valorSaque);
            return true;
        }
    }

    public void depositar(double deposito) {
        setSaldo(getSaldo() + deposito);
    }

    public void imprimir() {
        System.out.println("--------------------- DADOS DA CONTA");
        System.out.println("Nome do cliente: " + getNomeCliente());
        System.out.println("Numero da conta: " + getConta());
        System.out.println("Agencia bancaria: "+ getAgencia());
        System.out.println("SaldO: R$" + getSaldo());
    }
}
