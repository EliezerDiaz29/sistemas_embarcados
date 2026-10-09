# Sensor de Ré

**Alunos:** Eliezer Velasquez e Pablo Ricardo.

## Peças utilizadas

1. Placa Arduino Uno.
2. Placa de ensaio (protoboard).
3. Piezo (buzzer).
4. LED RGB.
5. Resistores.
6. Cabos jumper macho-macho.
7. Sensor ultrassônico.

## Explicação do código

**1. Definição dos pinos**

No início do código, definimos os pinos do Arduino que serão utilizados para controlar o buzzer, o LED RGB e o sensor ultrassônico. Também criamos a variável `atraso`, que controla o intervalo entre os avisos sonoros.

**2. Configuração inicial (`setup`)**

Na função `setup()`, iniciamos a comunicação serial com `Serial.begin(9600)`, configuramos os pinos do sensor como entrada e saída e definimos os pinos do LED RGB e do buzzer como saídas.

**3. Leitura da distância (`sensor_re`)**

A função `sensor_re()` envia um pulso ultrassônico pelo pino `TRIG` e recebe o sinal refletido pelo objeto através do pino `ECHO`. O tempo de retorno é utilizado para calcular a distância aproximada em centímetros.

**4. Funcionamento principal (`loop`)**

Na função `loop()`, o Arduino mede continuamente a distância entre o sensor e o obstáculo. O valor medido é exibido no Monitor Serial por meio de `Serial.println(distancia)`.

Dependendo da distância detectada, o sistema altera a cor do LED RGB e o intervalo entre os avisos sonoros:

* **Menos de 50 cm:** o LED fica vermelho e o intervalo é de 300 milissegundos, indicando que o obstáculo está muito próximo.
* **Entre 50 cm e 99 cm:** o LED fica amarelo e o intervalo é de 1000 milissegundos, indicando atenção.
* **100 cm ou mais:** o LED fica verde e o intervalo é de 2000 milissegundos, indicando que há mais espaço em relação ao obstáculo.

O comando `tone(BUZZER, 2000, 500)` emite um som de 2000 Hz durante 500 milissegundos. Em seguida, o comando `delay(atraso)` determina quanto tempo o programa espera antes de repetir o ciclo.

**5. Controle das cores do LED RGB**

Foram criadas três funções para controlar o LED:

* `verde()`: acende o LED verde.
* `amarelo()`: acende simultaneamente os LEDs vermelho e verde.
* `vermelho()`: acende o LED vermelho.

Essas funções facilitam a leitura do código e permitem identificar visualmente a proximidade de um obstáculo.
