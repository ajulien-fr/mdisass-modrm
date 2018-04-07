# mdisass-modrm
Comment désassembler du modrm byte en x86

Le code de mon article sur le 32-bit ModR/M Byte, 32-bit SIB Byte et 16-bit ModR/M Byte : http://www.ajulien.fr/mdisass-modrm/

Exemple d'utilisation :

```
./mdisass -s 0000010102020303
00000000  0000      add [eax],al
00000002  0101      add [ecx],eax
00000004  0202      add al,[edx]
00000006  0303      add eax,[ebx]
```
