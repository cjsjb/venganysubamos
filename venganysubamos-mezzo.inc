\context Staff = "track-mezzosoprano" \with { \consists Ambitus_engraver } <<
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
		\key b \minor
		R1*4  |
%% 5
		b 4. b 4 cis' 8 d' 4  |
		e' 4. e' 4 r8 e' 4  |
		d' 4 d' cis' cis'  |
		b 2 ~ b 8 r b cis'  |
		d' 4. d' d' 4  |
%% 10
		e' 4. e' ~ e' 4  |
		cis' 1  |
		cis' 2. r4  |
		b 4. b 4 cis' 8 d' 4  |
		e' 4. e' 4 r8 e' 4  |
%% 15
		d' 4 d' cis' cis'  |
		b 2 ~ b 8 r b cis'  |
		d' 4. d' d' 4  |
		e' 4. e' ~ e' 4  |
		d' 4 d' 2. ~  |
%% 20
		d' 2 r4 d'  |
		e' 2. e' 4  |
		cis' 2 b 4 cis'  |
		d' 4. ( e' 8 d' 2 ~  |
		d' 2 ) d' 4 d'  |
%% 25
		d' 4 d' d' d'  |
		cis' 2 b 4 cis'  |
		fis' 2 e'  |
		d' 1  |
		e' 2 e' 4 e'  |
%% 30
		cis' 2 b 4 cis'  |
		d' 4. ( e' 8 ) d' 2 ~  |
		d' 2 d' 4 d'  |
		d' 2 d'  |
		cis' 4. r8 d' 4 e'  |
%% 35
		d' 1 (  |
		cis' 2. ) r4  |
		b 4. b 4 cis' 8 d' 4  |
		e' 4. e' 4 r8 e' 4  |
		d' 4 d' cis' cis'  |
%% 40
		b 2 ~ b 8 r b cis'  |
		d' 4. d' d' 4  |
		e' 4. e' ~ e' 4  |
		d' 4 d' 2. ~  |
		d' 2 r4 b 8 cis'  |
%% 45
		d' 4. d' d' 4  |
		e' 4. e' ~ e' 4  |
		d' 4 d' 2. ~  |
		d' 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor __
		"a a" -- do -- rar en su tem -- plo san -- to.
		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor __
		"a a" -- do -- rar en su tem -- plo san -- to. __

		La ley sal -- drá de Si -- ón, __
		la pa -- la -- bra del Se -- ñor, de Je -- ru -- sa -- lén.
		Él nos guia -- "rá en" sus ca -- mi -- nos, __
		y sus sen -- das nos mos -- tra -- rá. __

		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor __
		"a a" -- do -- rar en su tem -- plo san -- to, __
		"a a" -- do -- rar en su tem -- plo san -- to. __
	}
>>
