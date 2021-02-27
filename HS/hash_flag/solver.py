import hashlib
import time

startT = time.time()

# 64 - c = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/']
c = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']


for i0 in range(16):
    for i1 in range(16):
        for i2 in range(16):
            for i3 in range(16):
                for i4 in range(16):
                    paswd = "CHCTF{" + c[i0] + c[i1] + c[i2] + c[i3] + c[i4] + "}"
                    print(paswd)

                    hashout = hashlib.sha256(paswd.encode('utf-8')).hexdigest()

                    print(hashout)

                    if hashout == "4b1d7e4a6dcd862bc18bbb2a8643b8a536af845ce759253d7071ff4918698c68":
                        exit()

print('Done')
print(time.time() - startT)
