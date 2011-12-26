% This LilyPond file was generated by Rosegarden 10.04
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)

\include "venganysubamos.def"

\header {
	title = "Vengan y subamos"
	tagline = "Coro Juvenil San Juan Bosco"
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
	\skip 1*49
}
globalTempo = {
	\tempo 4 = 130  \skip 1*49
}
\score {
	<< % common
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "venganysubamos-acordes.inc"

		\new StaffGroup <<
			\transpose a b { \include "venganysubamos-soprano.inc" }
		>>

		\transpose a b { \include "venganysubamos-ocarina.inc" }
	>>
%	\layout { }
	\layout {
		\context { \RemoveEmptyStaffContext }
		\context { \ChordNames \consists Instrument_name_engraver }
	}
}
