from Crypto.Util.number import long_to_bytes, bytes_to_long
from Crypto.Cipher import AES
import gmpy2

# Given values
N = 113528691533286135619486503678320426942405436180474026715996758683677273620129519001116625212172928404143292206747424792047626885904598039830205811087655674076216144385016876388583905072205758846659333410528359659982670712013937085712468715762412604882698926617336331191121959509580646315781717517765241646819
e = 3
c = 40904880594701466859625372156952907024430068347250260526789660288294080258335285636904107784524813673301828193071221087338467468677414521714440705760297402168021146846811193689952807596695023202233937346637481974945815018994581831095979752874809661624444485774095865972611500010651804775720777433470611240847
enc_flag = bytes.fromhex('e0929dd13f9e646894ad757b0c3485d52f2fe369adfb1fa79e249effb630fd507ec4daa88611dfbac86db2d468cbf118')
prefix = b"Hey! Hope you're having a great day :) Here's the super secret password: "

# Direct cube root approach
m = gmpy2.iroot(c, e)[0]
full_message = long_to_bytes(m)
print("Recovered message:", full_message)
print("Message length:", len(full_message))

password = full_message[-8:]
print("Password:", password)

# Try all single-byte padding schemes
for pad_byte in [b'\x00', b'\x01', b'\x02', b'\x08']:
    key = password + pad_byte*8
    cipher = AES.new(key, AES.MODE_ECB)
    decrypted = cipher.decrypt(enc_flag)
    print(f"\nPadding: {pad_byte}")
    print("Decrypted (hex):", decrypted.hex())
    print("Decrypted (ascii):", decrypted)
    # source venv/bin/activate && python3 decrpt_flag_.py
    # flag{RSA_3xp0n3nt_t00_sm4ll_Copp3rsm1th}