\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \minor

		% intro
		R1*2  |

		% resucito...
		r4 b, b, b,  |
		b 1  |
%% 5
		r4 b c' b  |
		a 1  |
		r4 a b a  |
		g 1  |
		r4 g a g  |
%% 10
		fis 1  |
		r4 b, b, b,  |
		b 1  |
		r4 b c' b  |
		d' 1  |
%% 15
		r4 d' e' d'  |
		c' 1  |
		r4 c' d' c'  |
		b 1  |
		r2 r4 r8 b,  |
%% 20
		b 4. g 8 ~ g 2  |
		r4 b 8 b 4 a g 8  |
		a 4. d' 8 ~ d' 2  |
		r4 a 8 a 4 g fis 8  |
		g 4. c' 8 ~ c' 2  |
%% 25
		r4 g 8 g 4 a g 8  |
		fis 4. fis 8 ~ fis 2  |
		r4 b, b, b,  |
		b 1  |
		r4 b c' b  |
%% 30
		a 1  |
		r4 a b a  |
		g 1  |
		r4 g a g  |
		fis 1  |
%% 35
		r4 b, b, b,  |
		b 1  |
		r4 b c' b  |
		d' 1  |
		r4 d' e' d'  |
%% 40
		c' 1  |
		r4 c' d' c'  |
		b 1  |
		R1  |
		b 4. g 8 ~ g 2  |
%% 45
		r4 b 8 b 4 a g 8  |
		a 4. d' 8 ~ d' 2  |
		r4 a 8 a 4 g 8 g fis  |
		g 4. c' 8 ~ c' 2  |
		r8 g g g g a 4 g 8  |
%% 50
		fis 1  |
		r4 b, b, b,  |
		b 1  |
		r4 b c' b  |
		a 1  |
%% 55
		r4 a b a  |
		g 1  |
		r4 g a g  |
		fis 1  |
		r4 b, b, b,  |
%% 60
		b 1  |
		r4 b c' b  |
		d' 1  |
		r4 d' e' d'  |
		c' 1  |
%% 65
		r4 c' d' c'  |
		b 1  |
		r2 r4 b, 8 b,  |
		b 4. g 8 ~ g 2  |
		r4 b 8 b 4 a g 8  |
%% 70
		a 4. d' 8 ~ d' 2  |
		r4 a 8 a 4 g fis 8  |
		g 4. c' 8 ~ c' 2  |
		r8 g g g g g a g  |
		fis 1  |
%% 75
		r4 b, b, b,  |
		b 1  |
		r4 b c' b  |
		a 1  |
		r4 a b a  |
%% 80
		g 1  |
		r4 g a g  |
		fis 1  |
		r4 b, b, b,  |
		b 1  |
%% 85
		r4 b c' b  |
		d' 1  |
		r4 d' e' d'  |
		c' 1  |
		r4 c' d' c'  |
%% 90
		b 1  |
		R1*2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-tenor" {
		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya,
		re -- su -- ci -- tó!

		% la muerte...
		La muer -- te,
		¿dón -- de_es -- tá la muer -- te,
		dón -- de_es tá mi muer -- te,
		dón -- de su vic -- to -- ria?

		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya,
		re -- su -- ci -- tó!

		% gracias...
		Gra -- cias
		sean da -- das al Pa -- dre,
		que nos pa -- só_a su rei -- no
		don -- de se vi -- ve de_a -- mor.

		% resucito...
		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		a -- le -- lu -- ya!

		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya,
		re -- su -- ci -- tó!

		% alegria...
		A -- le -- grí -- a,
		a -- le -- grí -- a,_her -- ma -- nos,
		que si_hoy nos que -- re -- mos
		es por -- que Él re -- su -- ci -- tó.

		% resucito...
		¡A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya,
		re -- su -- ci -- tó!

		¡Re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		re -- su -- ci -- tó,
		a -- le -- lu -- ya!
	}
>>
