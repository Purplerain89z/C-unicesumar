public class Voo {
    private String codigo;
    private int totalAssentos;
    private int assentosOcupados;
    public Voo(String codigo, int totalAssentos) {

    }

    public void reservaAssento(){
        assentosOcupados++;
    }

    public int getAssentosDisponiveis(){
        return assentosOcupados;
    }
    
    public String getCodigo(){
        return codigo;
    }
}