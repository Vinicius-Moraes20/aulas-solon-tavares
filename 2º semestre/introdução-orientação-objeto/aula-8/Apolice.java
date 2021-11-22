public class Apolice {
    private String nomeSegurado;
    private int idade;
    private float valorPremio;



    public void setNome(String nome) {
        this.nomeSegurado = nome;
    }

    public String getNome() {
        return nomeSegurado;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getIdade() {
        return idade;
    }

    public void setValorPremio(float valor) {
        this.valorPremio = valor;
    }

    public float getValorPremio() {
        return valorPremio;
    }




    public void imprimir() {
        System.out.println("----------------------------");
        System.out.println("Nome do Segurado: " + getNome());
        System.out.println("Idade: " + getIdade());
        System.out.println("Valor do premio: R$" + getValorPremio());
    }

    public void calcularPremioApolice() {
        if (getIdade() >= 18 && getIdade() <= 25) {
            setValorPremio(getValorPremio() + getValorPremio() * 0.20f);
        } else if (getIdade() > 25 && getIdade() <= 36) {
            setValorPremio(getValorPremio() + getValorPremio() * 0.15f);
        } else if (getIdade() > 36) {
            setValorPremio(getValorPremio() + getValorPremio() * 0.10f);
        }
    }

    public void oferecerDesconsto(String cidade) {
        if (cidade.equals("Curitiba")) {
            setValorPremio(getValorPremio() - getValorPremio() * 0.20f);
        } else if(cidade.equals("Rio de Janeiro")) {
            setValorPremio(getValorPremio() - getValorPremio() * 0.15f);
        } else if (cidade.equals("São Paulo")) {
            setValorPremio(getValorPremio() - getValorPremio() * 0.10f);
        } else if (cidade.equals("Belo Horizonte")) {
            setValorPremio(getValorPremio() - getValorPremio() * 0.05f);
        }
    }
}
