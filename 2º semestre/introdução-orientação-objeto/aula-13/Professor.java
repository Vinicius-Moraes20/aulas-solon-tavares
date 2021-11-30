public class Professor extends Funcionario{

    public Professor() {

    };
    public Professor(String nome, String sobrenome, Double salario) {
        setNome(nome);
        setSobrenome(sobrenome);
        setSalario(salario);
    }



    public Double primeiraParcela() {
        return getSalario();
    }
    public Double segundaParcela() {
        return 0.0;
    }
    
}
