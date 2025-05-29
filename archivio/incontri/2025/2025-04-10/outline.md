# Incontro 2025-04-10 (biblioteca Ca Vignal 1, 10:30-12:30, 2 ore)

## Primo incontro

abbiamo cercato di raccogliere insieme un'idea di cosa potrebbe essere questo corso/spazio di auto-perfezionamento.

Per noi i problemi sono cibo, lavoreremo per problemi.

### Primo problema: Uno o due passi

Il primo che avete richiamato voleva ricadere nel paradigma della Programmazione Dinamica e lo chiamerei "Uno o due passi"?
Lo abbiamo discusso fornendo un'introduzione anche generale alla programmazione dinamica ma anche sottolineando il messaggio apparentemente contrastante che un problema va affrontato lavorando con le mani, giochicchiando con casi particolari lasciando gradualmente emergere le idee da poi raccogliere e riorganizzare. 

Individuare il contratto ricorsivo.

Programmazione Dinamica e RIcorsione con Memoizzazione: due occhi che si rafforzano reciprocamente.

### Secondo problema: cammino ottimo in un DAG

Il secondo problema che avete proposto poteva essere riportato alla questione di trovare un cammino ottimo in un DAG.

Siccome la nostra effettiva capacità di saper fare cose dipenede dall'avere sviluppato anche i muscoli antagonisti (lo scatto evolutico del pollice opponibile)
abbiamo richiamato la teoria della complessità, e in particolare abbiamo citato il problema di Hamilton dimostrato NP-completo da Karp nel 1972.
Abbiamo sfruttato questa conoscenza per concludere che non avremmo mai potuto risolvere questo problema di cammino ottimo (invertendo i pesi potremmo facilmente mapparci un problema di cammino massimo) se non sfruttando l'assunzione sottostante di essere in un DAG.

### Buona caratterizzazione dei DAG

Abbiamo quidi cercato di mettere in luce i concetti di buona congettura e di buona caratterizzazione. Ed abbiamo dato la buona caratterizzazione dei DAG. La dimostrazione di questa buona caratterizzazione è diventato un algoritmo di riconoscimento di DAG che, per ogni DAG, ne produceva un topological sort che ne dimostrasse succintamente l'aciclicità.

### E una vota compreso in senso operativo il significato dell'assunzione che stavamo lavorando con DAGs ...

Il topological sort ci forniva la struttura squisitamente ricorsiva (un'ordinamento totale dei nodi, ossia la fila indiana) su cui elaborare una Programmazione Dinamica risolutiva del problema originale.

### Terzo problema - un problema che richiede approccio ricorsivo

Con riferimento a due array A e B ordinati vorremmo trovare la mediana del loro merge in O(log |A| + |B|) queries. (Quando l'algoritmo parte ha accesso ai due array già scritti sulla pietra.)

Qui dobbiamo trovare un divide-et-impera, è richiesto un approccio ricorsivo.
Di nuovo abbiamo cercato di individuare cosa poteva succedere su istanze specifiche o con certe caratteristiche, per fare emergere la natura del problema.
Ci siamo rappresentati il tipo di informazioni che dovevamo raccoglier eprima di poter rispondere.
Abbiamo pingato/testato nel concreto il tipo di query che poteva essere più conveniente fare, per ottenere una prima comprensione di massima di quale potesse essere la politica generale dell'algoritmo.
Ci siamo resi conto che conveniva generalizzare il problema (da ricerca dell'elemeno in posizione N/2 alla ricerca dell'elemento in posizione t specificata come parte dell'input) per poter chiudere il contratto ricorsivo.

Anche in occasione di questo terzo problema abbiamo ulteriormente approfondito la nostra lode all'escursione vocale dal concreto (lavorare con le mani) all'astratto (da gestire con metodo ed umiltà).


### Challenge

Frequentare problemi, trovare e portarci problemi interessanti e stimolanti che vi resistano o su cui gradireste comunque un confronto di idee.
