
print("Definição de Vetores\n")


def main():
    vetorVazio = []
    vetorVazio2: list

    #imprime o tamnho do vetor
    print("Tamanho ndo vetor é:", len(vetorVazio))
    for i in range(9):
        #acrescenta um valor no final do vetor
        vetorVazio.append(i)

    print("Novo Tamanho do vetor vazio é", len(vetorVazio))
    print("Valores agora no vetor vazio são", vetorVazio)

    vetorInteiros = [1,2,3,4,5,6,7]

    #imprime [1,2,3,4,5,6,7]
    print("Valores do vetor Inteiro:", vetorInteiros)

    for i in range(0, len(vetorInteiros)):
        #imprime a posição e o valor da posição
        print("O valor na Posição ",i,"é",vetorInteiros[i])

    vetorCaracteres =["Maria","Gui", "Jô", "Edu", "João", "Carlos","Joaquina"]

    for i in range(len(vetorCaracteres)):
        print("O valor na posição", i,"é",vetorCaracteres[i])

    vetoresReais = [1.2, 3.5, 12.3, 4.2]
    print("Valores no vetorReais são;", vetoresReais)


main()