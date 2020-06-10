# VariableEbow
Experiment to vary E-Bow Frequency with a ribbon potentiometer


Voor de opdracht "Electro-akoestische syntesizer" heb wilde ik met een Teensy proberen om gecontrolleerd bepaalde boventonen van een snaar te kunnen exciteren. Dit wilde ik doen door ofwel de input omhoog te transponeren en terug op de snaar te spelen, of door de frequentie te meten vanaf de input en die frequentie vermenigvuldigen met een integer, en dat vervolgens via een PWM output op de snaar te spelen. Hierin wordt de verhoging in toon met een ribbon potentiometer gecontroleerd.

Helaas ligt mijn Teensy 3 nog in Utrecht. Ik wist niet dat de Teensy 4 nog veel audio probelemen heeft, en vaak ook niet ondersteund wordt door audio libraries. Hierdoor viel mijn plan om audio input te gebruiken een beetje in de soep. Op het moment wordt de afgespeelde frequentie bepaald door de ribbon potentiometer. Dit is minder cool omdat je nu echt moet proberen om een boventoonfrequentie te raken op de potmeter, terwijl je met de originele methode altijd raak zou zitten.

Toch vind ik het resultaat nog best aardig klinken, en het bevestigd zeker dat het idee wel potentie heeft. Het is een goed prototype waar ik mee verder kan als ik mijn oude Teensy terug heb...

Zowel de gebruikte code als de code die gebruikt zou worden met het originele concept staat in deze repo. Daarnaast een video en een schematische weergave.

Video:
https://drive.google.com/file/d/1GRaoLsrjWqtwp6QXOdJfBQ35Ok2LDgG9/view?usp=sharing
