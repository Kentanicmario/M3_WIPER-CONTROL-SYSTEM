# WIPER CONTROL SYSTEM

## ABSTRACT

Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots. The wiper itself has about six parts called pressure points or claws that are small arms under the wiper. The system is developed to mitigate driving distractions and allow drivers to focus on their primary task of driving. The distraction eliminated with the development of this product is the manual adjustment of windshield wipers when driving in precipitation. The few seconds that a driver takes their attention off the road to adjust a knob while driving in poor weather conditions could potentially lead to car accidents. This project explains working method of wiper control system based on stm32, an ARM based micro controller.

## INTRODUCTION

The wiper control system is used to detect rainfall and activate automobile rain wiper automatically by using buttons without driver interaction. The distraction eliminated with the development of this product is the manual adjustment of windshield wipers when driving in precipitation. The few seconds that a driver takes their attention off the road to adjust a knob while driving in poor weather conditions could potentially lead to car accidents.Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots. The wiper itself has about six parts called pressure points or claws that are small arms under the wiper.

## OBJECTIVES

*	When the button is pressed ONCE, ACC mode will be turned on.
*	When the button is pressed TWICE, Ignition mode will be turned on.
*	When the button is pressed THREE times, wiper will be turned on.
*	When the button is pressed FOUR times, wiper will be turned off.

## SWOT ANALYSIS

### STRENGTH

* This project helps to find raindrops and clears it automatically without driver interaction.
* It leads to prevent car accidents during raining seasons.

### WEAKNESS

* System is not fully automatic, it partially depends on driver's button actions.
* During code compilation runtime errors or any other errors can lead the wipers to stuck inbetween the car screen.

### OPPORTUNITY

* The proposed model is less time consuming.
* This project can be operated with minimal man power.

### THREAT

* The project would have operational shortcomings in case of battery power failure.

## 4W's AND 1H's

### WHO

This is used by the driver who is inside the car.

### WHAT

This method is used by the driver to clear water drops on the car screen.

### WHEN

This method is useful particularly during raining seasons.

### WHERE

This method can be deployed in cars and other vehicles.

### HOW

This program can be executed in a system which has linux or windows operating system.

## High Level Requirements
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| 1 | User must check the BUTTTON is pressed  | execution of program | Microcontroller starts | RED LED ON| PASS |
| 2 | User must check the BUTTTON is pressed  | execution of program | WIPER is ON| BLUE LED ON| PASS |
| 3 | User must check the BUTTTON is pressed  | execution of program | WIPER is ON | GREEN LED ON| PASS |
| 4 | User must check the BUTTTON is pressed  | execution of program | WIPER is ON | ORANGE LED ON| PASS |
| 5 | User must check the BUTTTON is pressed  | execution of program | Microcontroller stops | LED OFF| PASS |

## Low Level Requirements
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| 1 | User must be able to check the BUTTTON is pressed for two seconds | execution of program | Microcontroller starts | RED LED ON| PASS |
| 2 | User must be able to check the BUTTTON is pressed  | execution of program | WIPER starts and speed is slow | BLUE LED ON| PASS |
| 3 | User must be able to check the BUTTTON is pressed  | execution of program | WIPER starts and speed is moderate | GREEN LED ON| PASS |
| 4 | User must be able to check the BUTTTON is pressed  | execution of program | WIPER starts and speed is fast | ORANGE LED ON| PASS |
| 5 | User must be able to check the BUTTTON is pressed again for two seconds | execution of program | Microcontroller stops | LED OFF| PASS |


