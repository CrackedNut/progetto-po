<div id="content">

# TODO list per Progetto PO
<div id="text-table-of-contents">

*   0\. <span>🟢</span> CLASSI
    *   0.1\. <span>🟢</span> Autore
        *   0.1.1\. Id
        *   0.1.2\. Nome
        *   0.1.3\. Cognome
        *   0.1.4\. Afferenze
    *   0.2\. <span>🟢</span> Conferenza
        *   0.2.1\. Nome
        *   0.2.2\. Acronimo
        *   0.2.3\. Luogo
        *   0.2.4\. Data
        *   0.2.5\. Partecipanti
    *   0.3\. <span>🟢</span> Rivista
        *   0.3.1\. Nome
        *   0.3.2\. Acronimo
        *   0.3.3\. Editore
        *   0.3.4\. Data
        *   0.3.5\. Volume
    *   0.4\. <span>🟢</span> Articolo
        *   0.4.1\. Id
        *   0.4.2\. Titolo
        *   0.4.3\. Pagine
        *   0.4.4\. Lista autori
        *   0.4.5\. Lista keyword
        *   0.4.6\. Prezzo
        *   0.4.7\. Lista articoli correlati
        *   0.4.8\. Conferenza o rivista
*   A\. <span>🟢</span> SEZIONE A (Tutti)
    *   A.1\. <span>🟢</span> Aggiunta di un autore
    *   A.2\. <span>🟢</span> Aggiunta di una conferenza
    *   A.3\. <span>🟢</span> Aggiunta di una rivista
    *   A.4\. <span>🟢</span> Aggiunta di un articolo
    *   A.5\. <span>🟢</span> Visualizzare tutti gli articoli
    *   A.6\. <span>🟢</span> Visualizzare tutte le conferenze
    *   A.7\. <span>🟢</span> Visualizzare tutte le riviste
    *   A.8\. <span>🟢</span> Visualizzare tutti gli autori
*   B\. <span>🟢</span> SEZIONE B (Almeno 3)
    *   B.1\. <span>🟢</span> Visualizzare tutti gli articoli di un autore
    *   B.2\. <span>🟢</span> Visualizzare tutti gli articoli di un autore in un anno
    *   B.3\. <span>🔴</span> Visualizzare tutti gli articoli pubblicati dai membri di una struttura (afferenza)
    *   B.4\. <span>🟢</span> Visualizzare tutti gli articoli relativi a una conferenza
    *   B.5\. <span>🟢</span> Visualizzare tutti gli articoli relativi a una rivista
    *   B.6\. <span>🟢</span> Visualizzare tutti gli articoli relativi a una keyword
*   C\. <span>🟢</span> SEZIONE C (Almeno 3)
    *   C.1\. <span>🟢</span> Visualizzare gli articoli con il prezzo più basso tra tutti gli articoli di un autore
    *   C.2\. <span>🔴</span> Visualizzare gli articoli con il prezzo più altro tra tutti gli articoli di un autore
    *   C.3\. <span>🟢</span> Visualizzare la media dei prezzi di tutti gli articoli di un autore
    *   C.4\. <span>🔴</span> Visualizzare il guadagno annuale di una conferenza calcolato come la somma dei prezzi degli articoli presentati per quella conferenza in un anno
    *   C.5\. <span>🔴</span> Visualizzare il guadagno annuale di una rivista calcolato come la somma dei prezzi degli articoli presentati per quella rivista in un anno
    *   C.6\. <span>🟢</span> Visualizzare le keyword la cui somma degli articoli porta al guadagno più alto
*   D\. <span>🟢</span> SEZIONE D (Almeno 2)
    *   D.1\. <span>🟢</span> Visualizzare gli articoli di un autore ordinati per anno
    *   D.2\. <span>🟢</span> Visualizzare gli articoli di un autore ordinati per prezzo
    *   D.3\. <span>🔴</span> Visualizzare gli articoli di una conferenza ordinati per prezzo
    *   D.4\. <span>🔴</span> Visualizzare gli articoli di una rivista ordinati per prezzo
    *   D.5\. <span>🔴</span> Visualizzare gli articoli relativi a una keyword, ordinati per anno decrescente, a parità di anno, ordinati per prezzo crescente e a parità di prezzo ordinati in ordine alfabetico per il cognome del primo autore (*)
    *   D.6\. <span>🟢</span> Visualizzare gli articoli relativi a un autore, ordinati per anno crescente, a parità di anno, ordinati per prezzo decrescente e a parità di prezzo ordinati in ordine alfabetico per la prima keyword nella lista (*)
*   E\. <span>🟢</span> SEZIONE E (Almeno 1)
    *   E.1\. <span>🔴</span> Visualizzare le conferenze in cui esiste una keyword ricorrente in tutti gli articoli
    *   E.2\. <span>🔴</span> Visualizzare le riviste in cui un autore non ha mai pubblicato un articolo
    *   E.3\. <span>🟢</span> Visualizzare le 5 keyword più diffuse
    *   E.4\. <span>🔴</span> Visualizzare le conferenze i cui articoli non hanno keyword in comune
    *   E.5\. <span>🔴</span> Visualizzare le strutture più produttive, dove la produttività di una struttura è calcolata come la somma degli articoli pubblicati da autori afferenti a quella struttura
    *   E.6\. <span>🔴</span> Visualizzare le riviste specialistiche. Una rivista R1 è considerata specialistica se esiste un’altra rivista R2, tale che le keyword degli articoli di R1 sono un sottoinsieme proprio di tutte le keyword degli articoli di R2 (*)
*   F\. <span>🟢</span> SEZIONE F (Facoltativo)
    *   F.1\. <span>🔴</span> Visualizzare tutti gli articoli influenzati da un dato articolo, dove un articolo A influenza un altro articolo B se:
        *   F.1.1\. A è nella lista dei correlati di B e la data di pubblicazione di A è precedente rispetto a quella di B
        *   F.1.2\. A influenza C e C influenza B (*)
    *   F.2\. <span>🔴</span> Visualizzare gli articoli ordinati in ordine decrescente di numero di articoli influenzati. A parità di questo valore, ordinarli in ordine alfabetico (*)
    *   F.3\. <span>🔴</span> Visualizzare le n conferenze più influenti, dove l’influenza di una conferenza è calcolata come la somma dell’influenza di tutti gli articoli presentati in quella conferenza e n è un parametro scelto dall’utente (*)
    *   F.4\. <span>🟢</span> Possibilità di leggere i dati degli autori, degli articoli, delle riviste e delle conferenze da file di testo (l’organizzazione interna del file è a vostra discrezione) (**)
    *   F.5\. <span>🔴</span> Visualizzare le conferenze simili ad una specificata dall’utente. Una conferenza è simile a un’altra conferenza se hanno almeno l’80% delle keyword in comune (**)
    *   F.6\. <span>🔴</span> Visualizzare le triple di conferenze elitarie che hanno la massima influenza. Una tripla di conferenze è considerata elitaria se le keyword presenti negli articoli di ogni conferenza non sono presenti negli articoli delle altre due. L’influenza di una tripla di conferenze è calcolata come la somma delle influenze delle singole conferenze appartenenti alla tripla (**)
</div>
</div>