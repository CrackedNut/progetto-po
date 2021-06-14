# progetto-po

<div id="content">

# TODO list per progetto PO

<div id="table-of-contents">

## Table of Contents

<div id="text-table-of-contents">

*   [1\. <span class="done DONE">DONE</span> CLASSI](#org35ff3c9)
    *   [1.1\. <span class="done DONE">DONE</span> Autore](#orgaddc947)
        *   [1.1.1\. Id](#orgf7f738a)
        *   [1.1.2\. Nome](#org4f7ad32)
        *   [1.1.3\. Cognome](#org728bc48)
        *   [1.1.4\. Afferenze](#org516fbdf)
    *   [1.2\. <span class="done DONE">DONE</span> Conferenza](#orge97b5d5)
        *   [1.2.1\. Nome](#org5f3e04e)
        *   [1.2.2\. Acronimo](#org36eff2a)
        *   [1.2.3\. Luogo](#org156ba2e)
        *   [1.2.4\. Data](#orgd8e36d4)
        *   [1.2.5\. Partecipanti](#org42062ed)
    *   [1.3\. <span class="done DONE">DONE</span> Rivista](#orgf67f209)
        *   [1.3.1\. Nome](#orge2c265d)
        *   [1.3.2\. Acronimo](#orgf55b814)
        *   [1.3.3\. Editore](#orgd0fc843)
        *   [1.3.4\. Data](#org7c2689c)
        *   [1.3.5\. Volume](#orgdc2814e)
    *   [1.4\. <span class="done DONE">DONE</span> Articolo](#org9683270)
        *   [1.4.1\. Id](#orgb3637c1)
        *   [1.4.2\. Titolo](#orgbae2465)
        *   [1.4.3\. Pagine](#org6904a09)
        *   [1.4.4\. Lista autori](#orgad08b7b)
        *   [1.4.5\. Lista keyword](#org2d65cde)
        *   [1.4.6\. Prezzo](#org08e7911)
        *   [1.4.7\. Lista articoli correlati](#orgb2687cf)
        *   [1.4.8\. Conferenza o rivista](#orgc679260)
*   [2\. <span class="done DONE">DONE</span> SEZIONE A (Tutti)](#orgd871b3a)
    *   [2.1\. <span class="done DONE">DONE</span> Aggiunta di un autore](#org96cf8f6)
    *   [2.2\. <span class="done DONE">DONE</span> Aggiunta di una conferenza](#org6a2cc5a)
    *   [2.3\. <span class="done DONE">DONE</span> Aggiunta di una rivista](#orgd62a015)
    *   [2.4\. <span class="done DONE">DONE</span> Aggiunta di un articolo](#org2c4070b)
    *   [2.5\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli](#org4476b9b)
    *   [2.6\. <span class="done DONE">DONE</span> Visualizzare tutte le conferenze](#orge3a3a82)
    *   [2.7\. <span class="done DONE">DONE</span> Visualizzare tutte le riviste](#org5988d67)
    *   [2.8\. <span class="done DONE">DONE</span> Visualizzare tutti gli autori](#org1ebdfe2)
*   [3\. <span class="done DONE">DONE</span> SEZIONE B (Almeno 3)](#org601a173)
    *   [3.1\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli di un autore](#org6497937)
    *   [3.2\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli di un autore in un anno](#org72df7ea)
    *   [3.3\. <span class="done NO">NO</span> Visualizzare tutti gli articoli pubblicati dai membri di una struttura (afferenza)](#orge1c58a8)
    *   [3.4\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una conferenza](#org6fe36fa)
    *   [3.5\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una rivista](#org5739a3a)
    *   [3.6\. <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una keyword](#orgc18e164)
*   [4\. <span class="done DONE">DONE</span> SEZIONE C (Almeno 3)](#orgbfe8d05)
    *   [4.1\. <span class="done DONE">DONE</span> Visualizzare gli articoli con il prezzo più basso tra tutti gli articoli di un autore](#org2e99588)
    *   [4.2\. <span class="done NO">NO</span> Visualizzare gli articoli con il prezzo più altro tra tutti gli articoli di un autore](#org3ea8946)
    *   [4.3\. <span class="done DONE">DONE</span> Visualizzare la media dei prezzi di tutti gli articoli di un autore](#orge018290)
    *   [4.4\. <span class="done NO">NO</span> Visualizzare il guadagno annuale di una conferenza calcolato come la somma dei prezzi degli articoli presentati per quella conferenza in un anno](#org6247c65)
    *   [4.5\. <span class="done NO">NO</span> Visualizzare il guadagno annuale di una rivista calcolato come la somma dei prezzi degli articoli presentati per quella rivista in un anno](#org9552558)
    *   [4.6\. <span class="done DONE">DONE</span> Visualizzare le keyword la cui somma degli articoli porta al guadagno più alto](#orgecd18cf)
*   [5\. <span class="done DONE">DONE</span> SEZIONE D (Almeno 2)](#orgebfee2d)
    *   [5.1\. <span class="done DONE">DONE</span> Visualizzare gli articoli di un autore ordinati per anno](#org1f6aa98)
    *   [5.2\. <span class="done DONE">DONE</span> Visualizzare gli articoli di un autore ordinati per prezzo](#org7dc0ea9)
    *   [5.3\. <span class="done NO">NO</span> Visualizzare gli articoli di una conferenza ordinati per prezzo](#org396cb4d)
    *   [5.4\. <span class="done NO">NO</span> Visualizzare gli articoli di una rivista ordinati per prezzo](#org5232306)
    *   [5.5\. <span class="done NO">NO</span> Visualizzare gli articoli relativi a una keyword, ordinati per anno decrescente, a parità di anno, ordinati per prezzo crescente e a parità di prezzo ordinati in ordine alfabetico per il cognome del primo autore (*)](#org37c2462)
    *   [5.6\. <span class="done DONE">DONE</span> Visualizzare gli articoli relativi a un autore, ordinati per anno crescente, a parità di anno, ordinati per prezzo decrescente e a parità di prezzo ordinati in ordine alfabetico per la prima keyword nella lista (*)](#org3c259cd)
*   [6\. <span class="done DONE">DONE</span> SEZIONE E (Almeno 1)](#org9434abf)
    *   [6.1\. <span class="done NO">NO</span> Visualizzare le conferenze in cui esiste una keyword ricorrente in tutti gli articoli](#org5c663ed)
    *   [6.2\. <span class="done NO">NO</span> Visualizzare le riviste in cui un autore non ha mai pubblicato un articolo](#org1f951b9)
    *   [6.3\. <span class="done DONE">DONE</span> Visualizzare le 5 keyword più diffuse](#org3d968bf)
    *   [6.4\. <span class="done NO">NO</span> Visualizzare le conferenze i cui articoli non hanno keyword in comune](#orge9ef9c6)
    *   [6.5\. <span class="done NO">NO</span> Visualizzare le strutture più produttive, dove la produttività di una struttura è calcolata come la somma degli articoli pubblicati da autori afferenti a quella struttura](#org6f82f7e)
    *   [6.6\. <span class="done NO">NO</span> Visualizzare le riviste specialistiche. Una rivista R1 è considerata specialistica se esiste un’altra rivista R2, tale che le keyword degli articoli di R1 sono un sottoinsieme proprio di tutte le keyword degli articoli di R2 (*)](#org0835037)
*   [7\. <span class="done DONE">DONE</span> SEZIONE F (Facoltativo)](#org8c0b178)
    *   [7.1\. <span class="done NO">NO</span> Visualizzare tutti gli articoli influenzati da un dato articolo, dove un articolo A influenza un altro articolo B se:](#org0ed4b89)
        *   [7.1.1\. A è nella lista dei correlati di B e la data di pubblicazione di A è precedente rispetto a quella di B](#org55676e6)
        *   [7.1.2\. A influenza C e C influenza B (*)](#org9100a1a)
    *   [7.2\. <span class="done NO">NO</span> Visualizzare gli articoli ordinati in ordine decrescente di numero di articoli influenzati. A parità di questo valore, ordinarli in ordine alfabetico (*)](#org7e29f81)
    *   [7.3\. <span class="done NO">NO</span> Visualizzare le n conferenze più influenti, dove l’influenza di una conferenza è calcolata come la somma dell’influenza di tutti gli articoli presentati in quella conferenza e n è un parametro scelto dall’utente (*)](#org8ef5f4c)
    *   [7.4\. <span class="done DONE">DONE</span> Possibilità di leggere i dati degli autori, degli articoli, delle riviste e delle conferenze da file di testo (l’organizzazione interna del file è a vostra discrezione) (**)](#orgb5f83bb)
    *   [7.5\. <span class="done NO">NO</span> Visualizzare le conferenze simili ad una specificata dall’utente. Una conferenza è simile a un’altra conferenza se hanno almeno l’80% delle keyword in comune (**)](#org2cded2c)
    *   [7.6\. <span class="done NO">NO</span> Visualizzare le triple di conferenze elitarie che hanno la massima influenza. Una tripla di conferenze è considerata elitaria se le keyword presenti negli articoli di ogni conferenza non sono presenti negli articoli delle altre due. L’influenza di una tripla di conferenze è calcolata come la somma delle influenze delle singole conferenze appartenenti alla tripla (**)](#org98e8d0b)

</div>

</div>

<div id="outline-container-org35ff3c9" class="outline-2">

## <span class="section-number-2">1</span> <span class="done DONE">DONE</span> CLASSI

<div id="outline-container-orgaddc947" class="outline-3">

### <span class="section-number-3">1.1</span> <span class="done DONE">DONE</span> Autore

<div id="outline-container-orgf7f738a" class="outline-4">

#### <span class="section-number-4">1.1.1</span> Id

</div>

<div id="outline-container-org4f7ad32" class="outline-4">

#### <span class="section-number-4">1.1.2</span> Nome

</div>

<div id="outline-container-org728bc48" class="outline-4">

#### <span class="section-number-4">1.1.3</span> Cognome

</div>

<div id="outline-container-org516fbdf" class="outline-4">

#### <span class="section-number-4">1.1.4</span> Afferenze

</div>

</div>

<div id="outline-container-orge97b5d5" class="outline-3">

### <span class="section-number-3">1.2</span> <span class="done DONE">DONE</span> Conferenza

<div id="outline-container-org5f3e04e" class="outline-4">

#### <span class="section-number-4">1.2.1</span> Nome

</div>

<div id="outline-container-org36eff2a" class="outline-4">

#### <span class="section-number-4">1.2.2</span> Acronimo

</div>

<div id="outline-container-org156ba2e" class="outline-4">

#### <span class="section-number-4">1.2.3</span> Luogo

</div>

<div id="outline-container-orgd8e36d4" class="outline-4">

#### <span class="section-number-4">1.2.4</span> Data

</div>

<div id="outline-container-org42062ed" class="outline-4">

#### <span class="section-number-4">1.2.5</span> Partecipanti

</div>

</div>

<div id="outline-container-orgf67f209" class="outline-3">

### <span class="section-number-3">1.3</span> <span class="done DONE">DONE</span> Rivista

<div id="outline-container-orge2c265d" class="outline-4">

#### <span class="section-number-4">1.3.1</span> Nome

</div>

<div id="outline-container-orgf55b814" class="outline-4">

#### <span class="section-number-4">1.3.2</span> Acronimo

</div>

<div id="outline-container-orgd0fc843" class="outline-4">

#### <span class="section-number-4">1.3.3</span> Editore

</div>

<div id="outline-container-org7c2689c" class="outline-4">

#### <span class="section-number-4">1.3.4</span> Data

</div>

<div id="outline-container-orgdc2814e" class="outline-4">

#### <span class="section-number-4">1.3.5</span> Volume

</div>

</div>

<div id="outline-container-org9683270" class="outline-3">

### <span class="section-number-3">1.4</span> <span class="done DONE">DONE</span> Articolo

<div id="outline-container-orgb3637c1" class="outline-4">

#### <span class="section-number-4">1.4.1</span> Id

</div>

<div id="outline-container-orgbae2465" class="outline-4">

#### <span class="section-number-4">1.4.2</span> Titolo

</div>

<div id="outline-container-org6904a09" class="outline-4">

#### <span class="section-number-4">1.4.3</span> Pagine

</div>

<div id="outline-container-orgad08b7b" class="outline-4">

#### <span class="section-number-4">1.4.4</span> Lista autori

</div>

<div id="outline-container-org2d65cde" class="outline-4">

#### <span class="section-number-4">1.4.5</span> Lista keyword

</div>

<div id="outline-container-org08e7911" class="outline-4">

#### <span class="section-number-4">1.4.6</span> Prezzo

</div>

<div id="outline-container-orgb2687cf" class="outline-4">

#### <span class="section-number-4">1.4.7</span> Lista articoli correlati

</div>

<div id="outline-container-orgc679260" class="outline-4">

#### <span class="section-number-4">1.4.8</span> Conferenza o rivista

</div>

</div>

</div>

<div id="outline-container-orgd871b3a" class="outline-2">

## <span class="section-number-2">2</span> <span class="done DONE">DONE</span> SEZIONE A (Tutti)

<div id="outline-container-org96cf8f6" class="outline-3">

### <span class="section-number-3">2.1</span> <span class="done DONE">DONE</span> Aggiunta di un autore

</div>

<div id="outline-container-org6a2cc5a" class="outline-3">

### <span class="section-number-3">2.2</span> <span class="done DONE">DONE</span> Aggiunta di una conferenza

</div>

<div id="outline-container-orgd62a015" class="outline-3">

### <span class="section-number-3">2.3</span> <span class="done DONE">DONE</span> Aggiunta di una rivista

</div>

<div id="outline-container-org2c4070b" class="outline-3">

### <span class="section-number-3">2.4</span> <span class="done DONE">DONE</span> Aggiunta di un articolo

</div>

<div id="outline-container-org4476b9b" class="outline-3">

### <span class="section-number-3">2.5</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli

</div>

<div id="outline-container-orge3a3a82" class="outline-3">

### <span class="section-number-3">2.6</span> <span class="done DONE">DONE</span> Visualizzare tutte le conferenze

</div>

<div id="outline-container-org5988d67" class="outline-3">

### <span class="section-number-3">2.7</span> <span class="done DONE">DONE</span> Visualizzare tutte le riviste

</div>

<div id="outline-container-org1ebdfe2" class="outline-3">

### <span class="section-number-3">2.8</span> <span class="done DONE">DONE</span> Visualizzare tutti gli autori

</div>

</div>

<div id="outline-container-org601a173" class="outline-2">

## <span class="section-number-2">3</span> <span class="done DONE">DONE</span> SEZIONE B (Almeno 3)

<div id="outline-container-org6497937" class="outline-3">

### <span class="section-number-3">3.1</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli di un autore

</div>

<div id="outline-container-org72df7ea" class="outline-3">

### <span class="section-number-3">3.2</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli di un autore in un anno

</div>

<div id="outline-container-orge1c58a8" class="outline-3">

### <span class="section-number-3">3.3</span> <span class="done NO">NO</span> Visualizzare tutti gli articoli pubblicati dai membri di una struttura (afferenza)

</div>

<div id="outline-container-org6fe36fa" class="outline-3">

### <span class="section-number-3">3.4</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una conferenza

</div>

<div id="outline-container-org5739a3a" class="outline-3">

### <span class="section-number-3">3.5</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una rivista

</div>

<div id="outline-container-orgc18e164" class="outline-3">

### <span class="section-number-3">3.6</span> <span class="done DONE">DONE</span> Visualizzare tutti gli articoli relativi a una keyword

</div>

</div>

<div id="outline-container-orgbfe8d05" class="outline-2">

## <span class="section-number-2">4</span> <span class="done DONE">DONE</span> SEZIONE C (Almeno 3)

<div id="outline-container-org2e99588" class="outline-3">

### <span class="section-number-3">4.1</span> <span class="done DONE">DONE</span> Visualizzare gli articoli con il prezzo più basso tra tutti gli articoli di un autore

</div>

<div id="outline-container-org3ea8946" class="outline-3">

### <span class="section-number-3">4.2</span> <span class="done NO">NO</span> Visualizzare gli articoli con il prezzo più altro tra tutti gli articoli di un autore

</div>

<div id="outline-container-orge018290" class="outline-3">

### <span class="section-number-3">4.3</span> <span class="done DONE">DONE</span> Visualizzare la media dei prezzi di tutti gli articoli di un autore

</div>

<div id="outline-container-org6247c65" class="outline-3">

### <span class="section-number-3">4.4</span> <span class="done NO">NO</span> Visualizzare il guadagno annuale di una conferenza calcolato come la somma dei prezzi degli articoli presentati per quella conferenza in un anno

</div>

<div id="outline-container-org9552558" class="outline-3">

### <span class="section-number-3">4.5</span> <span class="done NO">NO</span> Visualizzare il guadagno annuale di una rivista calcolato come la somma dei prezzi degli articoli presentati per quella rivista in un anno

</div>

<div id="outline-container-orgecd18cf" class="outline-3">

### <span class="section-number-3">4.6</span> <span class="done DONE">DONE</span> Visualizzare le keyword la cui somma degli articoli porta al guadagno più alto

</div>

</div>

<div id="outline-container-orgebfee2d" class="outline-2">

## <span class="section-number-2">5</span> <span class="done DONE">DONE</span> SEZIONE D (Almeno 2)

<div id="outline-container-org1f6aa98" class="outline-3">

### <span class="section-number-3">5.1</span> <span class="done DONE">DONE</span> Visualizzare gli articoli di un autore ordinati per anno

</div>

<div id="outline-container-org7dc0ea9" class="outline-3">

### <span class="section-number-3">5.2</span> <span class="done DONE">DONE</span> Visualizzare gli articoli di un autore ordinati per prezzo

</div>

<div id="outline-container-org396cb4d" class="outline-3">

### <span class="section-number-3">5.3</span> <span class="done NO">NO</span> Visualizzare gli articoli di una conferenza ordinati per prezzo

</div>

<div id="outline-container-org5232306" class="outline-3">

### <span class="section-number-3">5.4</span> <span class="done NO">NO</span> Visualizzare gli articoli di una rivista ordinati per prezzo

</div>

<div id="outline-container-org37c2462" class="outline-3">

### <span class="section-number-3">5.5</span> <span class="done NO">NO</span> Visualizzare gli articoli relativi a una keyword, ordinati per anno decrescente, a parità di anno, ordinati per prezzo crescente e a parità di prezzo ordinati in ordine alfabetico per il cognome del primo autore (*)

</div>

<div id="outline-container-org3c259cd" class="outline-3">

### <span class="section-number-3">5.6</span> <span class="done DONE">DONE</span> Visualizzare gli articoli relativi a un autore, ordinati per anno crescente, a parità di anno, ordinati per prezzo decrescente e a parità di prezzo ordinati in ordine alfabetico per la prima keyword nella lista (*)

</div>

</div>

<div id="outline-container-org9434abf" class="outline-2">

## <span class="section-number-2">6</span> <span class="done DONE">DONE</span> SEZIONE E (Almeno 1)

<div id="outline-container-org5c663ed" class="outline-3">

### <span class="section-number-3">6.1</span> <span class="done NO">NO</span> Visualizzare le conferenze in cui esiste una keyword ricorrente in tutti gli articoli

</div>

<div id="outline-container-org1f951b9" class="outline-3">

### <span class="section-number-3">6.2</span> <span class="done NO">NO</span> Visualizzare le riviste in cui un autore non ha mai pubblicato un articolo

</div>

<div id="outline-container-org3d968bf" class="outline-3">

### <span class="section-number-3">6.3</span> <span class="done DONE">DONE</span> Visualizzare le 5 keyword più diffuse

</div>

<div id="outline-container-orge9ef9c6" class="outline-3">

### <span class="section-number-3">6.4</span> <span class="done NO">NO</span> Visualizzare le conferenze i cui articoli non hanno keyword in comune

</div>

<div id="outline-container-org6f82f7e" class="outline-3">

### <span class="section-number-3">6.5</span> <span class="done NO">NO</span> Visualizzare le strutture più produttive, dove la produttività di una struttura è calcolata come la somma degli articoli pubblicati da autori afferenti a quella struttura

</div>

<div id="outline-container-org0835037" class="outline-3">

### <span class="section-number-3">6.6</span> <span class="done NO">NO</span> Visualizzare le riviste specialistiche. Una rivista R1 è considerata specialistica se esiste un’altra rivista R2, tale che le keyword degli articoli di R1 sono un sottoinsieme proprio di tutte le keyword degli articoli di R2 (*)

</div>

</div>

<div id="outline-container-org8c0b178" class="outline-2">

## <span class="section-number-2">7</span> <span class="done DONE">DONE</span> SEZIONE F (Facoltativo)

<div id="outline-container-org0ed4b89" class="outline-3">

### <span class="section-number-3">7.1</span> <span class="done NO">NO</span> Visualizzare tutti gli articoli influenzati da un dato articolo, dove un articolo A influenza un altro articolo B se:

<div id="outline-container-org55676e6" class="outline-4">

#### <span class="section-number-4">7.1.1</span> A è nella lista dei correlati di B e la data di pubblicazione di A è precedente rispetto a quella di B

<div class="outline-text-4" id="text-7-1-1">

OPPURE

</div>

</div>

<div id="outline-container-org9100a1a" class="outline-4">

#### <span class="section-number-4">7.1.2</span> A influenza C e C influenza B (*)

</div>

</div>

<div id="outline-container-org7e29f81" class="outline-3">

### <span class="section-number-3">7.2</span> <span class="done NO">NO</span> Visualizzare gli articoli ordinati in ordine decrescente di numero di articoli influenzati. A parità di questo valore, ordinarli in ordine alfabetico (*)

</div>

<div id="outline-container-org8ef5f4c" class="outline-3">

### <span class="section-number-3">7.3</span> <span class="done NO">NO</span> Visualizzare le n conferenze più influenti, dove l’influenza di una conferenza è calcolata come la somma dell’influenza di tutti gli articoli presentati in quella conferenza e n è un parametro scelto dall’utente (*)

</div>

<div id="outline-container-orgb5f83bb" class="outline-3">

### <span class="section-number-3">7.4</span> <span class="done DONE">DONE</span> Possibilità di leggere i dati degli autori, degli articoli, delle riviste e delle conferenze da file di testo (l’organizzazione interna del file è a vostra discrezione) (**)

</div>

<div id="outline-container-org2cded2c" class="outline-3">

### <span class="section-number-3">7.5</span> <span class="done NO">NO</span> Visualizzare le conferenze simili ad una specificata dall’utente. Una conferenza è simile a un’altra conferenza se hanno almeno l’80% delle keyword in comune (**)

</div>

<div id="outline-container-org98e8d0b" class="outline-3">

### <span class="section-number-3">7.6</span> <span class="done NO">NO</span> Visualizzare le triple di conferenze elitarie che hanno la massima influenza. Una tripla di conferenze è considerata elitaria se le keyword presenti negli articoli di ogni conferenza non sono presenti negli articoli delle altre due. L’influenza di una tripla di conferenze è calcolata come la somma delle influenze delle singole conferenze appartenenti alla tripla (**)

</div>

</div>

</div>

<div id="postamble" class="status">

Author: Luigi Pugliese (MAT. 209436)

Created: 2021-06-14 Mon 13:14

</div>
