\context Staff = "track-ocarina" <<
	\set Staff.instrumentName = "Ocarina"
	\set Staff.shortInstrumentName = "O."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "ocarina" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble^8"
		\key b \minor
                R1  |
                r2 \times 2/3 { d''' 4 cis''' a'' }  |
                b'' 1  |
                ais'' 1  |
		R1*45
        }
>>
