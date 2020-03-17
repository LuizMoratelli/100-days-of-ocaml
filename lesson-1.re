/*
Uma breve história:
  ReasonML é basicamente uma nova sintaxe de OCaml criada por Jordan Walke, que por sinal também é o criador do ReactJS.
  O Reason pode ser considerado como uma "primo" do JavaScript
  - Familiar a programadores JS
  - sólido
  - estaticamente tipado
  - mais rápido 
  - simples
  - Com o acesso aos dois ambientes, OCaml e JS.
*/

/* "Variáveis"/Let Bindings */
let texto = "teste";
let caracter = 'a';
let numero = 1;
let decimal = 1.5;
let logico = false; 
let nenhum = None;
let algum = Some(3);
let variavel = ref(4); /* Mutavel */
variavel := variavel^ + 1 ;

/* Concatenação String */
Js.Log(texto ++ " divertido");

/* Operadores Matemáticos */
Js.log(numero + 4);
Js.log(decimal +. 0.5);

/* Records */
type pessoa = {nome: String, idade: int};
let pessoa = {nome: "Luiz", idade: 21};
Js.log(pessoa.nome);
let novaPessoa = {...pessoa, nome: "Augusto"};

/* Array/Tuplas */
let vetor = [|1, 2, 3|];
let vetorI = [1, 2, 3];
Js.log(vetor[0]);
let tupla = (1, "Teste");
let (valor, texto) = tuplal;
Js.log(valor);

/* Funcões */
let cumprimento = () => "Oi, ";
let saudacao = (greeting, name) => Js.log(greeting ++ name);

saudacao(cumprimento(), "Luiz");

/* Blocos*/
/* Ultima operacao eh retornada by default*/
let bloco = {
	let x = 3;
	let y = 4;
	x + y;
}
Js.log(bloco);

/* Currying */
let add = (a, b) => a + b
let add5 = add(5);
Js.log(add5(3));
