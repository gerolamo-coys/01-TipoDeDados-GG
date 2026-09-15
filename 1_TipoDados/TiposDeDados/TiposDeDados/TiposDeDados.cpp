// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Arquivo principal do programa; a função main está aqui e é onde a execução começa e termina.

#include <iostream>
// Inclui a biblioteca padrão de entrada e saída (input/output stream), necessária para usar cin e cout.

using namespace std;
// Diz ao compilador para usar o espaço de nomes padrão (std), assim podemos escrever cout em vez de std::cout.

int main()
// Declara a função principal do programa (main), que retorna um inteiro e é o ponto de entrada da execução.
{
    // Início do bloco de código da função main.

    cout << "Estrutura de Dados - Fatec (2026/2)" << endl;
    // Imprime na tela o texto "Estrutura de Dados - Fatec (2026/2)" e pula uma linha (endl).

    cout << "Tipos Numericos\n";
    // Imprime "Tipos Numericos" e quebra de linha (\n).

    cout << "===============\n";
    // Imprime uma linha separadora com vários "=" e quebra de linha.

    int i = 10;
    // Declara uma variável inteira chamada i e inicializa com o valor 10.

    short s = 18;
    // Declara uma variável do tipo short (inteiro curto) chamada s e inicializa com 18.

    long l = 200000;
    // Declara uma variável do tipo long (inteiro longo) chamada l e inicializa com 200000.

    float f = 1.97F;
    // Declara uma variável do tipo float (número real de precisão simples) chamada f e inicializa com 1.97.
    // O sufixo F indica que é um literal float.

    double d = 4.73;
    // Declara uma variável do tipo double (número real de precisão dupla) chamada d e inicializa com 4.73.

    cout << "Inteiros\n";
    // Imprime "Inteiros" e quebra de linha.

    cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
    // Imprime o valor da variável i e o tamanho em bytes que ela ocupa na memória (usando sizeof(i)).

    cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
    // Imprime o valor da variável s e o tamanho em bytes que ela ocupa.

    cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
    // Imprime o valor da variável l e o tamanho em bytes que ela ocupa, seguido de duas quebras de linha.

    cout << "Ponto Flutuante (Reais)\n";
    // Imprime "Ponto Flutuante (Reais)" e quebra de linha.

    cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
    // Imprime o valor da variável f (float) e o tamanho em bytes que ela ocupa.

    cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";
    // Imprime o valor da variável d (double) e o tamanho em bytes que ela ocupa.

    cout << "\nTipo logico (boolean)\n";
    // Imprime uma quebra de linha e depois "Tipo logico (boolean)".

    cout << "====================\n";
    // Imprime uma linha separadora com vários "=" e quebra de linha.

    bool flFacil = false;
    // Declara uma variável do tipo bool (booleano) chamada flFacil e inicializa com false (falso).

    cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";
    // Imprime o valor de flFacil (0 para false, 1 para true) e o tamanho em bytes que ele ocupa.

    cout << "\nTipo caracter\n";
    // Imprime uma quebra de linha e depois "Tipo caracter".

    cout << "=============\n";
    // Imprime uma linha separadora com vários "=" e quebra de linha.

    char letra = 'Z';
    // Declara uma variável do tipo char (caractere) chamada letra e inicializa com o caractere 'Z'.

    cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";
    // Imprime o valor da variável letra e o tamanho em bytes que ela ocupa.

    cout << "\nTipo string\n";
    // Imprime uma quebra de linha e depois "Tipo string".

    cout << "===========\n";
    // Imprime uma linha separadora com vários "=" e quebra de linha.

    string texto = "Estrutura de Dados vai ser moleza!";
    // Declara uma variável do tipo string chamada texto e inicializa com a frase entre aspas.

    cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";
    // Imprime o conteúdo da string texto entre aspas e o tamanho em bytes da estrutura string (não do texto em si).

    cout << "\nPonteiros\n";
    // Imprime uma quebra de linha e depois "Ponteiros".

    cout << "===========\n";
    // Imprime uma linha separadora com vários "=" e quebra de linha.

    string* ponteiro = &texto;
    // Declara um ponteiro para string chamado ponteiro e atribui a ele o endereço de memória da variável texto (&texto).

    cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
    // Imprime uma explicação e o valor do ponteiro, que é o endereço de memória onde texto está armazenado.

    cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";
    // Imprime o conteúdo acessado através do ponteiro (*ponteiro), que é o mesmo valor de texto.

    cout << endl << endl;
    // Imprime duas quebras de linha para espaçar o output.

    cout << "Qualquer tecla para continuar...";
    // Imprime a mensagem "Qualquer tecla para continuar...".

    system("pause"); // somente no Windows
    // Chama o comando do sistema "pause", que espera o usuário pressionar uma tecla (funciona no Windows).

    system("cls");
    // Chama o comando do sistema "cls", que limpa a tela do console (funciona no Windows).

    cout << "Entrada de Dados" << endl;
    // Imprime "Entrada de Dados" e pula uma linha.

    cout << "================" << endl;
    // Imprime uma linha separadora com vários "=" e pula uma linha.

    string nome = "";
    // Declara uma variável string chamada nome e inicializa com string vazia.

    int idade = 0;
    // Declara uma variável inteira chamada idade e inicializa com 0.

    int dias = 0;
    // Declara uma variável inteira chamada dias e inicializa com 0.

    int horas = 0;
    // Declara uma variável inteira chamada horas e inicializa com 0.

    int minutos = 0;
    // Declara uma variável inteira chamada minutos e inicializa com 0.

    cout << "Digite seu nome: ";
    // Imprime a mensagem pedindo o nome do usuário.

    cin >> nome;
    // Lê o nome digitado pelo usuário e armazena na variável nome.

    cout << "Digite sua idade: ";
    // Imprime a mensagem pedindo a idade do usuário.

    cin >> idade;
    // Lê a idade digitada pelo usuário e armazena na variável idade.

    dias = idade * 365;
    // Calcula a idade em dias multiplicando a idade por 365 e armazena em dias.

    horas = dias * 24;
    // Calcula a idade em horas multiplicando os dias por 24 e armazena em horas.

    minutos = horas * 60;
    // Calcula a idade em minutos multiplicando as horas por 60 e armazena em minutos.

    cout << "Sua idade em dias e: " << dias << endl;
    // Imprime a idade calculada em dias.

    cout << "Sua idade em horas e: " << horas << endl;
    // Imprime a idade calculada em horas.

    cout << "Sua idade em minutos e: " << minutos << endl;
    // Imprime a idade calculada em minutos.

    cout << endl << endl;
    // Imprime duas quebras de linha para espaçar o output.

	cout << "Qualquer tecla para continuar para o primeiro exercício...";

    system("pause"); // somente no Windows
    // Espera o usuário pressionar uma tecla.

    cout << "Exercício 1" <<
    
	cout << "================" << endl;

#include <climits>
    cout << "int  max = " << INT_MAX << "\n";
    cout << "int  min = " << INT_MIN << "\n";
    cout << "short max = " << SHRT_MAX << "\n";

    //Ao somar 1 ao INT_MAX, o valor excede o limite do tipo int, causando overflow. Normalmente o resultado exibido é INT_MIN, mas tecnicamente o C++ considera essa operação comportamento indefinido.

	cout << "Digite a temperatura em Celsius: ";
	cin >> celsius;

	cout << "A temperatura em Fahrenheit e: " << (celsius * 9 / 5) + 32 << endl;
    
	cout << "A temperatura em Kelvin e: " << celsius + 273.15 << endl;

    cout << "================" << endl;

	cout << "Qualquer tecla para ir para o próximo exercício...";

    system("pause"); // somente no Windows
    // Espera o usuário pressionar uma tecla.


    long segundos;

    cout << "Exercício 3" << endl;
    cout << "================" << endl;

    cout << "Digite os segundos: ";
    cin >> segundos;

    long dias = segundos / 86400;
    long horas = (segundos % 86400) / 3600;
    long minutos = (segundos % 3600) / 60;
    long segundosRestantes = segundos % 60;

    cout << "O tempo equivalente e: "
        << dias << " dias, "
        << horas << " horas, "
        << minutos << " minutos e "
        << segundosRestantes << " segundos." << endl;
}
// Fim da função main.