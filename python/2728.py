while True:
    try:
        p_aux = ''
        entrada = input().split("-")
        for i in entrada:
            if (i.lower()[0] == 'c'):
                p_aux += 'c'
                continue
            elif ((i.lower()[len(i) - 1] == 'c')):
                p_aux += 'c'
                continue

            if (i.lower()[0] == 'o'):
                p_aux += 'o'
                continue
            elif ((i.lower()[len(i) - 1] == 'o')):
                p_aux += 'o'
                continue

            if (i.lower()[0] == 'b'):
                p_aux += 'b'
                continue
            elif ((i.lower()[len(i) - 1] == 'b')):
                p_aux += 'b'
                continue

            if (i.lower()[0] == 'l'):
                p_aux += 'l'
                continue
            elif ((i.lower()[len(i) - 1] == 'l')):
                p_aux += 'l'
                continue

        if (p_aux == 'cobol'):
            print('GRACE HOPPER')
        else:
            print('BUG')
        
                
    except EOFError:
        break
