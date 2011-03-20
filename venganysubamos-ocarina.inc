\context Staff = "track-ocarina" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Ocarina"
	\set Staff.shortInstrumentName = "O."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "ocarina" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		R1  |
		r2 c'' 8. b' g' 8  |
		a' 1  |
		aes' 1  |
        }
>>
