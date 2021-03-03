\context ChordNames \chords {
	\set chordNameFunction = #parenthesis-ignatzek-chord-names
	\set instrumentName = #"(Capo 2)"
	\set chordChanges = ##t
	\set majorSevenSymbol = \markup { "maj7" }
	\acordes
}

\context ChordNames \chords {
	\set chordChanges = ##t
	\set majorSevenSymbol = \markup { "maj7" }
	\transpose a b { \acordes }
}
