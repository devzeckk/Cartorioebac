# Cartório EBAC

Sistema de cadastro de usuários desenvolvido em **C** durante o curso de Tecnologia da Informação da [EBAC](https://ebaconline.com.br/).

## Sobre o projeto

O programa simula um pequeno sistema de cartório para administração de registros. O acesso é protegido por uma senha de administrador e, após o login, o usuário pode gerenciar cadastros identificados por CPF.

Cada registro é salvo em um arquivo cujo nome corresponde ao CPF informado. Os dados armazenados são:

- CPF;
- nome;
- sobrenome;
- cargo.

## Funcionalidades

- **Registrar nomes:** cria um cadastro e salva os dados em arquivo;
- **Consultar nomes:** busca e exibe os dados de um CPF;
- **Deletar nomes:** remove o arquivo correspondente ao cadastro;
- **Autenticação de administrador:** libera o menu mediante senha.

> Para fins didáticos, a senha definida no código é `admin`. Em um sistema real, credenciais nunca devem ficar expostas no código-fonte.

## Tecnologias e conceitos

- Linguagem C;
- Manipulação de arquivos com `stdio.h`;
- Strings com `string.h`;
- Localização e acentuação com `locale.h`;
- Criação, leitura, atualização e remoção de arquivos;
- Estruturas condicionais, laços e funções.

## Como executar

Clone o repositório:

```bash
git clone https://github.com/devzeckk/Cartorioebac.git
cd Cartorioebac
```

Compile o arquivo `Cartorio.c` com um compilador C, como o GCC, e execute o programa em um ambiente compatível. O código utiliza comandos de terminal do Windows, como `cls` e `pause`.

## Menu do sistema

```text
1 - Registrar nomes
2 - Consultar nomes
3 - Deletar nomes
4 - Sair do sistema
```

## Status

Projeto educacional desenvolvido durante a jornada de aprendizado em C.

## Autor

Desenvolvido por [devzeckk](https://github.com/devzeckk).

---

Feito com dedicação durante o curso de Tecnologia da Informação da EBAC.\n