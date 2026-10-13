#include <iostream>
#include <string>
#include <locale>
#include <chrono>
#include <thread>
using namespace std;

string mes(int mes2)
{
    switch (mes2)
    {
        case 1:
            return "janeiro";
            break;
        case 2:
            return "fevereiro";
            break;
        case 3:
            return "março";
            break;
        case 4:
            return "abril";
            break;
        case 5:
            return "maio";
            break;
        case 6:
            return "junho";
            break;
        case 7:
            return "julho";
            break;
        case 8:
            return "agosto";
            break;
        case 9:
            return "setembro";
            break;
        case 10:
            return "outubro";
            break;
        case 11:
            return "novembro";
            break;
        case 12:
            return "dezembro";
            break;
        default:
            return "Mês inválido.";
    }
}

int EditarDadosPersonagem()
{
    int opcao;

    cout << "\n\nInsira a informação que deseja editar: " << endl;

    cout << "\n1 - Nome Próprio;";
    cout << "\n2 - Apelido;";
    cout << "\n3 - Dia de Nascimento;";
    cout << "\n4 - Mês de Nascimento;";
    cout << "\n5 - Ano de Nascimento;";
    cout << "\n0 - Sair";

    cout << "\n\nOpção: ";
    cin >> opcao;

    return opcao;
}

struct dadosPessoas {
    string nomeProprio;
    string apelido;
    int diaDataNascimento;
    int mesDataNascimento;
    int anoDataNascimento;
};

// this_thread::sleep_for(chrono::seconds(2));

int main()
{
    setlocale(LC_ALL, "pt-PT.utf8");

#ifdef _WIN32
    system("chcp 65001 > nul"); // Muda para UTF-8 no terminal
#endif

    // Variáveis para escolher

    int escolherOndeIr = 0, escolherPersonagem = 0, opcaoEliminar, opcaoEditar, selecionarPersonagem;

    bool terminarPrograma = false;

    // Personagens
    
    bool personagem1Ocupada = false, personagem2Ocupada = false, personagem3Ocupada = false;

    struct dadosPessoas personagem1, personagem2, personagem3;

    int personagemSelecionado = 0;
    
    // ----------------------------

    cout << "BEM VINDO AO MEU PROJETO!";

    
    do
    {
        while (escolherPersonagem != 5 && personagemSelecionado == 0)
        {
            cout << "\n\n\n----- Gestão de Personagens -----" << endl;

            cout << "1 - Criar Personagem;" << endl; // feito
            cout << "2 - Editar Personagem;" << endl; // feito
            cout << "3 - Eliminar Personagem;" << endl; // feito
            cout << "4 - Continuar Programa;" << endl;
            cout << "5 - Terminar Programa." << endl;  // feito

            cout << "\nOpção (1-5): ";
            cin >> escolherPersonagem;

            switch (escolherPersonagem)
            {
                case 1: // Criar Personagem (3 slots)
                    if (personagem1Ocupada == false)
                    {
                        cout << "\n\n--- Criar Personagem (slot #1) ---" << endl;

                        personagem1Ocupada = true;

                        cout << "\nInsira o nome próprio da personagem: ";
                        cin >> personagem1.nomeProprio;
                        
                        cout << "\nInsira o apelido da personagem: ";
                        cin >> personagem1.apelido;

                        cout << "\nEm que DIA a personagem nasceu?: ";
                        cin >> personagem1.diaDataNascimento;

                        cout << "\nEm que MÊS a personagem nasceu?: ";
                        cin >> personagem1.mesDataNascimento;

                        cout << "\nEm que ANO a personagem nasceu?: ";
                        cin >> personagem1.anoDataNascimento;


                        cout << "\n\n--- Personagem Criado ---" << endl;

                        cout << "\nNome Completo: " << personagem1.nomeProprio << " " << personagem1.apelido;
                        cout << "\nData de nascimento: " << personagem1.diaDataNascimento << " de " << mes(personagem1.mesDataNascimento) << " de " << personagem1.anoDataNascimento;
                    }
                    else if (personagem2Ocupada == false)
                    {
                        cout << "\n\n--- Criar Personagem (slot #2) ---" << endl;

                        personagem2Ocupada = true;

                        cout << "\nInsira o nome próprio da personagem: ";
                        cin >> personagem2.nomeProprio;

                        cout << "\nInsira o apelido da personagem: ";
                        cin >> personagem2.apelido;

                        cout << "\nEm que DIA a personagem nasceu?: ";
                        cin >> personagem2.diaDataNascimento;

                        cout << "\nEm que MÊS a personagem nasceu?: ";
                        cin >> personagem2.mesDataNascimento;

                        cout << "\nEm que ANO a personagem nasceu?: ";
                        cin >> personagem2.anoDataNascimento;


                        cout << "\n\n--- Personagem Criado ---" << endl;

                        cout << "\nNome Completo: " << personagem2.nomeProprio << " " << personagem2.apelido;
                        cout << "\nData de nascimento: " << personagem2.diaDataNascimento << " de " << mes(personagem2.mesDataNascimento) << " de " << personagem2.anoDataNascimento;
                    }
                    else if (personagem3Ocupada == false)
                    {
                        cout << "\n\n--- Criar Personagem (slot #3) ---"<< endl;

                        personagem3Ocupada = true;

                        cout << "\nInsira o nome próprio da personagem: ";
                        cin >> personagem3.nomeProprio;

                        cout << "\nInsira o apelido da personagem: ";
                        cin >> personagem3.apelido;

                        cout << "\nEm que DIA a personagem nasceu?: ";
                        cin >> personagem3.diaDataNascimento;

                        cout << "\nEm que MÊS a personagem nasceu?: ";
                        cin >> personagem3.mesDataNascimento;

                        cout << "\nEm que ANO a personagem nasceu?: ";
                        cin >> personagem3.anoDataNascimento;


                        cout << "\n\n--- Personagem Criado ---" << endl;

                        cout << "\nNome Completo: " << personagem3.nomeProprio << " " << personagem3.apelido;
                        cout << "\nData de nascimento: " << personagem3.diaDataNascimento << " de " << mes(personagem3.mesDataNascimento) << " de " << personagem3.anoDataNascimento;
                    }
                    else
                    {
                        cout << "Não tem espaços livres! Elimine uma personagem ou reclame com o criador.";
                    }
                    break;
                case 2: // editar personagens
                    cout << "\n\n--- Editar Personagens ---" << endl;

                    cout << "\nQue Personagem deseja editar?" << endl;
                    
                    if (personagem1Ocupada == true)
                        cout << "\n1 - Slot #1 - " << personagem1.nomeProprio << " " << personagem1.apelido;
                    else
                        cout << "\n1 - Slot #1 - *Vazio*";

                    if (personagem2Ocupada == true)
                        cout << "\n2 - Slot #2 - " << personagem2.nomeProprio << " " << personagem2.apelido;
                    else
                        cout << "\n2 - Slot #2 - *Vazio*";

                    if (personagem3Ocupada == true)
                        cout << "\n3 - Slot #3 - " << personagem3.nomeProprio << " " << personagem3.apelido;
                    else
                        cout << "\n3 - Slot #3 - *Vazio*";

                    cout << "\n0 - Sair ";

                    cout << "\n\nOpção: ";
                    cin >> opcaoEditar;

                    switch (opcaoEditar)
                    {
                        case 1:
                            if (personagem1Ocupada == true)
                            {
                                cout << "\n\n --- Editar Slot #1 ---";

                                switch (EditarDadosPersonagem())
                                {
                                    case 1:
                                        cout << "\n\nInsira o novo nome: ";
                                        cin >> personagem1.nomeProprio;
                                        break;
                                    case 2:
                                        cout << "\n\nInsira o novo apelido: ";
                                        cin >> personagem1.apelido;
                                        break;
                                    case 3:
                                        cout << "\n\nInsira o novo dia de nascimento: ";
                                        cin >> personagem1.diaDataNascimento;
                                        break;
                                    case 4:
                                        cout << "\n\nInsira o novo mês de nascimento: ";
                                        cin >> personagem1.mesDataNascimento;
                                        break;
                                    case 5:
                                        cout << "\n\nInsira o novo ano de nascimento: ";
                                        cin >> personagem1.diaDataNascimento;
                                        break;
                                    case 0:
                                        cout << "\n\nA voltar ...";
                                        break;
                                    default:
                                        cout << "\n\nOpção Inválida!";
                                }
                            }
                            else
                            {
                                cout << "\n\nSlot #1, está vazio!";
                            }
                            break;
                        case 2:
                            if (personagem2Ocupada == true)
                            {
                                cout << "\n\n --- Editar Slot #2 ---";

                                switch (EditarDadosPersonagem())
                                {
                                    case 1:
                                        cout << "\n\nInsira o novo nome: ";
                                        cin >> personagem2.nomeProprio;
                                        break;
                                    case 2:
                                        cout << "\n\nInsira o novo apelido: ";
                                        cin >> personagem2.apelido;
                                        break;
                                    case 3:
                                        cout << "\n\nInsira o novo dia de nascimento: ";
                                        cin >> personagem2.diaDataNascimento;
                                        break;
                                    case 4:
                                        cout << "\n\nInsira o novo mês de nascimento: ";
                                        cin >> personagem2.mesDataNascimento;
                                        break;
                                    case 5:
                                        cout << "\n\nInsira o novo ano de nascimento: ";
                                        cin >> personagem2.diaDataNascimento;
                                        break;
                                    case 0:
                                        cout << "\n\nA voltar ...";
                                        break;
                                    default:
                                        cout << "\n\nOpção Inválida!";
                                }
                            }
                            else
                            {
                                cout << "\n\nSlot #2, está vazio!";
                            }
                            break;
                        case 3: 
                            if (personagem3Ocupada == true)
                            {
                                cout << "\n\n --- Editar Slot #3 ---";

                                switch (EditarDadosPersonagem())
                                {
                                    case 1:
                                        cout << "\n\nInsira o novo nome: ";
                                        cin >> personagem3.nomeProprio;
                                        break;
                                    case 2:
                                        cout << "\n\nInsira o novo apelido: ";
                                        cin >> personagem3.apelido;
                                        break;
                                    case 3:
                                        cout << "\n\nInsira o novo dia de nascimento: ";
                                        cin >> personagem3.diaDataNascimento;
                                        break;
                                    case 4:
                                        cout << "\n\nInsira o novo mês de nascimento: ";
                                        cin >> personagem3.mesDataNascimento;
                                        break;
                                    case 5:
                                        cout << "\n\nInsira o novo ano de nascimento: ";
                                        cin >> personagem3.diaDataNascimento;
                                        break;
                                    case 0:
                                        cout << "\n\nA voltar ...";
                                        break;
                                    default:
                                        cout << "\n\nOpção Inválida!";
                                }
                            }
                            else
                            {
                                cout << "\n\nSlot #3, está vazio!";
                            }
                            break;
                        case 0:
                            cout << "\n\nA voltar...";
                            break;
                        default:
                            cout << "\n\nOpção Inválida!";
                    }
                    break;
                case 3: // eliminar personagens
                    cout << "\n\n--- Eliminar Personagens ---";

                    if (personagem1Ocupada == true)
                        cout << "\n1 - Slot #1 - " << personagem1.nomeProprio << " " << personagem1.apelido;
                    else
                        cout << "\n1 - Slot #1 - *Vazio*";

                    if (personagem2Ocupada == true)
                        cout << "\n2 - Slot #2 - " << personagem2.nomeProprio << " " << personagem2.apelido;
                    else
                        cout << "\n2 - Slot #2 - *Vazio*";

                    if (personagem3Ocupada == true)
                        cout << "\n3 - Slot #3 - " << personagem3.nomeProprio << " " << personagem3.apelido;
                    else
                        cout << "\n3 - Slot #3 - *Vazio*";

                    cout << "\n0 - Sair ";

                    cout << "\n\nOpção: ";
                    cin >> opcaoEliminar;

                    if (opcaoEliminar == 1)
                    {
                        personagem1.nomeProprio.clear();
                        personagem1.apelido.clear();
                        personagem1.diaDataNascimento = 0;
                        personagem1.mesDataNascimento = 0;
                        personagem1.anoDataNascimento = 0;

                        personagem1Ocupada = false;

                        cout << "Slot #1 limpo, personagem eliminado.";
                    }
                    else if (opcaoEliminar == 2)
                    {
                        personagem2.nomeProprio.clear();
                        personagem2.apelido.clear();
                        personagem2.diaDataNascimento = 0;
                        personagem2.mesDataNascimento = 0;
                        personagem2.anoDataNascimento = 0;

                        personagem2Ocupada = false;

                        cout << "Slot #2 limpo, personagem eliminado.";
                    }
                    else if (opcaoEliminar == 3)
                    {
                        personagem3.nomeProprio.clear();
                        personagem3.apelido.clear();
                        personagem3.diaDataNascimento = 0;
                        personagem3.mesDataNascimento = 0;
                        personagem3.anoDataNascimento = 0;

                        personagem3Ocupada = false;

                        cout << "Slot #3 limpo, personagem eliminado.";
                    }
                    else if (opcaoEliminar == 0)
                    {
                        cout << "\nA sair.";
                    }
                    else
                    {
                        cout << "\nOpção Inválida.";
                    }
                    break;
                case 4: // Continuar o programa
                    personagemSelecionado = 0;
                    cout << "\n\n--- Selecionar Personagem ---";

                    if (personagem1Ocupada == true)
                        cout << "\n1 - Slot #1 - " << personagem1.nomeProprio << " " << personagem1.apelido;
                    else
                        cout << "\n1 - Slot #1 - *Vazio*";

                    if (personagem2Ocupada == true)
                        cout << "\n2 - Slot #2 - " << personagem2.nomeProprio << " " << personagem2.apelido;
                    else
                        cout << "\n2 - Slot #2 - *Vazio*";

                    if (personagem3Ocupada == true)
                        cout << "\n3 - Slot #3 - " << personagem3.nomeProprio << " " << personagem3.apelido;
                    else
                        cout << "\n3 - Slot #3 - *Vazio*";

                    cout << "\n\nOpção: ";
                    cin >> selecionarPersonagem;

                    if (selecionarPersonagem == 1)
                    {
                        if (personagem1Ocupada == true)
                        {
                            personagemSelecionado = 1;

                            cout << "\n\nA continuar o programa com " << personagem1.nomeProprio << " " << personagem1.apelido << "...";
                        }
                        else
                        {
                            cout << "\n\nSlot #1 vazio, tem de criar uma personagem...";
                        }
                    }
                    else if (selecionarPersonagem == 2)
                    {
                        if (personagem2Ocupada == true)
                        {
                            personagemSelecionado = 2;

                            cout << "\n\nA continuar o programa com " << personagem2.nomeProprio << " " << personagem2.apelido << "...";
                        }
                        else
                        {
                            cout << "\n\nSlot #2 vazio, tem de criar uma personagem...";
                        }
                    }
                    else if (selecionarPersonagem == 3)
                    {
                        if (personagem3Ocupada == true)
                        {
                            personagemSelecionado = 3;

                            cout << "\n\nA continuar o programa com " << personagem3.nomeProprio << " " << personagem3.apelido << "...";
                        }
                        else
                        {
                            cout << "\n\nSlot #3 vazio, tem de criar uma personagem...";
                        }
                    }
                    else
                    {
                        cout << "\n\nOpção Inválida.";
                    }
                    break;
                case 5:
                    
                    cout << "\n\nA terminar o programa  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    cout << "  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    cout << "  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    terminarPrograma = true;
                    escolherOndeIr = 6;
                    break;
                default:
                    cout << "\n\nOpção Inválida.";
            }


        }

        escolherPersonagem = 0;

        while (escolherOndeIr != 6 && escolherOndeIr != 5)
        {
            cout << "\n\n\n----- Onde deseja ir? -----" << endl;

            cout << "1 - Banco;" << endl;
            cout << "2 - Multibanco;" << endl;
            cout << "3 - Centro Comercial;" << endl;
            cout << "4 - Restaurante;" << endl;
            cout << "5 - Trocar de Pessoa;" << endl;
            cout << "6 - Terminar o programa;" << endl;

            cout << "\nOpção (1-6): ";
            cin >> escolherOndeIr;

            // --------------------------------------------

            switch (escolherOndeIr)
            {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    cout << "\n\nA abrir menu de personagens.";
                    break;
                case 6:
                    cout << "\n\nA terminar o programa  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    cout << "  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    cout << "  .";

                    this_thread::sleep_for(chrono::seconds(1));

                    terminarPrograma = true;
                    break;
                default:
                    cout << "\n\nOpção Inválida, tente novamente.";
            }
        }

        escolherOndeIr = 0;
    } while (terminarPrograma != true);


    cout << "\n\nPrograma terminado!" << endl;
    
    return 0;
} 