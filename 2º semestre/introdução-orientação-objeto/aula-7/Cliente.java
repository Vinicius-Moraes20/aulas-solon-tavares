public class Cliente {
    private String nome;
    private String animal;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setAnimal(String animal) {
        this.animal = animal;
    }

    public String getAnimal() {
        return this.animal;
    }

    public String getNome() {
        return this.nome;
    }

    public void imprimirDado() {
        System.out.print("Nome: " + this.getNome());
        System.out.print("Animal: " + this.getAnimal());
    }
}
