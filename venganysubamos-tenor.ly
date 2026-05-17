\version "2.10.0"
#(ly:set-option 'point-and-click #f)

\header {
	title = "Vengan y subamos"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Tenor"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
}
globalTempo = {
	\tempo 4 = 125
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "venganysubamos-acordes.inc"

		\new StaffGroup <<
			\include "venganysubamos-tenor.inc"
		>>
	>>
	\layout {
		\context { \RemoveEmptyStaffContext }
		\context { \ChordNames \consists Instrument_name_engraver }
	}
}
