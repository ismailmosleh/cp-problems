from stringprep import c6_set


n=int(input())
l=['..........', '-.........', '--........', '---.......', '----......', '-----.....', '------....', '-------...', '--------..', '---------.', '----------', '--------.-', '-------.-.', '-------.--', '-------..-', '------.-..', '------.--.', '------.---', '------.-.-', '------..-.', '------..--', '------...-', '-----.-...', '-----.--..', '-----.---.', '-----.----', '-----.--.-', '-----.-.-.', '-----.-.--', '-----.-..-', '-----..-..', '-----..--.', '-----..---', '-----..-.-', '-----...-.', '-----...--', '-----....-', '----.-....', '----.--...', '----.---..', '----.----.', '----.-----', '----.---.-', '----.--.-.', '----.--.--', '----.--..-', '----.-.-..', '----.-.--.', '----.-.---', '----.-.-.-', '----.-..-.', '----.-..--', '----.-...-', '----..-...', '----..--..', '----..---.', '----..----', '----..--.-', '----..-.-.', '----..-.--', '----..-..-', '----...-..', '----...--.', '----...---', '----...-.-', '----....-.', '----....--', '----.....-', '---.-.....', '---.--....', '---.---...', '---.----..', '---.-----.', '---.------', '---.----.-', '---.---.-.', '---.---.--', '---.---..-', '---.--.-..', '---.--.--.', '---.--.---', '---.--.-.-', '---.--..-.', '---.--..--', '---.--...-', '---.-.-...', '---.-.--..', '---.-.---.', '---.-.----', '---.-.--.-', '---.-.-.-.', '---.-.-.--', '---.-.-..-', '---.-..-..', '---.-..--.', '---.-..---', '---.-..-.-', '---.-...-.', '---.-...--', '---.-....-', '---..-....', '---..--...', '---..---..', '---..----.', '---..-----', '---..---.-', '---..--.-.', '---..--.--', '---..--..-', '---..-.-..', '---..-.--.', '---..-.---', '---..-.-.-', '---..-..-.', '---..-..--', '---..-...-', '---...-...', '---...--..', '---...---.', '---...----', '---...--.-', '---...-.-.', '---...-.--', '---...-..-', '---....-..', '---....--.', '---....---', '---....-.-', '---.....-.', '---.....--', '---......-', '--.-......', '--.--.....', '--.---....', '--.----...', '--.-----..', '--.------.', '--.-------', '--.-----.-', '--.----.-.', '--.----.--', '--.----..-', '--.---.-..', '--.---.--.', '--.---.---', '--.---.-.-', '--.---..-.', '--.---..--', '--.---...-', '--.--.-...', '--.--.--..', '--.--.---.', '--.--.----', '--.--.--.-', '--.--.-.-.', '--.--.-.--', '--.--.-..-', '--.--..-..', '--.--..--.', '--.--..---', '--.--..-.-', '--.--...-.', '--.--...--', '--.--....-', '--.-.-....', '--.-.--...', '--.-.---..', '--.-.----.', '--.-.-----', '--.-.---.-', '--.-.--.-.', '--.-.--.--', '--.-.--..-', '--.-.-.-..', '--.-.-.--.', '--.-.-.---', '--.-.-.-.-', '--.-.-..-.', '--.-.-..--', '--.-.-...-', '--.-..-...', '--.-..--..', '--.-..---.', '--.-..----', '--.-..--.-', '--.-..-.-.', '--.-..-.--', '--.-..-..-', '--.-...-..', '--.-...--.', '--.-...---', '--.-...-.-', '--.-....-.', '--.-....--', '--.-.....-', '--..-.....', '--..--....', '--..---...', '--..----..', '--..-----.', '--..------', '--..----.-', '--..---.-.', '--..---.--', '--..---..-', '--..--.-..', '--..--.--.', '--..--.---', '--..--.-.-', '--..--..-.', '--..--..--', '--..--...-', '--..-.-...', '--..-.--..', '--..-.---.', '--..-.----', '--..-.--.-', '--..-.-.-.', '--..-.-.--', '--..-.-..-', '--..-..-..', '--..-..--.', '--..-..---', '--..-..-.-', '--..-...-.', '--..-...--', '--..-....-', '--...-....', '--...--...', '--...---..', '--...----.', '--...-----', '--...---.-', '--...--.-.', '--...--.--', '--...--..-', '--...-.-..', '--...-.--.', '--...-.---', '--...-.-.-', '--...-..-.', '--...-..--', '--...-...-', '--....-...', '--....--..', '--....---.', '--....----', '--....--.-', '--....-.-.', '--....-.--', '--....-..-', '--.....-..', '--.....--.', '--.....---', '--.....-.-', '--......-.', '--......--', '--.......-', '-.-.......', '-.--......', '-.---.....', '-.----....', '-.-----...', '-.------..', '-.-------.', '-.--------', '-.------.-', '-.-----.-.', '-.-----.--', '-.-----..-', '-.----.-..', '-.----.--.', '-.----.---', '-.----.-.-', '-.----..-.', '-.----..--', '-.----...-', '-.---.-...', '-.---.--..', '-.---.---.', '-.---.----', '-.---.--.-', '-.---.-.-.', '-.---.-.--', '-.---.-..-', '-.---..-..', '-.---..--.', '-.---..---', '-.---..-.-', '-.---...-.', '-.---...--', '-.---....-', '-.--.-....', '-.--.--...', '-.--.---..', '-.--.----.', '-.--.-----', '-.--.---.-', '-.--.--.-.', '-.--.--.--', '-.--.--..-', '-.--.-.-..', '-.--.-.--.', '-.--.-.---', '-.--.-.-.-', '-.--.-..-.', '-.--.-..--', '-.--.-...-', '-.--..-...', '-.--..--..', '-.--..---.', '-.--..----', '-.--..--.-', '-.--..-.-.', '-.--..-.--', '-.--..-..-', '-.--...-..', '-.--...--.', '-.--...---', '-.--...-.-', '-.--....-.', '-.--....--', '-.--.....-', '-.-.-.....', '-.-.--....', '-.-.---...', '-.-.----..', '-.-.-----.', '-.-.------', '-.-.----.-', '-.-.---.-.', '-.-.---.--', '-.-.---..-', '-.-.--.-..', '-.-.--.--.', '-.-.--.---', '-.-.--.-.-', '-.-.--..-.', '-.-.--..--', '-.-.--...-', '-.-.-.-...', '-.-.-.--..', '-.-.-.---.', '-.-.-.----', '-.-.-.--.-', '-.-.-.-.-.', '-.-.-.-.--', '-.-.-.-..-', '-.-.-..-..', '-.-.-..--.', '-.-.-..---', '-.-.-..-.-', '-.-.-...-.', '-.-.-...--', '-.-.-....-', '-.-..-....', '-.-..--...', '-.-..---..', '-.-..----.', '-.-..-----', '-.-..---.-', '-.-..--.-.', '-.-..--.--', '-.-..--..-', '-.-..-.-..', '-.-..-.--.', '-.-..-.---', '-.-..-.-.-', '-.-..-..-.', '-.-..-..--', '-.-..-...-', '-.-...-...', '-.-...--..', '-.-...---.', '-.-...----', '-.-...--.-', '-.-...-.-.', '-.-...-.--', '-.-...-..-', '-.-....-..', '-.-....--.', '-.-....---', '-.-....-.-', '-.-.....-.', '-.-.....--', '-.-......-', '-..-......', '-..--.....', '-..---....', '-..----...', '-..-----..', '-..------.', '-..-------', '-..-----.-', '-..----.-.', '-..----.--', '-..----..-', '-..---.-..', '-..---.--.', '-..---.---', '-..---.-.-', '-..---..-.', '-..---..--', '-..---...-', '-..--.-...', '-..--.--..', '-..--.---.', '-..--.----', '-..--.--.-', '-..--.-.-.', '-..--.-.--', '-..--.-..-', '-..--..-..', '-..--..--.', '-..--..---', '-..--..-.-', '-..--...-.', '-..--...--', '-..--....-', '-..-.-....', '-..-.--...', '-..-.---..', '-..-.----.', '-..-.-----', '-..-.---.-', '-..-.--.-.', '-..-.--.--', '-..-.--..-', '-..-.-.-..', '-..-.-.--.', '-..-.-.---', '-..-.-.-.-', '-..-.-..-.', '-..-.-..--', '-..-.-...-', '-..-..-...', '-..-..--..', '-..-..---.', '-..-..----', '-..-..--.-', '-..-..-.-.', '-..-..-.--', '-..-..-..-', '-..-...-..', '-..-...--.', '-..-...---', '-..-...-.-', '-..-....-.', '-..-....--', '-..-.....-', '-...-.....', '-...--....', '-...---...', '-...----..', '-...-----.', '-...------', '-...----.-', '-...---.-.', '-...---.--', '-...---..-', '-...--.-..', '-...--.--.', '-...--.---', '-...--.-.-', '-...--..-.', '-...--..--', '-...--...-', '-...-.-...', '-...-.--..', '-...-.---.', '-...-.----', '-...-.--.-', '-...-.-.-.', '-...-.-.--', '-...-.-..-', '-...-..-..', '-...-..--.', '-...-..---', '-...-..-.-', '-...-...-.', '-...-...--', '-...-....-', '-....-....', '-....--...', '-....---..', '-....----.', '-....-----', '-....---.-', '-....--.-.', '-....--.--', '-....--..-', '-....-.-..', '-....-.--.', '-....-.---', '-....-.-.-', '-....-..-.', '-....-..--', '-....-...-', '-.....-...', '-.....--..', '-.....---.', '-.....----', '-.....--.-', '-.....-.-.', '-.....-.--', '-.....-..-', '-......-..', '-......--.', '-......---', '-......-.-', '-.......-.', '-.......--', '-........-', '.-........', '.--.......', '.---......', '.----.....', '.-----....', '.------...', '.-------..', '.--------.', '.---------', '.-------.-', '.------.-.', '.------.--', '.------..-', '.-----.-..', '.-----.--.', '.-----.---', '.-----.-.-', '.-----..-.', '.-----..--', '.-----...-', '.----.-...', '.----.--..', '.----.---.', '.----.----', '.----.--.-', '.----.-.-.', '.----.-.--', '.----.-..-', '.----..-..', '.----..--.', '.----..---', '.----..-.-', '.----...-.', '.----...--', '.----....-', '.---.-....', '.---.--...', '.---.---..', '.---.----.', '.---.-----', '.---.---.-', '.---.--.-.', '.---.--.--', '.---.--..-', '.---.-.-..', '.---.-.--.', '.---.-.---', '.---.-.-.-', '.---.-..-.', '.---.-..--', '.---.-...-', '.---..-...', '.---..--..', '.---..---.', '.---..----', '.---..--.-', '.---..-.-.', '.---..-.--', '.---..-..-', '.---...-..', '.---...--.', '.---...---', '.---...-.-', '.---....-.', '.---....--', '.---.....-', '.--.-.....', '.--.--....', '.--.---...', '.--.----..', '.--.-----.', '.--.------', '.--.----.-', '.--.---.-.', '.--.---.--', '.--.---..-', '.--.--.-..', '.--.--.--.', '.--.--.---', '.--.--.-.-', '.--.--..-.', '.--.--..--', '.--.--...-', '.--.-.-...', '.--.-.--..', '.--.-.---.', '.--.-.----', '.--.-.--.-', '.--.-.-.-.', '.--.-.-.--', '.--.-.-..-', '.--.-..-..', '.--.-..--.', '.--.-..---', '.--.-..-.-', '.--.-...-.', '.--.-...--', '.--.-....-', '.--..-....', '.--..--...', '.--..---..', '.--..----.', '.--..-----', '.--..---.-', '.--..--.-.', '.--..--.--', '.--..--..-', '.--..-.-..', '.--..-.--.', '.--..-.---', '.--..-.-.-', '.--..-..-.', '.--..-..--', '.--..-...-', '.--...-...', '.--...--..', '.--...---.', '.--...----', '.--...--.-', '.--...-.-.', '.--...-.--', '.--...-..-', '.--....-..', '.--....--.', '.--....---', '.--....-.-', '.--.....-.', '.--.....--', '.--......-', '.-.-......', '.-.--.....', '.-.---....', '.-.----...', '.-.-----..', '.-.------.', '.-.-------', '.-.-----.-', '.-.----.-.', '.-.----.--', '.-.----..-', '.-.---.-..', '.-.---.--.', '.-.---.---', '.-.---.-.-', '.-.---..-.', '.-.---..--', '.-.---...-', '.-.--.-...', '.-.--.--..', '.-.--.---.', '.-.--.----', '.-.--.--.-', '.-.--.-.-.', '.-.--.-.--', '.-.--.-..-', '.-.--..-..', '.-.--..--.', '.-.--..---', '.-.--..-.-', '.-.--...-.', '.-.--...--', '.-.--....-', '.-.-.-....', '.-.-.--...', '.-.-.---..', '.-.-.----.', '.-.-.-----', '.-.-.---.-', '.-.-.--.-.', '.-.-.--.--', '.-.-.--..-', '.-.-.-.-..', '.-.-.-.--.', '.-.-.-.---', '.-.-.-.-.-', '.-.-.-..-.', '.-.-.-..--', '.-.-.-...-', '.-.-..-...', '.-.-..--..', '.-.-..---.', '.-.-..----', '.-.-..--.-', '.-.-..-.-.', '.-.-..-.--', '.-.-..-..-', '.-.-...-..', '.-.-...--.', '.-.-...---', '.-.-...-.-', '.-.-....-.', '.-.-....--', '.-.-.....-', '.-..-.....', '.-..--....', '.-..---...', '.-..----..', '.-..-----.', '.-..------', '.-..----.-', '.-..---.-.', '.-..---.--', '.-..---..-', '.-..--.-..', '.-..--.--.', '.-..--.---', '.-..--.-.-', '.-..--..-.', '.-..--..--', '.-..--...-', '.-..-.-...', '.-..-.--..', '.-..-.---.', '.-..-.----', '.-..-.--.-', '.-..-.-.-.', '.-..-.-.--', '.-..-.-..-', '.-..-..-..', '.-..-..--.', '.-..-..---', '.-..-..-.-', '.-..-...-.', '.-..-...--', '.-..-....-', '.-...-....', '.-...--...', '.-...---..', '.-...----.', '.-...-----', '.-...---.-', '.-...--.-.', '.-...--.--', '.-...--..-', '.-...-.-..', '.-...-.--.', '.-...-.---', '.-...-.-.-', '.-...-..-.', '.-...-..--', '.-...-...-', '.-....-...', '.-....--..', '.-....---.', '.-....----', '.-....--.-', '.-....-.-.', '.-....-.--', '.-....-..-', '.-.....-..', '.-.....--.', '.-.....---', '.-.....-.-', '.-......-.', '.-......--', '.-.......-', '..-.......', '..--......', '..---.....', '..----....', '..-----...', '..------..', '..-------.', '..--------', '..------.-', '..-----.-.', '..-----.--', '..-----..-', '..----.-..', '..----.--.', '..----.---', '..----.-.-', '..----..-.', '..----..--', '..----...-', '..---.-...', '..---.--..', '..---.---.', '..---.----', '..---.--.-', '..---.-.-.', '..---.-.--', '..---.-..-', '..---..-..', '..---..--.', '..---..---', '..---..-.-', '..---...-.', '..---...--', '..---....-', '..--.-....', '..--.--...', '..--.---..', '..--.----.', '..--.-----', '..--.---.-', '..--.--.-.', '..--.--.--', '..--.--..-', '..--.-.-..', '..--.-.--.', '..--.-.---', '..--.-.-.-', '..--.-..-.', '..--.-..--', '..--.-...-', '..--..-...', '..--..--..', '..--..---.', '..--..----', '..--..--.-', '..--..-.-.', '..--..-.--', '..--..-..-', '..--...-..', '..--...--.', '..--...---', '..--...-.-', '..--....-.', '..--....--', '..--.....-', '..-.-.....', '..-.--....', '..-.---...', '..-.----..', '..-.-----.', '..-.------', '..-.----.-', '..-.---.-.', '..-.---.--', '..-.---..-', '..-.--.-..', '..-.--.--.', '..-.--.---', '..-.--.-.-', '..-.--..-.', '..-.--..--', '..-.--...-', '..-.-.-...', '..-.-.--..', '..-.-.---.', '..-.-.----', '..-.-.--.-', '..-.-.-.-.', '..-.-.-.--', '..-.-.-..-', '..-.-..-..', '..-.-..--.', '..-.-..---', '..-.-..-.-', '..-.-...-.', '..-.-...--', '..-.-....-', '..-..-....', '..-..--...', '..-..---..', '..-..----.', '..-..-----', '..-..---.-', '..-..--.-.', '..-..--.--', '..-..--..-', '..-..-.-..', '..-..-.--.', '..-..-.---', '..-..-.-.-', '..-..-..-.', '..-..-..--', '..-..-...-', '..-...-...', '..-...--..', '..-...---.', '..-...----', '..-...--.-', '..-...-.-.', '..-...-.--', '..-...-..-', '..-....-..', '..-....--.', '..-....---', '..-....-.-', '..-.....-.', '..-.....--', '..-......-', '...-......', '...--.....', '...---....', '...----...', '...-----..', '...------.', '...-------', '...-----.-', '...----.-.', '...----.--', '...----..-', '...---.-..', '...---.--.', '...---.---', '...---.-.-', '...---..-.', '...---..--', '...---...-', '...--.-...', '...--.--..', '...--.---.', '...--.----', '...--.--.-', '...--.-.-.', '...--.-.--', '...--.-..-', '...--..-..', '...--..--.', '...--..---', '...--..-.-', '...--...-.', '...--...--', '...--....-', '...-.-....', '...-.--...', '...-.---..', '...-.----.', '...-.-----', '...-.---.-', '...-.--.-.', '...-.--.--', '...-.--..-', '...-.-.-..', '...-.-.--.', '...-.-.---', '...-.-.-.-', '...-.-..-.', '...-.-..--', '...-.-...-', '...-..-...', '...-..--..', '...-..---.', '...-..----', '...-..--.-', '...-..-.-.', '...-..-.--', '...-..-..-', '...-...-..', '...-...--.', '...-...---', '...-...-.-', '...-....-.', '...-....--', '...-.....-', '....-.....', '....--....', '....---...', '....----..', '....-----.', '....------', '....----.-', '....---.-.', '....---.--', '....---..-', '....--.-..', '....--.--.', '....--.---', '....--.-.-', '....--..-.', '....--..--', '....--...-', '....-.-...', '....-.--..', '....-.---.', '....-.----', '....-.--.-', '....-.-.-.', '....-.-.--', '....-.-..-', '....-..-..', '....-..--.', '....-..---', '....-..-.-', '....-...-.', '....-...--', '....-....-', '.....-....', '.....--...', '.....---..', '.....----.', '.....-----', '.....---.-', '.....--.-.', '.....--.--', '.....--..-', '.....-.-..', '.....-.--.', '.....-.---', '.....-.-.-', '.....-..-.', '.....-..--', '.....-...-', '......-...', '......--..', '......---.', '......----', '......--.-', '......-.-.', '......-.--', '......-..-', '.......-..', '.......--.', '.......---', '.......-.-', '........-.', '........--', '.........-']
def func(s,debut):
    if s[0:debut]+'.'+s[debut+1:] not in l:
        l.append(s[0:debut]+'.'+s[debut+1:])
    if s[0:debut]+'-'+s[debut+1:] not in l:
        l.append(s[0:debut]+'-'+s[debut+1:])
    # print(s[0:debut]+'.'+s[debut+1:])
    # print(s[0:debut]+'-'+s[debut+1:])
    if debut<9:
        func(s[0:debut]+'-'+s[debut+1:],debut+1)
        func(s[0:debut]+'.'+s[debut+1:],debut+1)
for i in range(n):
    k=int(input())
    sIn=input()
    print("Case #",i+1,":",sep="")
    if len(sIn)%10==0:
        spec=sIn[:10]
        j=1
        while j<k:
            for c in l:
                if(c!=spec):
                    print(c)
                    j+=1
                    if(j==k):
                        break
    elif len(sIn)<10:
        length=len(sIn)
        j=1
        while j<k:
            for c in l:
                if(c[:length]!=sIn):
                    print(c)
                    j+=1
                    if(j==k):
                        break
    else:
        j=1
        while j<k:
            for c in l:
                print(c)
                j+=1
                if(j==k):
                    break
# s='.'*10
# func(s,0)
# print(l)