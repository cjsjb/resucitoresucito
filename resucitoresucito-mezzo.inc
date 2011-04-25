\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1*2  |

		% resucito...
            r4 b b b  |
            g' 1  |
%% 5
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
            c' 1  |
            r4 c' d' c'  |
%% 10
            dis' 4. ( e' fis' 4 )  |
            r4 b b b  |
            g' 1  |
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
%% 15
            r4 d' e' d'  |
            c' 1  |
            r4 c' d' c'  |
            dis' 4. ( e' dis' 4 )  |
            r2 r4 r8 b  |
%% 20
            g' 4. e' 8 ~ e' 2  |
            r4 g' 8 g' 4 fis' e' 8  |
            fis' 4. a' 8 ~ a' 2  |
            r4 fis' 8 fis' 4 e' d' 8  |
            e' 4. g' 8 ~ g' 2  |
%% 25
            r4 e' 8 e' 4 fis' e' 8  |
            dis' 4. dis' 8 ~ dis' 2  |
            r4 b b b  |
            g' 1  |
            r4 g' a' g'  |
%% 30
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
            c' 1  |
            r4 c' d' c'  |
            dis' 4. ( e' fis' 4 )  |
%% 35
            r4 b b b  |
            g' 1  |
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
%% 40
            c' 1  |
            r4 c' d' c'  |
            dis' 4. ( e' dis' 4 )  |
            R1  |
            g' 4. e' 8 ~ e' 2  |
%% 45
            r4 g' 8 g' 4 fis' e' 8  |
            fis' 4. a' 8 ~ a' 2  |
            r4 fis' 8 fis' 4 e' 8 e' d'  |
            e' 4. g' 8 ~ g' 2  |
            r8 e' e' e' e' fis' 4 e' 8  |
%% 50
            dis' 1  |
            r4 b b b  |
            g' 1  |
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
%% 55
            r4 d' e' d'  |
            c' 1  |
            r4 c' d' c'  |
            dis' 4. ( e' fis' 4 )  |
            r4 b b b  |
%% 60
            g' 1  |
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
            c' 1  |
%% 65
            r4 c' d' c'  |
            dis' 4. ( e' dis' 4 )  |
            r2 r4 b 8 b  |
            g' 4. e' 8 ~ e' 2  |
            r4 g' 8 g' 4 fis' e' 8  |
%% 70
            fis' 4. a' 8 ~ a' 2  |
            r4 fis' 8 fis' 4 e' d' 8  |
            e' 4. g' 8 ~ g' 2  |
            r8 e' e' e' e' e' fis' e'  |
            dis' 1  |
%% 75
            r4 b b b  |
            g' 1  |
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
%% 80
            c' 1  |
            r4 c' d' c'  |
            dis' 4. ( e' fis' 4 )  |
            r4 b b b  |
            g' 1  |
%% 85
            r4 g' a' g'  |
            fis' 4. ( e' 8 d' 2 )  |
            r4 d' e' d'  |
            c' 1  |
            r4 c' d' c'  |
%% 90
            dis' 4. ( e' dis' 4 )  |
            R1*2  |
		\bar "|."
	} % Voice

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó, __
		re -- su -- ci -- tó,
		a -- le -- lu -- ya! __

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya, __
		a -- le -- lu -- ya,
		re -- su -- ci -- tó! __

		% la muerte...
		La muer -- te,
		¿dón -- de_es -- tá la muer -- te,
		dón -- de_es tá mi muer -- te,
		dón -- de su vic -- to -- ria?

		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó, __
		re -- su -- ci -- tó,
		a -- le -- lu -- ya! __

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya, __
		a -- le -- lu -- ya,
		re -- su -- ci -- tó! __

		% gracias...
		Gra -- cias
		sean da -- das al Pa -- dre,
		que nos pa -- só_a su rei -- no
		don -- de se vi -- ve de_a -- mor.

		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó, __
		re -- su -- ci -- tó,
		a -- le -- lu -- ya! __

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya, __
		a -- le -- lu -- ya,
		re -- su -- ci -- tó! __

		% alegria...
		A -- le -- grí -- a,
		a -- le -- grí -- a,_her -- ma -- nos,
		que si_hoy nos que -- re -- mos
		es por -- que Él re -- su -- ci -- tó.

		% resucito...
		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya, __
		a -- le -- lu -- ya,
		re -- su -- ci -- tó! __

		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó, __
		re -- su -- ci -- tó,
		a -- le -- lu -- ya! __
	}
>>
