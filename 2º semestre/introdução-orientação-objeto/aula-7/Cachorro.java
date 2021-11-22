public class Cachorro {
    private String nome;
    private int idade;
    private Double peso;
    private String raca;
    
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return this.nome;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getIdade() {
        return this.idade;
    }

    public void setPeso(Double peso) {
        this.peso = peso;
    }

    public Double getPeso() {
        return this.peso;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public String getRaca() {
        return this.raca;
    }

    public  void imprimirDados() {
        System.out.println("Nome: "+ this.getNome());
        System.out.println("Idade: "+ this.getIdade());
        System.out.println("Peso: "+ this.getPeso());
        System.out.println("raca: "+ this.getRaca());
    }

    public void latir() {
        System.out.println("AU AU!");
    }
}
