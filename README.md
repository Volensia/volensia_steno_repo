# Volensia's Steno Repository

Hi! I'm Volensia, a steno hobbyist and amateur programmer. Thanks for visiting my steno collections repository! Here, I post all kinds of stuff related to steno that I personally use.

You can find documentations for everything in this repository on the Wiki page!

## phoenix_fix.json

A dictionary designed to be used together with the Phoenix dictionary. This dictionary should fix everything that doesn't work in the Phoenix dictionary.

Two plugins are required:

- number-format: https://github.com/Volensia/plover_number_format

- retro-text-transform: https://github.com/nimble0/plover_retro_text_transform

Additionally, one plugin is highly recommended:

- phoenix_stenotype: https://github.com/Volensia/plover_phoenix_stenotype

Credit to @winston on Discord for compiling `pipPunctuation.json` and `pipCommands.json`. This dictionary includes all the entries from those two dictionaries, and also a bunch of other stuff.

## state_prov_abbrev.rtf

Since Phoenix has a number system that avoids the number bar, why not use it for something else? Abbreviations for U.S. states and Canadian provinces & terriories! Phoenix does have briefs for states, but they are highly arbitrary and impossible to memorize for me, a Canadian, who doesn't need to type state names very often. What I do need very often, however, are province briefs—But I wasn't very inclined to design 13 more arbitrary briefs. So I designed this simple abbreviation system and shared it here.

## phoenix_word_parts.rtf

A dictionary designed to make finger spelling easier. Based on the "word part" system in the Phoenix dictionary but a bit more systematic.

All strokes end in -PG and stick to the previous stroke, unlike the usual finger spelling strokes which only stick to entries marked with a glue operator. For the most part, it works exactly like regular finger spelling, but you can stroke a consonant and a vowel at the same time. Adding an asterisk will capitalize the first letter.
