/*
Αυτός ο κωδικός σχεδιάστηκε από τον Κωνσταντίνο Σάκκα στις 7 Αυγούστου 2020.
Προορίζεται για ακαδημαϊκή χρήση στο Τμήμα Πληροφορικής και Τηλεπικοινωνιών του Πανεπιστημίου
Ιωαννίνων και του github https://ksakkas.github.io/Learn-Wiring-with-Arduino-Mega/.
*/
/*
Αυτός ο κώδικας σχεδιάστηκε και εκτελέστηκε στο πρόγραμμα Arduino έκδοσης 1.8.13
Σχεδιάστηκε για χρήση με το Arduino Mega 2560
*/

//While

#define led 10      //Αρχικοποίηση led =  10

void setup() {
    Serial.begin(9600);                    //Είναι ο ρυθμός μετάδοσης σε bits ανά δευτερόλεπτο (για Serial).
    pinMode(led, OUTPUT);                //Δηλώση led ως έξοδο
}

void loop() {
  int x = Serial.parseInt();        //Διαβάζει από το σειριακό και το μετατρέπει σε ακέραιο

    while(x == 1){                 //Όσο το x = 1
      digitalWrite(led, HIGH);   //Δίνει λογική τιμή 1 (HIGH) στο led, δηλαδή το ανάβει.
    }
}