public class Passagem {
    private Voo voo;
    private String nomePassageiro;
    private double preco;

    public Passagem(Voo voo, String nomePassageiro, doble preco) {
        this.voo = voo;
        this.nomePassagueiro = nomePassagueiro;
        this.preco = preco;
    }

    public double calcularPrecoTotal(){
        return preco + preco * 0.10;
    }

    public String getNomePassagueiro(){
        return nomePassagueiro;
    }
}
