public class Atendente {
    private String nome;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return this.nome;
    }

    public void imprimirDados() {
        System.out.println("Nome: "+ this.getNome());
    }
}