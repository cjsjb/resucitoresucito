\context Staff = "vozdos" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Voz II"
	\set Staff.shortInstrumentName = "V.2"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-dos" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1*2  |

		% resucito...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% aleluya...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% la muerte...
		r2 r4 r8 b  |
		g' 4. e' 8 ~ e' 2  |
		r4 g' 8 g' 4 fis' e' 8  |
		fis' 4. a' 8 ~ a' 2  |
		r4 fis' 8 fis' 4 e' d' 8  |
		e' 4. g' 8 ~ g' 2  |
		r4 e' 8 e' 4 fis' e' 8  |
		dis' 4. dis' 8 ~ dis' 2  |

		% resucito...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% aleluya...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |
		R1  |

		% gracias...
		g' 4. e' 8 ~ e' 2  |
		r4 g' 8 g' 4 fis' e' 8  |
		fis' 4. a' 8 ~ a' 2  |
		r4 fis' 8 fis' 4 e' 8 e' d'  |
		e' 4. g' 8 ~ g' 2  |
		r8 e' e' e' e' fis' 4 e' 8  |
		dis' 1  |

		% resucito...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% aleluya...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% alegria...
		r2 r4 b 8 b  |
		g' 4. e' 8 ~ e' 2  |
		r4 g' 8 g' 4 fis' e' 8  |
		fis' 4. a' 8 ~ a' 2  |
		r4 fis' 8 fis' 4 e' d' 8  |
		e' 4. g' 8 ~ g' 2  |
		r8 e' e' e' e' e' fis' e'  |
		dis' 1  |

		% aleluya...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |

		% resucito...
		r4 b b b  |
		b' 1  |
		r4 b' c'' b'  |
		a' 1  |
		r4 a' b' a'  |
		g' 1  |
		r4 g' a' g'  |
		fis' 1  |
		R1*2  |
		\bar "|."
	} % Voice

	\lyricsto "voz-dos" \new Lyrics \lyricmode {
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
