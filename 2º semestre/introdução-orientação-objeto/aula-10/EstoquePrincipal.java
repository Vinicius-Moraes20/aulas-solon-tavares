public class EstoquePrincipal {
    public static void main(String[] args) {
        Estoque estoque1 = new Estoque();
        estoque1.setNome("Impressora Jato de Tinta");
        estoque1.setQntMinima(6);
        estoque1.setQntAtual(13);

        Estoque estoque2 = new Estoque();
        estoque2.setNome("Monitor LCD 17'");
        estoque2.setQntMinima(13);
        estoque2.setQntAtual(11);

        Estoque estoque3 = new Estoque();
        estoque3.setNome("Mouse Ótico");
        estoque3.setQntMinima(2);
        estoque3.setQntAtual(6);


        estoque1.darBaixa(5);
        estoque2.repor(7);
        estoque3.darBaixa(4);

        if (estoque1.precisaRepor()) {
            System.out.println(estoque1.getNome() + " precisa ser reposto");
        }

        if (estoque2.precisaRepor()) {
            System.out.println(estoque2.getNome() + " precisa ser reposto");
        }

        if (estoque2.precisaRepor()) {
            System.out.println(estoque3.getNome() + " precisa ser reposto");
        }

        estoque1.mostrar();
        estoque2.mostrar();
        estoque3.mostrar();
    }
}
