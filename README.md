# Analyse von Namen mit Arrays

Mit dieser Übung sollen Sie die Verwendung von Arrays in C festigen und vertiefen. Zugleich kann die implizite Typenumwandlung von char zu int (und umgekehrt) repetiert werden. Auf inhaltlicher Ebene sollen Sie ein Programm erstellen, welches einen Namen hinsichtlich verschiedener Aspekte analysieren soll. Der zu analysierende Name kann durch die Benutzerin bzw. den Benutzer bei Start des Programms eingegeben werden. Im Anschluss folgen verschiedene Ausgaben.

## Aufgabenstellung

Erstellen Sie schrittweise ein Programm, welches die nachfolgenden Anforderungen erfüllt:

### Array mit allen Kleinbuchstaben definieren

Deklarieren und Initialisieren Sie ein Array, welches alle Kleinbuchstaben von a bis z enthält. Verwenden Sie dazu eine Schleife und setzen Sie bewusst die implizite Typumwandlung zwischen int und char ein.

### Namen einlesen

Erstellen Sie ein ausreichend grosses char-Array und lesen Sie mithilfe der Funktion scanf_s einen Namen von der Konsole ins vorbereitete Array ein.

Er reicht vorerst aus, wenn Sie davon ausgehen, dass die Eingabe des Namens ausschliesslich mit Kleinbuchstaben erfolgt.

Sie können den dritten Parameter der Funktion scanf_s verwenden, um die maximale Länge der einzulesenden Buchstabenfolge zu definieren. Verwenden
Sie in diesem Fall die Grösse des Arrays als Wert für den dritten Parameter der scanf_s Funktion.

### Kleinbuchstaben ersetzen

Verwenden Sie die Buchstaben des zuvor eingegebenen Namens um die entsprechenden Kleinbuchstaben im vorbereiteten Array mit sämtlichen Kleinbuchstaben durch Grossbuchstaben
zu ersetzen.

Beispiel: Die Eingabe eva bewirkt, dass im Array, welches sämtliche Kleinbuchstaben enthält, die Buchstaben a, e und v an den Stellen 0, 4 und 21 durch die entsprechenden Grossbuchstaben A, E und V ersetzt werden.

Berechnen Sie dafür für jeden Buchstaben des eingegebenen Namens die entsprechende Position im Array, welches sämtliche Kleinbuchstaben enthält und ersetzen Sie anschliessend
an dieser Stelle den Kleinbuchstaben durch seinen grossen Bruder. Verwenden Sie auch hierbei wieder die implizite Typumwandlung char / int und die Tatsache, dass Sie mit char Werten Ganzzahlberechnungen durchführen können.

### Anzahl unterschiedliche Buchstaben zählen

Zählen Sie, basierend auf der vorhergehenden Teilaufgabe, alle unterschiedlichen Buchstaben, welche im eingegebenen Namen enthalten sind. Nutzen Sie dazu die Tatsache, dass alle
Buchstaben des eingegebenen Namens im Array mit sämtlichen Buchstaben nun als Grossbuchstaben existieren.

Geben Sie die Anzahl der unterschiedlichen Buchstaben auf einer Zeile in der Konsole aus.

### Fehlende Vokale berechnen und ausgeben

Bestimmen Sie alle Vokale, welche im eingegebenen Namen nicht vorkommen. Initialisieren Sie dazu ein char-Array mit den Vokalen a, e, i, o und u. Verwenden Sie anschliessend eine Schleife um für jeden Vokal zu prüfen, ob dieser im eingegebenen Namen existiert. Sie können dazu entweder den eingegebenen Namen oder (vorzugsweise) das Array mit sämtlichen Buchstaben aus Teilaufgabe 1.3.1 verwenden.

Geben Sie die Anzahl der fehlenden Vokale sowie die fehlenden Vokale selbst auf der Konsole aus.

### Gross- und Kleinschreibung bei der Eingabe des Namens

Erweitern Sie Ihr Programm nun so, dass dieses unabhängig von der Gross- und Kleinschreibung des Namens funktioniert. Konkret soll die Analyse des eingegebenen Namens also beispielsweise bei der Eingabe von maximilian, Maximilian und MaXImiLiAn zum gleichen Ergebnis führen.

## Contributing

This is a personal learning project for me. Please feel free to fork this repo. Pull request to submit more programs.

## Feedback

If you find any bug or have any suggestion, please do file issues. I am graceful for any feedback and will do my best to improve this package.

## License

[MIT](LICENSE) © 2020 Ioannis Christodoulakis
