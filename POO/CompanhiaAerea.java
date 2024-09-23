import java.util.ArrayList;
import java.util.List;

public class CompanhiaAerea {
    private String nome;
    private ArrayList<Voo> voos;

    public CompanhiaAerea(String nome) {
        this.nome = nome;
        this.voos = new ArrayList<Voo>();
    }

    public voo addicionarVoo(Voo voo){
        voos.add(voo);
    }

    public String getNome(){
        return nome;
    }

    public Lista<Voo> getVoos (){
        return voos;
    }
}
