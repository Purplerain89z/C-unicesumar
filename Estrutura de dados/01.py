
def delta(a,b,c):
    return (b ** 2 - 4 * a * c )


def equacao(a, b, c):

    resultadoDelta = delta(a, b, c)
    if resultadoDelta < 0:
        return "Não Possui resultados reais"
    else:
        print("Delta: {}".format(resultadoDelta))

    x1 = (((-1)*b)+(resultadoDelta **(1/2)))/(2 * a)

    x2 = (((-1)* b)-(resultadoDelta ** (1/2))) / (2*a)

    return f'Os resultados possiveis são \nX1:{x1:.0f}\n X2 :{x2:.0f}'

def main():

    print("Calculo de equação do 2º grau\n ax²+bx+c=0")
    print("\n")

    try:

        ValorA = int(input("Informe o Valor de 'a':"))

        ValorB = int(input("informe o valor de 'b':"))

        ValorC = int(input("informe o valor de 'c':"))

        print(equacao(ValorA,ValorB,ValorC))

    except ValueError as erro:

        print("O valor informado não é inteiro.")


main()        