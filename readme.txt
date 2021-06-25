La grande maggioranza dei file .cpp sono da intendersi relativi al rispettivo file .h

Il codice è stato scritto in Linux (Fedora 34), ma è interamente valido anche per
Windows e può essere compilato per tale piattaforma.

Sezione A:
    -A.1 autoredialog.cpp / ln 20-42 (principale) | classe "Autore" definita in autore.cpp 
        -- Aggiunta afferenze / ln 45-50 -> lineinputdialog.cpp (intero file)
    
    -A.2 conferenzadialog.cpp / ln 17-42 (principale) | classe "Conferenza" definita in conferenza.cpp
        -- Aggiunta organizzatori / ln 75-80 -> lineinputdialog.cpp (intero file)

    -A.3 rivistadialog.cpp / ln 19-42 (principale) | classe "Rivista" definita in rivista.cpp

    -A.4 articolodialog.cpp / ln 18-50 (principale) | classe "Articolo" definita in articolo.cpp
        -- Aggiunta keyword / ln 66-83 -> lineinputdialog.cpp (intero file)
        -- Aggiunta autori / ln 59-64 -> lineinputdialog.cpp (intero file)

    Una volta chiusa la finestra di aggiunta di un elemento, viene chiamato il metodo refresh_(autori/conferenze/riviste/articoli)_list()
    per aggiornare la lista relativa a quell'elemento:
    -A.1.1 mainwindow.cpp -> refresh_autori_list()  ln 66-73
    -A.1.2 mainwindow.cpp -> refresh_conferenze_list()  ln 101-108
    -A.1.3 mainwindow.cpp -> refresh_riviste_list()  ln 134-139
    -A.1.4 mainwindow.cpp -> refresh_articoli_list()  ln 164-170

    I dati sono conservati in all_data.h, particolarmente in strutture del tipo " inline QVector<*classe elemento*> "

    La visualizzazione de dati è gestita da (autore/conferenza/rivista/articolo)dialog.cpp in due metodi: switchUiElements e fill_info.
    Vengono chiamati da mainwindow.cpp su *dialog.cpp dopo che l'utente seleziona un elemento e preme il pulsante "Visualizza *elemento*".
    Viene chiamato il metodo on_approfondisci_*elemento*_clicked che riconosce quale *elemento* è stato selezionato e
    riempie il relativo dialog con le informazioni necessarie.
    Il primo disattiva l'interattività della finestra di dialogo e nasconde i widget non utili
    alla visualizzazione; il secondo riempie i campi con i dati richiesti.

    -A.5 mainwindow.cpp ln 76-89 -> autoredialog.cpp / switchUiElements ln 70-81 & fill_info ln 83-91
    -A.6 mainwindow.cpp ln 109-122 -> conferenzadialog.cpp / switchUiElements ln 44-55 & fill_info ln 64-72
    -A.7 mainwindow.cpp ln 140-153 -> rivistadialog.cpp / switchUiElements ln 51-60 & fill_info ln 42-49
    -A.8 mainwindow.cpp ln 170-184 -> articolodialog.cpp / switchUiElements ln 163-177 & fill_info ln 146-161

D'ora in poi tutte le operazione verranno effettuate al seguito dell'interazione con un pulsante.
Viene inoltre utilizzato un altro dialog con i metodi changeUI e fill_*arg*, dove il primo modifica
l'interfaccia del dialog e il secondo riempie la lista con le informazioni desiderate.
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

         All'avvio dell'eseguibile viene controllata l'esistenza del file json_data.json nella stessa directory dell'eseguibile. Se la risposta è positiva, vengono
         letti i dati dal file (ln 33-120), altrimenti viene creato un nuovo file nella stessa directory dell'eseguibile (ln 11-17).

         Inoltre all'aggiunta di un nuovo elemento (Autore/Rivista/Conferenza/Articolo/Keywords) il file json_data.json viene aggiornato tramite le funzioni writeautore (ln 122-131),
         writeconferenza (ln 133-145), writerivista (ln 147-155), writearticolo (ln 157-177) e wirtekeywords (ln 179-183)