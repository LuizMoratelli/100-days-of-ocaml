/*
Uma breve história:
  ReasonML é basicamente uma nova sintaxe de OCaml criada por Jordan Walke, que por sinal também é o criador do ReactJS.
  O Reason pode ser considerado como uma "primo" do JavaScript e tem algumas vantagens
como: 
  - Familiar a programadores JS
  - sólido
  - estaticamente tipado
  - mais rápido 
  - simples
*/

/* "Variaveis"/Let Bindings */
let texto = "teste";
let caracter = 'a';
let numero = 1;
let decimal = 1.5;
let logico = false; 
let nenhum = None;
let algum = Some(3);
let variavel = ref(4); /* Mutavel */
variavel := variavel^ + 1 ;

/* Concatenacao String */
let nome = "Luiz"

Js.log({j|Olá, $nome|j});
Js.log("Hi " ++ nome);


/* Operadores Matematicos */
Js.log(numero + 4);
Js.log(decimal +. 0.5);

/* Records */
type pessoa = {nome: string, idade: int};
let pessoa = {nome: "Luiz", idade: 21};
Js.log(pessoa.nome);
let novaPessoa = {...pessoa, nome: "Augusto"};

/* Listas/Array/Tuplas */
let array = [|1, 2, 3|];
let lista = [1, 2, 3];
Js.log(List.nth(lista, 2))
Js.log(array [0]);
let tupla = (1, "Teste");
let (valor, texto) = tupla;
Js.log(valor);

/* Funcoes */
let saudacao = () => "Oi, ";
let cumprimento = (greeting, name) => Js.log(greeting ++ name);
let cumprimentoL = (~greeting="Bom dia, ", ~name as n) => Js.log(greeting ++ n);

cumprimento (saudacao(), "Luiz");
cumprimentoL (~name="Luiz");

/* Blocos*/
/* Ultima operacao eh retornada by default*/
let bloco = {
	let x = 3;
	let y = 4;
	x + y;
}
Js.log(bloco);

/* Currying (Implementação parcial) */ 
let add = (a, b) => a + b
let add5 = add(5);
Js.log(add5(3));
