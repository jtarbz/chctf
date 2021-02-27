import hashlib
import time

startT = time.time()


# 64 - c = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/']
c = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']



for i0 in range(16): # 5 for loops creates our "seed," by which we'll generate the rest of the flag
    for i1 in range(16):
        for i2 in range(16):
            for i3 in range(16):
                for i4 in range(16):
                    paswd = "CHCTF{" + c[i0]    + c[i1]   + c[i2]   + c[i3]   + c[i4]   + ":" + \
                                       c[i0^10] + c[i1^2] + c[i2^0] + c[i3^5] + c[i4^8] + ":" + \
                                       c[i0^9]  + c[i1^2] + c[i2^6] + c[i3^3] + c[i4^9] + ":" + \
                                       c[i0^5]  + c[i1^6] + c[i2^6] + c[i3^7] + c[i4^7] + "}"
# W group: seed
# X group: seed xor C1
# Y group: seed xor C1 xor C2
# Z group: seed xor C1 xor C2 xor C3

# xor is a self-invertible function, meaning that if A xor B = C, then A xor C = B. 
# we can use this to generate the rest of the flag based on only the W group
# C1, 2, and 3 are the 3 values given in the prompt

                    print(paswd)

                    hashout = hashlib.sha256(paswd.encode('utf-8')).hexdigest()

                    print(hashout)

                    if hashout == "d0c9af6cb18b69f43aefb44b13a5bfb8b857974243e45d632e9b29fe1d88fbfc":
                        exit()

print('Done')
print(time.time() - startT)
