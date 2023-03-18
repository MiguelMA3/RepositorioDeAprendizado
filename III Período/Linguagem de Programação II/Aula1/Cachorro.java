public class Cachorro {
    String raca;
    String nome;
    String dono;
    String porte;
    float peso;
    final String especie = "canino";

    public Cachorro(String nome, String raca, String dono, String porte, float peso) {
        nome = "Marley";
        raca = "Poodle";
        dono = "Maria";
        porte = "Pequeno";
        peso = 5.5f;

    }

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public String getPorte() {
        return porte;
    }

    public void setPorte(String porte) {
        this.porte = porte;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }
}