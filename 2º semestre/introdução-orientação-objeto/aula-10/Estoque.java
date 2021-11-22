public class Estoque {
    private String nome;
    private int qntAtual;
    private int qntMinima;

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setQntAtual(int qntAtual) {
        this.qntAtual = qntAtual;
    }

    public int getQntAtual() {
        return qntAtual;
    }

    public void setQntMinima(int qntMinima) {
        this.qntMinima = qntMinima;
    }

    public int getQntMinima() {
        return qntMinima;
    }




    public void repor(int qnt) {
        setQntAtual(qnt);
    }

    public void darBaixa(int qnt) {
        setQntAtual(getQntAtual() - qnt);
    }

    public void mostrar() {
        System.out.println("Produto: " + getNome());
        System.out.println("Quantidade minima: " + getQntMinima());
    }

    public boolean precisaRepor() {
        if (getQntAtual() <= getQntMinima()) {
            return true;
        } else {
            return false;
        }
    }
}
