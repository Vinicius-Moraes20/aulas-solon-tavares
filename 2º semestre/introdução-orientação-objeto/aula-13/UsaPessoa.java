public class UsaPessoa {
    public static void main(String[] args) {
        Pessoa pessoa1 = new Pessoa("Mario", "Lopes");
        Funcionario pessoa2 = new Funcionario("Lucas", "Mendes", 2000.0);
        Professor pessoa3 = new Professor("Rafael", "Lira", 1000.0);

        System.out.println("Pessoa 1: " + pessoa1.nomeCompleto());
        System.out.println("Pessoa 2: " + pessoa2.nomeCompleto());
        System.out.println("Pessoa 3: " + pessoa3.nomeCompleto());


        System.out.println(pessoa2.primeiraParcela());
        System.out.println("Pessoa 2: Primeira parcela: R$" + pessoa2.primeiraParcela() + "  Segunda parcela: R$" + pessoa2.segundaParcela());
        System.out.println("Pessoa 3: Primeira parcela: R$" + pessoa3.primeiraParcela() + "  Segunda parcela: R$" + pessoa3.segundaParcela());
        
    }
}
