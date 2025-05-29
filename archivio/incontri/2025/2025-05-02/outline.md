# Incontro 2025-05-02 (Zoom, 8:00-8:30, 2 ore)

Oggi abbiamo lavorato col codice da voi scritto per risolvere il problema `spiedini di frutta`.
Abbiamo segnalato esplorato il servizio offerto dalla piattaforma di training per le oii che consente di sottomettere una soluzione per ricevere valutazione e feedback.
In particolare, per questo problema il servizio è attivo a:

```
   https://training.olinfo.it/task/oii_spiedini/submit
```

Abbiamo anche sottolineato che piattaforme come questa sono organizzate per consentire la scrittuare di codici dual-purpose, che quando sottomessi alla piattaforma si interfacciano per come richiesto sulla piattaforma mentre in locale consento di facilitare le operazioni di testing lavorando da terminare.
In generale, ha poco senso sottomenttere a tali piattaforme un codice che non sia stato testato prima in locale.

Dei vari approcci al debugging, è il print-debugging quello che fa e deve fare la parte da leone.

Non abbiamo terminato l'esplorazione del codice che abbiamo tradotto da java a c++ (per questo problema training accetta solo c/c++ o pascal) ma siamo pervenuti alla versione che si trova nel folder `spiedini`.

Questa versione ha per così dire completato la mera procedura risolutiva da cui siamo partiti inserendo la gestione di input/output approntandone anche la riderizione.

Inoltre ha chiarito il codice con dei commenti. Abbiamo anche incluso la possibilità di fare delle assert anche se al momento non ne viene fatto un vero uso.

Abbiamo trovato un minuscolo caso di input (`bad_test.input.txt`) che dovrà facilmente consegnarci un baco attraverso print-debugging.

Ma vi passo la palla e semmai ne riparliamo al prossimo incontro.

