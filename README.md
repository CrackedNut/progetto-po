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

## Spiegazione e linee

La grande maggioranza dei file .cpp sono da intendersi relativi al rispettivo file .h


Il codice è stato scritto in Linux (Fedora 34), ma è interamente valido anche per Windows e può essere compilato per tale piattaforma.

+ Sezione A:
  + A.1 autoredialog.cpp / ln 20-42 (principale) | classe "Autore" definita in autore.cpp
    + Aggiunta afferenze / ln 45-50 -> lineinputdialog.cpp (intero file)
 
  + A.2 conferenzadialog.cpp / ln 17-42 (principale) | classe "Conferenza" definita in conferenza.cpp 
    + Aggiunta organizzatori / ln 75-80 -> lineinputdialog.cpp (intero file)

  + A.3 rivistadialog.cpp / ln 19-42 (principale) | classe "Rivista" definita in rivista.cpp

  + A.4 articolodialog.cpp / ln 18-50 (principale) | classe "Articolo" definita in articolo.cpp
    + Aggiunta keyword / ln 66-83 -> lineinputdialog.cpp (intero file)
    
    + Aggiunta autori / ln 59-64 -> lineinputdialog.cpp (intero file)

Una volta chiusa la finestra di aggiunta di un elemento, viene chiamato il metodo refresh_(autori/conferenze/riviste/articoli)_list() per aggiornare la lista relativa a quell'elemento:
  + A.1.1 mainwindow.cpp -> refresh_autori_list()  ln 66-73

  + A.1.2 mainwindow.cpp -> refresh_conferenze_list()  ln 101-108

  + A.1.3 mainwindow.cpp -> refresh_riviste_list()  ln 134-139

  + A.1.4 mainwindow.cpp -> refresh_articoli_list()  ln 164-170

I dati sono conservati in all_data.h, particolarmente in strutture del tipo " inline QVector<\*classe elemento\*> "


La visualizzazione de dati è gestita da (autore/conferenza/rivista/articolo)dialog.cpp in due metodi: switchUiElements e fill_info.\
Vengono chiamati da mainwindow.cpp su \*dialog.cpp dopo che l'utente seleziona un elemento e preme il pulsante "Visualizza \*elemento\*".
Il primo disattiva l'interattività della finestra di dialogo e nasconde i widget non utili alla visualizzazione; il secondo riempie i campi con i dati richiesti.\
Viene chiamato il metodo on_approfondisci_\*elemento\*_clicked che riconosce quale elemento è stato selezionato e riempie il relativo dialog con le informazioni necessarie.



    -A.5 mainwindow.cpp ln 76-89 -> autoredialog.cpp / switchUiElements ln 70-81 & fill_info ln 83-91

    -A.6 mainwindow.cpp ln 109-122 -> conferenzadialog.cpp / switchUiElements ln 44-55 & fill_info ln 64-72

    -A.7 mainwindow.cpp ln 140-153 -> rivistadialog.cpp / switchUiElements ln 51-60 & fill_info ln 42-49

    -A.8 mainwindow.cpp ln 170-184 -> articolodialog.cpp / switchUiElements ln 163-177 & fill_info ln 146-161

D'ora in poi tutte le operazione verranno effettuate al seguito dell'interazione con un pulsante.

Viene inoltre utilizzato un altro dialog con i metodi changeUI e fill_*arg*, dove il primo modifica l'interfaccia del dialog e il secondo riempie la lista con le informazioni desiderate.

Inoltre, spesso, viene usato il signal di un widget che richiama i metodi del tipo fill_*arg*

Sezione B:

    -B.1 mainwindow.cpp ln 181-195 -> genericlistdialog.cpp / changeUI arg == author ln 20-26 & fill_articoliAutore_list ln 127-136

    -B.2 mainwindow.cpp ln 233-238 -> genericlistdialog.cpp / changeUI arg == filterAuthorYear ln 83-92 & fill_filterAuthorYear ln 272-283

    -B.4 mainwindow.cpp ln 211-216 -> genericlistdialog.cpp / changeUI arg == byConferenza ln 43-52 & fill_byConferenza ln 194-205

    -B.5 mainwindow.cpp ln 204-209 -> genericlistdialog.cpp / changeUI arg == byRivista ln 33-42 & fill_byRivista ln 181-192

    -B.6 mainwindow.cpp ln 197-202 -> genericlistdialog.cpp / changeUI arg == byKeyword ln 27-32 & fill_byKeyword ln 160-171

Tutte le implementazioni di ordinamento degli elementi sono state fatte usando bubblesort, e si trovano nel file sorting.cpp

Sezione C:

    -C.1 mainwindow.cpp ln 268-282 -> genericlistdialog.cpp / changeUI arg == lowerPrice ln 119-124 & fill_lowerPrice ln 138-158

    -C.3 Questo si trova in A.5 -> "Visualizza Autore"

    -C.6 mainwindow.cpp ln 247-252 -> genericlistdialog.cpp / changeUI arg == byKeywordPriceHigh ln 93-99 & fill_byKeywordPriceHigh ln 344-365

Sezione D:

    -D.1 mainwindow.cpp ln 233-238 -> genericlistdialog.cpp / changeUI arg == byAuthorYear ln 73-82 & fill_byAuthorYear ln 250-262

    -D.2 mainwindow.cpp ln 218-231 -> genericlistdialog.cpp / changeUI arg == byAuthorPriceLow[byAuthorPriceHigh] ln 73-52 & fill_byAuthorPriceHigh[byAuthorPriceLow] ln 207-248

    -D.6 mainwindow.cpp ln 254-259 -> genericlistdialog.cpp / changeUI arg == byAuthorSpecial ln 100-110 & fill_byAuthorSpecial ln 285-302

Sezione E:

    -E.3 mainwindow.cpp ln 261-266 -> genericlistdialog.cpp / changeUI arg == byKeywordRecurrence ln 111-118 & fill_byKeywordRecurrence ln 367-383

Sezione F:

    -F.4 Per questo punto, ho usato la libreria "JSON for Modern C++" di Niels Lohmann (https://github.com/nlohmann/json).

         Tutte le operazioni sono state implementate nel file json_ops.cpp.

         All'avvio dell'eseguibile viene controllata l'esistenza del file json_data.json nella stessa directory dell'eseguibile. Se la risposta è positiva, vengono letti i dati dal file (ln 33-120), altrimenti viene creato un nuovo file nella stessa directory dell'eseguibile (ln 11-17).

         Inoltre all'aggiunta di un nuovo elemento (Autore/Rivista/Conferenza/Articolo/Keywords) il file json_data.json viene aggiornato tramite le funzioni writeautore (ln 122-131), writeconferenza (ln 133-145), writerivista (ln 147-155), writearticolo (ln 157-177) e wirtekeywords (ln 179-183)