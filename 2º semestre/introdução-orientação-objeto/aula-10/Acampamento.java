public class Acampamento {
    private String nome;
    private char equipe;
    private int idade;

    //------------------------------- Manipulaçãp do Mome
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    //------------------------------- Manipulação da Equipe
    public void setEquipe(char equipe) {
        this.equipe = equipe;
    }

    public char getEquipe() {
        return equipe;
    }

    //-------------------------------  Manipulação da Idade
    public void setIdade (int idade) {
        this.idade = idade;
    }

    public int getIdade() {
        return idade;
    }




    public void imprimir() {
        System.out.println("----------------------------");
        System.out.println("Nome: " + getNome());
        System.out.println("Idade: " + getIdade());
        System.out.println("Equipe: " + getEquipe());
    }

    public void separarTime() {
        if (getIdade() >= 6 && getIdade() <= 10) {
            setEquipe('A');
        } else if (getIdade() >= 11 && getIdade() <= 20) {
            setEquipe('B');
        } else if (getIdade() >= 21) {
            setEquipe('C');
        }
    }

}

