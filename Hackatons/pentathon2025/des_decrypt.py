from Crypto.Cipher import DES
from Crypto.Util.Padding import unpad

# Given DES-ECB ciphertext
ciphertext = bytes.fromhex('e1d5e1fcaae4aba0b735c8fb2ae8797728b073a34b14c57be236c819e6d5f4bbd94f5748ff9d1e008fcad8d403e23d02845a51513bb1e65027ed1bebdcb70973d411a0503cf06c261cb04e1ce1c12925')

# Try common DES keys and patterns
possible_keys = [
    # Common passwords
    b'password', b'12345678', b'qwertyui', b'admin123',
    b'welcome1', b'password1', b'abc12345',
    
    # Simple patterns
    b'00000000', b'11111111', b'aaaaaaaa', b'bbbbbbbb',
    b'cccccccc', b'dddddddd', b'eeeeeeee',
    
    # Security-related
    b'DESkey!!', b'encrypt!', b'decrypt!', b'cipher!!',
    b'3ncrypt0r', b'd3crypt0r',
    
    # From prefixed directory context
    b'HeyHope!', b'HeyYou!!', b'secret!!', b'superse!',
    b'flag!!!!', b'ctf!!!!!', b'mysecret'
]

# Generate keys from numeric patterns
for i in range(256):
    possible_keys.append(bytes([i]*8))
    possible_keys.append(bytes([i,0,i,0,i,0,i,0]))

for key in possible_keys:
    try:
        cipher = DES.new(key, DES.MODE_ECB)
        decrypted = cipher.decrypt(ciphertext)
        
        # Try to unpad (PKCS7 padding is common)
        try:
            decrypted = unpad(decrypted, DES.block_size)
            print(f"\nSuccessful decryption with key: {key}")
            print("Decrypted (hex):", decrypted.hex())
            print("Decrypted (ascii):", decrypted.decode('utf-8', errors='replace'))
            break
        except ValueError:
            print(f"Key {key} produced invalid padding - trying next key...")
    except Exception as e:
        print(f"Error with key {key}: {str(e)}")

print("\nIf no successful decryption, you may need to:")
print("1. Try more possible keys")
print("2. Implement brute force for 8-byte keys")
print("3. Check if key is derived from another source")
