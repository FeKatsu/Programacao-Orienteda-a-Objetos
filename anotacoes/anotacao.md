# Graus de acesso de atributos 

## Public
Pode ser acessado dentro da classe que a define ou fora.
## Private
Só pode ser acessado por métodos dentro da  própria classe que a define.
## Protected
Pode ser acessado dentro da própria classe que define o atributo ou por suas classes hereditárias.
## Virtual
O _contrato_ de implementação - usado em classes abstratas

# Chave abstrada
definições básicas de uma coisa básica que deve existir dentro de uma classe.

Se possuir coisas que não foram implementadas, ela tem um "contrato" que deverá implementar.

*Não consegue instanciar objetos*

~~~
class Animal {
        virtual void make_sound();
        :
        protected
            string name;
            int age;
}
~~~

# Chave concreta
Implementação de alguma classe abstrata. Tem a função de implementar o que ficou pendente na classe abstrata.

~~~
class Gato public Animal {
    :
    void make_sound(){ override
        str::cout<<"gato que fala"<<std::cndl;
        return;
    }
    :
    void change_name(std::string newName){
        this->name = newName;
        return;
    }
}
~~~

* Polimorfismo utilizando o mesmo nome de função
~~~
void make_sound(){ cout <<"miau"<<endl;}
void make_sound(string str){ cout <<"o gato disse"<<str<<endl;}
~~~

# Sobrecarga de operadores

Uso do mesmo operador para coisas diferentes (+ é usado para somas aritméticas e concatenação de strings) 

Em POO pode-se somar 2 objetos, exemplo:

~~~
Gato operador+(Gato b) {
    return Gato(name+b.name, o);
}
~~~

## Sobre funções e parâmetros
~~~ 
Gato(string.name, int age=0) -> valor padrão
~~~

## Operador new e delete

### new
L>Ponteiro

L>Faz alocação de memória

*Faz um malloc() para alocar memória*

### delete
L>Libera memória

*Faz um free()*

### Implementar

~~~
class Poligon {  //classe abstrata
    virtual calcularArea();
}

//classes concretas
class Circulo()...
class Retangulo()...
class Quadrado()...
~~~