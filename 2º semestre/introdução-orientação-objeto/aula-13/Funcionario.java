public class Funcionario extends Pessoa{
    private int matricula;
    private Double salario;


    public Funcionario() {

    };
    public Funcionario(String nome, String sobrenome, Double salario) {
        this.setNome(nome);
        this.setSobrenome(sobrenome);
        this.setSalario(salario);
    }



    public int getMatricula() {
        return matricula;
    }
    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public Double getSalario() {
        return salario;
    }
    public void setSalario(Double salario) {
        if (salario > 0) {
            this.salario = salario;
        } else {
            System.out.println("Valor do salario invalido");
        }
    }

    public Double primeiraParcela() {
        return salario * 0.6;
    }
    public Double segundaParcela() {
        return salario * 0.4;
    }
}
