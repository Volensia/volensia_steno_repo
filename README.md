# phoenix_in_plover_extras

Contains a few dictionaries that can be used together with the Phoenix dictionary.

## fix.json

A dictionary designed to be used together with the Phoenix dictionary. This dictionary should fix everything that doesn't work in the Phoenix dictionary.

Two plugins are required:

- number-format: https://github.com/Volensia/plover_number_format

- retro-text-transform: https://github.com/nimble0/plover_retro_text_transform

Additionally, one plugin is highly recommended:

- phoenix_stenotype: https://github.com/Volensia/plover_phoenix_stenotype

Credit to @winston on Discord for compiling `pipPunctuation.json` and `pipCommands.json`. This dictionary includes all the entries from those two dictionaries, and also a bunch of other stuff.

## state_prov_abbrev.rtf

Since Phoenix has a number system that avoids the number bar, why not use it for something else? Abbreviations for U.S. states and Canadian provinces & terriories! Phoenix does have briefs for states, but they are highly arbitrary and impossible to memorize for me, a Canadian, who doesn't need to type state names very often. What I do need very often, however, are province briefs—But I wasn't very inclined to design 13 more arbitrary briefs. So I designed this simple abbreviation system and shared it here.

Most briefs are just the "1st letter on the left hand + 2nd letter on the right hand + number bar". There are a few exceptions, though:

1. "I" is stroked `EU`, not `AOEU` (so Iowa can be stroked `#AEU`, and also to make the outline easier to stroke).

2. There are no `H`, `W`, `Y` keys on the right hand side, so they are stroked as `*` instead (except New York, which is a combination of N and Y on the left hand side `#TKPWHR`, to prevent conflict with New Hampshire `#TPH*`).

3. `C` on the right side is stroked `RBG`, because it's stroked `KR` on the left side, and the right side equivalent of `K` is `BG`.

I also added some common abbreviations like "U.S.", "U.K.", "e.g.", "i.e." and "etc.". Certain abbreviations like "Mt." cannot be added because it conflicts with MT (Montana), but otherwise I find this to be a very helpful abbreviation system.