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
		\key b \minor
		R1*4  |
%% 5
		b, 4. b, 4 cis 8 d 4  |
		e 4. e 4 r8 e 4  |
		d 4 d e e  |
		fis 2 ~ fis 8 r e fis  |
		g 4. g g 4  |
%% 10
		a 4. a ~ a 4  |
		fis 1  |
		fis 2. r4  |
		b, 4. b, 4 cis 8 d 4  |
		e 4. e 4 r8 e 4  |
%% 15
		d 4 d e e  |
		fis 2 ~ fis 8 r e fis  |
		g 4. g g 4  |
		a 4. a ~ a 4  |
		b 4 b 2. ~  |
%% 20
		b 2 r4 b  |
		cis' 2. cis' 4  |
		cis' 2 b 4 cis'  |
		d' 4. ( cis' 8 b 2 ~  |
		b 2 ) b 4 b  |
%% 25
		b 4 b b b  |
		ais 2 b 4 cis'  |
		d' 2 cis'  |
		b 1  |
		cis' 2 cis' 4 cis'  |
%% 30
		cis' 2 b 4 cis'  |
		d' 4. ( cis' 8 ) b 2 (  |
		b 2 ) b 4 b  |
		b 2 b  |
		ais 4. r8 b 4 cis'  |
%% 35
		b 1 (  |
		ais 2. ) r4  |
		b, 4. b, 4 cis 8 d 4  |
		e 4. e 4 r8 e 4  |
		d 4 d e e  |
%% 40
		fis 2 ~ fis 8 r e fis  |
		g 4. g g 4  |
		a 4. a ~ a 4  |
		b 4 b 2. ~  |
		b 2 r4 e 8 fis  |
%% 45
		g 4. g g 4  |
		a 4. a ~ a 4  |
		b 4 b 2. ~  |
		b 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
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
