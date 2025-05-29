# Incontro 2025-05-21 (da telematico, 8:30-11:00, 3 ore)

Oggi abbiamo proseguito col [problama cesena](https://training.olinfo.it/task/itday_cesena).

Già la volta scorsa avevamo visto che:

1. il problema poteva essere risolto chiamando una sequenza di visite BFS, ossia in O(mn) tempo

Il piano per fare questo è nella prima sotosezione e potrà venire utile anche per la soluzione finale


2. per poter risolvere anche le istanze più grandi dobbiamo però trovare un algoritmo O(m + n) o al più  O(m log n)

Ci siamo quindi posti la seguente domanda su cui oggi ancora lavoreremo:
è possibile ridurre il problema ad una singola chiamata ad una procedura per il calcolo della BFS?

# algoritmo quadratico

L'idea è di lanciare fino ad un massimo di n BFS in una fase preliminare per raccogliere le informazioni sul campo, e solo in una successiva fase incominciare davvero a visitare i chioschi per mangirasi le piadine.

## Fase 1

   Degli n nodi del grafo, solo T sono chioschi che vendono piadine.
   L'obiettivo di questa fase è farmi una mappa che per ciascuno di questi T chioschi mi dica fino a quando farei ancora in tempo a magiarlo (ad esempio, se posso mangiarlo quando in pancia ho già due panini ma non quando in pancia ne ho già 3 allora vorrei dire che al più tardi possibile lo mangio come terzo):

    deadline[i] = al più tardi con quale numero d'ordine lo mangio

    un modo semplice per ottenere questo vettore se sono disposto a pagare quadratico è quello di lanciare più volte una BFS modificata in modo che si rifiuti di attraversare archi con scadenza più bassa di un threshold specificato in input:

    for threshold in range(1,T+1):
       reached_within_threshold = BFS(0, threshold)
       for v in reached_within_threshold: # per ogni nodo
           deadline[v] = threshold

## Fase 2
   L'obiettivo di questa fase è:
      dato il vettore delle deadline, quale è il massimo numero di panini che posso riuscire a mangiare.

   per semplificarci le cose, se mi interessase solo il numero di panini che riesco a mangiare (fregandomene di quali) posso pensare che il vettore delle deadline sia bello che ordinato.

   Esempio:  3 3 4 4 4 5 5 7 7 7 8 9 9

In questo caso potremmo fare:

mangiati = 0
for d in deadline:
    if d > mangiati:
       mangiati += 1

Supponiamo ora che che il vettore delle deadline sia disordinato e mi interessi di specificare quali panini e in quale ordine andare a mangiarli
Beh, posso ordinarlo
Quindi, se come da esempio era:

0 1 2 3 4 5 6 7 8 9 10 11 12
3 7 4 9 4 5 3 7 4 5  8  9  7

orinando le coppie nome/valore diventa:

  0 6 2 4 8 5 9 1 7 12 10 3 11
  3 3 4 4 4 5 5 7 7  7  8 9  9

e quindi faremo così

mangiati = []
for i,d in enumerate(deadline):
    if d > len(mangiati):
       mangiati.append(i)

In questa fase è ovviamente naturale mangiarsi i panini in `mangiati` partendo da quelli più urgenti (da sinistra veso destra)


# algoritmo lineare

Il collo i bottigli della soluzione quadratica di cui sopra è il computo delle del vettore delle deadline.

Il nostro obiettivo è quindi quello di uscircene con un algoritmo O(m log n) o ancora meglio O(m) complessivo per il computo delle del vettore delle deadline.

Vorremo condensare il lavoro fatto da n chiamate alla BFS ad una sola chiamata.

Forse con una singola chiamata della BFS pura di cui sopra non si riesce, ma magari è in qualche modo possibile metterle comunque insieme in un unico algoritmo improntato alla BFS che ammortizzi in qualche modo il lavoro compessivo di propagazione del fuoco a partire dal nodo 0.

Per intravedere questo, conviene però partire dalla visione dataci dalla precedente soluzione quadratica.

