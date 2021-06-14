<div id="content">

# TODO list per progetto PO

<div id="text-table-of-contents">
</span>

*   <span style="color:purple">🟢</span> CLASSI
    *   <span style="color:purple">🟢</span> Autore
        *   Id
        *   Nome
        *   Cognome
        *   Afferenze
    *   <span style="color:purple">🟢</span> Conferenza
        *   Nome
        *   Acronimo
        *   Luogo
        *   Data
        *   Partecipanti
    *   <span style="color:purple">🟢</span> Rivista
        *   Nome
        *   Acronimo
        *   Editore
        *   Data
        *   Volume
    *   <span style="color:purple">🟢</span> Articolo
        *   Id
        *   Titolo
        *   Pagine
        *   Lista autori
        *   Lista keyword
        *   Prezzo
        *   Lista articoli correlati
        *   Conferenza o rivista
  <br/>
  <br/>        
*   <span style="color:purple">🟢</span> SEZIONE A (Tutti)
    *   <span style="color:purple">🟢</span> Aggiunta di un autore
    *    <span style="color:purple">🟢</span> Aggiunta di una conferenza
    *    <span style="color:purple">🟢</span> Aggiunta di una rivista
    *    <span style="color:purple">🟢</span> Aggiunta di un articolo
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli articoli
    *    <span style="color:purple">🟢</span> Visualizzare tutte le conferenze
    *    <span style="color:purple">🟢</span> Visualizzare tutte le riviste
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli autori
  <br/>
  <br/>     
*   <span style="color:purple">🟢</span> SEZIONE B (Almeno 3)
    *   <span style="color:purple">🟢</span> Visualizzare tutti gli articoli di un autore
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli articoli di un autore in un anno
    *    <span style="color:red">🔴</span> Visualizzare tutti gli articoli pubblicati dai membri di una struttura (afferenza)
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli articoli relativi a una conferenza
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli articoli relativi a una rivista
    *    <span style="color:purple">🟢</span> Visualizzare tutti gli articoli relativi a una keyword
  <br/>
  <br/>     
*   <span style="color:purple">🟢</span> SEZIONE C (Almeno 3)
    *   <span style="color:purple">🟢</span> Visualizzare gli articoli con il prezzo più basso tra tutti gli articoli di un autore
    *    <span style="color:red">🔴</span> Visualizzare gli articoli con il prezzo più altro tra tutti gli articoli di un autore
    *    <span style="color:purple">🟢</span> Visualizzare la media dei prezzi di tutti gli articoli di un autore
    *    <span style="color:red">🔴</span> Visualizzare il guadagno annuale di una conferenza calcolato come la somma dei prezzi degli articoli presentati per quella conferenza in un anno
    *    <span style="color:red">🔴</span> Visualizzare il guadagno annuale di una rivista calcolato come la somma dei prezzi degli articoli presentati per quella rivista in un anno
    *    <span style="color:purple">🟢</span> Visualizzare le keyword la cui somma degli articoli porta al guadagno più alto
  <br/>
  <br/>     
*   <span style="color:purple">🟢</span> SEZIONE D (Almeno 2)
    *   <span style="color:purple">🟢</span> Visualizzare gli articoli di un autore ordinati per anno
    *    <span style="color:purple">🟢</span> Visualizzare gli articoli di un autore ordinati per prezzo
    *    <span style="color:red">🔴</span> Visualizzare gli articoli di una conferenza ordinati per prezzo
    *    <span style="color:red">🔴</span> Visualizzare gli articoli di una rivista ordinati per prezzo
    *    <span style="color:red">🔴</span> Visualizzare gli articoli relativi a una keyword, ordinati per anno decrescente, a parità di anno, ordinati per prezzo crescente e a parità di prezzo ordinati in ordine alfabetico per il cognome del primo autore (*)
    *    <span style="color:purple">🟢</span> Visualizzare gli articoli relativi a un autore, ordinati per anno crescente, a parità di anno, ordinati per prezzo decrescente e a parità di prezzo ordinati in ordine alfabetico per la prima keyword nella lista (*)
  <br/>
  <br/>     
*   6\. <span style="color:purple">🟢</span> SEZIONE E (Almeno 1)
    *   <span style="color:red">🔴</span> Visualizzare le conferenze in cui esiste una keyword ricorrente in tutti gli articoli
    *   <span style="color:red">🔴</span> Visualizzare le riviste in cui un autore non ha mai pubblicato un articolo
    *   <span style="color:purple">🟢</span> Visualizzare le 5 keyword più diffuse
    *   <span style="color:red">🔴</span> Visualizzare le conferenze i cui articoli non hanno keyword in comune
    *   <span style="color:red">🔴</span> Visualizzare le strutture più produttive, dove la produttività di una struttura è calcolata come la somma degli articoli pubblicati da autori afferenti a quella struttura
    *   <span style="color:red">🔴</span> Visualizzare le riviste specialistiche. Una rivista Rconsiderata specialistica se esiste un’altra rivista R2, tale che le keyword degli articoli di Rno un sottoinsieme proprio di tutte le keyword degli articoli di R2 (*)
  <br/>
  <br/>     
*   7\. <span style="color:purple">🟢</span> SEZIONE F (Facoltativo)
    *   <span style="color:red">🔴</span> Visualizzare tutti gli articoli influenzati da un dato articolo, dove un articolo A influenza un altro articolo B se:
        *   A è nella lista dei correlati di B e la data di pubblicazione di A è precedente rispetto a quella di B
        *   A influenza C e C influenza B (*)
    *   <span style="color:red">🔴</span> Visualizzare gli articoli ordinati in ordine decrescente di numero di articoli influenzati. A parità di questo valore, ordinarli in ordine alfabetico (*)
    *   <span style="color:red">🔴</span> Visualizzare le n conferenze più influenti, dove l’influenza di una conferenza è calcolata come la somma dell’influenza di tutti gli articoli presentati in quella conferenza e n è un parametro scelto dall’utente (*)
    *   <span style="color:purple">🟢</span> Possibilità di leggere i dati degli autori, degli articoli, delle riviste e delle conferenze da file di testo (l’organizzazione interna del file è a vostra discrezione) (**)
    *   <span style="color:red">🔴</span> Visualizzare le conferenze simili ad una specificata dall’utente. Una conferenza è simile a un’altra conferenza se hanno almeno l’80% delle keyword in comune (**)
    *   <span style="color:red">🔴</span> Visualizzare le triple di conferenze elitarie che hanno la massima influenza. Una tripla di conferenze è considerata elitaria se le keyword presenti negli articoli di ogni conferenza non sono presenti negli articoli delle altre due. L’influenza di una tripla di conferenze è calcolata come la somma delle influenze delle singole conferenze appartenenti alla tripla (**)

</div>

</div>

</div>