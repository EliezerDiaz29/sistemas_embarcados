# Ambulância Giroflex

**Alunos:** Eliezer Velasquez e Pablo Ricardo.

## Peças utilizadas

1. Placa Arduino Uno.
2. Placa de ensaio (protoboard).
3. Piezo (buzzer).
4. LED verde.
5. LED vermelho.
6. Resistores.
7. Cabos jumper macho-macho.

## Explicação do código

### 1. Definição das notas musicais

Utilizamos várias diretivas `#define NOTE_` para definir as frequências das notas musicais. Cada nota corresponde a uma frequência medida em hertz (Hz), permitindo que o piezo emita sons diferentes.

### 2. Definição dos pinos

As variáveis `PIEZO`, `LED_VERMELHO` e `LED_AZUL` identificam os pinos do Arduino conectados aos componentes.

* **Pino 8:** piezo, responsável pela emissão do som.
* **Pino 9:** LED vermelho.
* **Pino 10:** LED azul.

### 3. Função `setup()`

A função `setup()` é executada uma única vez quando o Arduino é ligado ou reiniciado.

A instrução `pinMode()` configura os pinos do piezo e dos LEDs como saídas (`OUTPUT`), permitindo que o Arduino controle o som e a iluminação.

### 4. Função `loop()`

A função `loop()` é executada continuamente enquanto o Arduino estiver ligado.

Primeiro, o LED vermelho acende, o LED azul permanece apagado e o piezo emite a nota.

Em seguida, o LED vermelho apaga, o LED azul acende e o piezo emite a nota.

Esse processo se repete continuamente, alternando as luzes e as frequências sonoras para simular o funcionamento de uma ambulância em atendimento.