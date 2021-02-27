# hash_flag_2
Oh no! I did it again! But *this* flag was bigger! If you try to brute force this directly, it's going to take ~10^18 times as long as the first one.
Flag constraints:
1. It is in the format `CHCTF{WWWWW:XXXXX:YYYYY:ZZZZZ}`
2. Replace each `WXYZ` with either a digit (0-9) or a letter A-F (capital!)
3. The `X` group xor the `W` group = `A2058`
4. The `Y` group xor the `X` group = `30661`
5. The `Z` group xor the `Y` group = `C404E`
4. The SHA256 hash of the flag is `d0c9af6cb18b69f43aefb44b13a5bfb8b857974243e45d632e9b29fe1d88fbfc`

Note: Use hexidecimal for the xors, but UTF-8 for the actual hash

Created by: joseph
