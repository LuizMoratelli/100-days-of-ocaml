# 100-days-of-ocaml

## Log of Round 1 of #100DaysOfOCaml - Started 2020-03-07

### Day 1: 2020-03-07

**Today's Progress**: 
- 🔜 1st chapter of `Real World OCaml`.

**Thoughts:** Difficulties with some syntax and differences between standard libraries.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)

### Day 2: 2020-03-08

**Today's Progress**: 
- ✅ 1st chapter of `Real World OCaml`
- 🔜 2nd chapter of `Real World OCaml`.

**Thoughts:** Thinking about how to transform the content into a didactic digital content of ReasonML.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)

### Day 3: 2020-03-09

**Today's Progress**:
- 🔜 2nd chapter of `Real World OCaml`.
- A look at PPX Deriving.
- I found some ReasonML content in Portuguese.

**Thoughts:** I should generate 1 or more videos for each topic in the book adapted for ReasonML.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)
* [Dicas ReasonML](https://medium.com/@oieduardorabelo/o-que-%C3%A9-reasonml-e0a2b6068306)
* [PPX Deriving](https://github.com/ocaml-ppx/ppx_deriving)


### Day 4: 2020-03-10

**Today's Progress**:
- ✅ 2nd chapter of `Real World OCaml`.
- 🔜 3rd chapter of `Real World OCaml`.
- Seen more about PPX.

**Thoughts:** PPX look very interesting, I need to review it when I have more knowledge of OCaml.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)
* [PPX(0)](https://dev.realworldocaml.org/ppx.html)
* [PPX(1)](http://ocamllabs.io/doc/ppx.html)
* [PPX(2)](https://tarides.com/blog/2019-05-09-an-introduction-to-ocaml-ppx-ecosystem)

### Day 5: 2020-03-11

**Today's Progress**:
- 🔜 3rd chapter of `Real World OCaml`.
- Seen about database drivers.

**Thoughts:** Thinking about create a CLI TODO list connected with MongoDB.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)
* [MongoDB-Driver](https://github.com/jmininger/OCaml-MongoDB-driver-tutorial)
* [Dune](https://github.com/ocaml/dune)
* [Esy](https://esy.sh/)

### Day 6: 2020-03-12

**Today's Progress**:
- 🔜 3rd chapter of `Real World OCaml`.
- Do some tests on online compilers.

**Thoughts:** It's cool to test and practice sometimes, I need to do more of it. Looking for a way to print OCaml's types.

```OCaml
(*List*)
let list = ["Oi"; "Mundo"; "Cruel"];;

(*Function*)
let lengths l = List.map String.length l;;

let print_item item = Printf.printf "%i\n" item;;
List.map (print_item) (lengths list);;

(*Anonymous Function*)
List.map (fun (item: int) -> Printf.printf "%i\n" item) (lengths list);; 
```

**References:**
* [EBOOK](http://dev.realworldocaml.org/)
* [Online Compiler](https://www.tutorialspoint.com/compile_ocaml_online.php)
* [List](https://caml.inria.fr/pub/docs/manual-ocaml/libref/List.html)
* [List.Map](https://riptutorial.com/ocaml/example/9125/list-map)
* [Anonymous Function](https://www.cs.cornell.edu/courses/cs3110/2014sp/recitations/3/rec03.html)
* [Exercism](https://exercism.io/tracks/ocaml)

### Day 7: 2020-03-13

**Today's Progress**:
- ✅ 3rd chapter of `Real World OCaml`.
- 🔜 4th chapter of `Real World OCaml`.

**References:**
* [EBOOK](http://dev.realworldocaml.org/)


### Day 8: 2020-03-14

**Today's Progress**:
- A lot of unsuccessful attempts to compile a file with opam and dune.

**References:**
* [BoilerPlate](https://github.com/EduardoRFS/reason-native-boilerplate)

### Day 9: 2020-03-15

**Today's Progress**:
- Still trying to run the project with `esy x File.ml` with no success.
- [Summary of the first ReasonML lesson created](https://github.com/LuizMoratelli/100-days-of-ocaml/blob/master/lesson-1.re)

```shell
esy build --install -v -v
```

### Day 10: 2020-03-16

**Today's Progress**:
- Created my own repo to save the OCaml's files.
- [Fix some issues with the summary of the first ReasonML lesson](https://github.com/LuizMoratelli/100-days-of-ocaml/blob/master/lesson-1.re)

**References:**
* [BoilerPlate](https://github.com/LuizMoratelli/learn-ocaml)

### Day 11: 2020-03-17

**Today's Progress**:
- [Fixed minor issues with learn-ocaml repository](https://github.com/LuizMoratelli/learn-ocaml)
- 🔜 Recordings of the first reasonml video lesson started

### Day 12: 2020-03-18

**Today's Progress**:
- 🔜 Recordings of the first reasonml video lesson continued
- [minor fixes in the first ReasonML lesson](https://github.com/LuizMoratelli/100-days-of-ocaml/blob/master/lesson-1.re)

### Day 13: 2020-03-19

**Today's Progress**:
- ✅ All pieces of video recorded
- 🔜 Editing of the first reasonml video class started
