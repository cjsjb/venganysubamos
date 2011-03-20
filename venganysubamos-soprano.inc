\context Staff = "track-soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		R1*4  |
%% 5
		a 4. a 4 b 8 c' 4  |
		d' 4. d' 4 r8 d' 4  |
		c' 4 c' d' d'  |
		e' 2 ~ e' 8 r d' e'  |
		f' 4. f' f' 4  |
%% 10
		g' 4. g' ~ g' 4  |
		a' 1  |
		aes' 2. r4  |
		a 4. a 4 b 8 c' 4  |
		d' 4. d' 4 r8 d' 4  |
%% 15
		c' 4 c' d' d'  |
		e' 2 ~ e' 8 r d' e'  |
		f' 4. f' f' 4  |
		g' 4. g' ~ g' 4  |
		a' 4 a' 2. ~  |
%% 20
		a' 2 r4 c'  |
		d' 2. d' 4  |
		e' 2 e' 4 e'  |
		a' 4. ( g' 8 e' 2  |
		f' 2 ) f' 4 f'  |
%% 25
		f' 4 f' f' f'  |
		e' 2 e' 4 e'  |
		a' 2 g'  |
		f' 1  |
		g' 2 g' 4 g'  |
%% 30
		aes' 2 aes' 4 aes'  |
		a' 4. ( g' 8 ) e' 2 (  |
		f' 2 ) f' 4 f'  |
		f' 2 f'  |
		e' 4. r8 e' 4 e'  |
%% 35
		e' 1  |
		R1  |
		a 4. a 4 b 8 c' 4  |
		d' 4. d' 4 r8 d' 4  |
		c' 4 c' d' d'  |
%% 40
		e' 2 ~ e' 8 r d' e'  |
		f' 4. f' f' 4  |
		g' 4. g' ~ g' 4  |
		a' 4 a' 2. ~  |
		a' 2 r4 d' 8 e'  |
%% 45
		f' 4. f' f' 4  |
		g' 4. g' ~ g' 4  |
		a' 4 a' 2. ~  |
		a' 1  |
		R1  |
		\bar "|."
        }

	\lyricsto "soprano" \new Lyrics \lyricmode {
		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor
		"a a" do -- rar en su tem -- plo san -- to.
		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor
		"a a" do -- rar en su tem -- plo san -- to.

		La ley sal -- drá de Si -- ón, __
		la pa -- la -- bra del Se -- ñor, de Je -- ru -- sa -- lén.
		Él nos guia -- "rá en" sus ca -- mi -- nos,
		y sus sen -- das nos mos -- tra -- rá.

		Ven -- gan y su -- ba -- mos al mon -- te del Se -- ñor
		"a a" do -- rar en su tem -- plo san -- to,
		"a a" do -- rar en su tem -- plo san -- to.
	}
>>
