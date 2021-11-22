public class PrincipalApolice {
    public static void main(String[] args) {
        Apolice apolice1 = new Apolice();

        apolice1.setNome("Carlos Eduardo");
        apolice1.setIdade(23);
        apolice1.setValorPremio(10000f);

        apolice1.imprimir();
        apolice1.calcularPremioApolice();
        apolice1.imprimir();
        apolice1.oferecerDesconsto("Curitiba");
        apolice1.imprimir();

        //apolice1.oferecerDesconsto("Rio de Janeiro");
        //apolice1.imprimir();

        //apolice1.oferecerDesconsto("São Paulo");
        //apolice1.imprimir();

        //apolice1.oferecerDesconsto("Belo Horizonte");
        //apolice1.imprimir();

    }
}
