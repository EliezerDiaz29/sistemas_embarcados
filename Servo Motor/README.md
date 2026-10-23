# Servo Motor

**Alunos:** Eliezer Velasquez e Pablo Ricardo.

## Nome do curso:

**Análise e desenvolvimento de sistemas, 4ª fase.**

## Unidade Curricular:

**Desenvolvimento para sistemas embarcados.**


## Peças utilizadas

1. Placa Arduino Uno.
2. Placa de ensaio (protoboard).
3. Servo Motor (2).
4. Potenciometro
5. Cabos jumper macho-macho.

## Explicação do projeto

O projeto consiste em controlar a posição e a velocidade de um servo motor utilizando um Arduino e dois sensores analógicos. O sensor conectado ao pino A0 determina o ângulo do servo motor, convertendo o valor lido, entre 0 e 1023, para uma posição entre 0° e 180°. Já o sensor conectado ao pino A1 controla a velocidade do movimento por meio da função defVel(), que define o tempo de espera entre cada passo do servo. O motor está conectado ao pino digital 7 e realiza movimentos de ida e volta, saindo de 0° até o ângulo determinado pelo primeiro sensor e retornando à posição inicial. Além disso, o código utiliza o Monitor Serial para exibir os valores dos sensores e o ângulo calculado, facilitando o acompanhamento do funcionamento do sistema. O objetivo do projeto é demonstrar como utilizar sensores, funções, estruturas condicionais e laços de repetição para controlar um motor de forma automática com o Arduino.