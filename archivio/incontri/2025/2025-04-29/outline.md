# Incontro 2025-04-29 (Zoom, 18:00-20:00, 2 ore)

Oggi abbiamo affrontato il problema `spiedini di frutta`.
Mentre il problema `bufale` era il primo problema proposto e trattato nel file `.pdf` di questo stesso folder, `spiedini di frutta` è il secondo.

Il problema ammette una ovvia soluzione $O(n^3)$ poichè ogni possibile soluzione è descrivibile specificando le posizioni di due ditini (`last_from_left` e `first_to_right`) su una fila indiana (lo spiedino) di n pezzi di frutta e valutare se una soluzione è ammissibile e quale ne sia il valore costa $O(n)$.

Non serve molta attenzione cura per risparmiare il costo $O(n)$ per la valutazione, semplicemente esplorando le possibili soluzioni secondo un ordine ragionevole e cercando di pagare solo $O(1)$ per aggiornare la valutazione da una soluzione alla successiva (differiscono per la posizione di un solo ditino che si è spostato solo di 1). Questo potrebbe essere già visto come un esempio di come sia importante cercare di ammortizzare i costi.

Abbiamo poi cercato di comprendere come la tecnica della binary search poteva trovare impiego per darci una soluzione $O(n log n)$.

Infine, la soluzione $O(n)$ non solo più efficiente ma anche più semplice ed elegante usciva da un uso più esplicito e consapevole della tecnica dell'analisi ammortizzata.

Suggerisco di andarsi a vedere una qualche illustrazione di questa tecnica come ad esempio si trova in un capitolo del Cormen ed essa specificamente dedicato.


## Sfida per prossima volta:

vedete cosa riuscite a fare col terzo ed ultimo problema proposto (e anche trattato, ma confido voi sappiate non auto-spoilerarvi i problemi) nel file .pdf presente in questo stesso folder.
