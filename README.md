# STMF429_LCD

Overview - gra - warcaby na płytkę stm32f429i-disco na ekran dotykowy. Przewidziana z myślą o dwóch graczach.

Description - do stworzenia projektu wykorzystaliśmy: Visual Studio 2015, TouchGFX Framework, STM32F429I-DISCO. TouchGFX umożliwił swobodne pisanie warcabów, w języku C++, podczas gdy sam zapewnił takie rzeczy jak: odpowiednie ustawienie STMa, skalibrowanie dotyku, łatwe dodawanie grafiki za pomocą wbudowanego designera oraz możliwość uruchamiania symulacji za pośrednictwem Visual Studio, dzięki czemu nie trzeba było za każdym razem wgrywać programu na STMa. Zainteresowanych tym frameworkiem, dającym olbrzymie możliwości odsyłam: https://touchgfx.zendesk.com/hc/en-us/categories/200529261-Knowledge-Base oraz https://touchgfx.zendesk.com/hc/en-us/categories/200529271-Getting-Started. Grafika została stworzona w prostym edytorze graficznym poprzez narysowanie pól o wymiarach 30x30 (ze względu na rozmiar ekranu 320x240) oraz pionków, pasujących wymiarami do podanych pól. Następnie pola i pionki dodane zostały do projektu za pomocą TouchGFX designera. Pionki o 3 kolorach (zielony - kolor pól nieużywanych - pola te ustawione są na niewidoczne do momentu wykonywania ruchu i służą do przemieszczania się, czerwone i niebieskie) zostały ustawione na wszystkich 32 białych polach. Oprogramowanie napisane w języku C++ działa w ten sposób, że w zależności od możliwości ruchu danym pionkiem, na którego klikneliśmy, pokazuje poprzez uwidocznienie odpowiednich zielonych przycisków, możliwości ruchu do wykonania. Po wybraniu miejsca do przemieszczenia, stany przycisków zamieniają się - zielony przycisk staje się pionkiem gracza, który wykonywał ruch, zaś w miejsce, w którym przed ruchem stał pionek gracza wchodzi zielony przycisk, który z powrotem staje się niewidoczny (puste pole). W grze tej, tak jak w standardowych warcabach występują królówki, które mają specjalnie zaprojektowane pionki oraz wymuszane jest bicie danego pionka.

How to run - aby uruchomić projekt należy wgrać plik initflash.hex na STMa za pomocą np: STM32 ST-LINK Utility. 
W gre należy grać we dwie osoby, wykonując ruchy na zmiane, poprzez klikanie na ekranie swojego pionka, a następnie wybieranie jego nowej pozycji z wyświetlonych możliwych. Aby zrezygnować z ruchu danym pionkiem i wykonać go innym, należy wcisnąć inny przycisk niż zielony (czyli wybrać inny pionek gracza).

How to compile - aby skompilować projekt lub wprowadzać w nim własne zmiany należy mieć zainstalowanego TouchGFXa - http://touchgfx.com/try-touchgfx/evaluation/. Następnie należy stworzyć nowy projekt przy użyciu TouchGFX Designera. Po utworzeniu go wystarczy podmienić plik assets w folderze projektu, a następnie uruchomić przez Visual Studio jego symulacje, którą można znaleźć pod ścieżką: simulator/msvs/application.sln. Tutaj wystarczy zlokalizować pliki odpowiadające nazwami plikom udostępnionym w projekcie i podmienić ich kod. To wszystko. Teraz możemy skompilować nasz program i pokaże nam się jego symulacja.

Future improvements:
- możliwość grania przeciw sztucznej inteligencji o różnych poziomach trudności.
- zapewnienie turowości gry (zablokowanie wykonywania dwóch ruchów z rzędu, gdy nie ma wielobicia)
- udoskonalić wymuszanie zbijania/wilobicia

Credits: Karol Czub, Mikołaj Fedec.

The project was conducted during the Microprocessor Lab course held by the Institute of Control and Information Engineering, Poznan University of Technology.
Supervisor: Adam Bondyra
