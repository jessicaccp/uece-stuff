from contato import Contato

class Familia(Contato):
    # -------------------------------------------------------------- construtor
    def __init__(self, parentesco=''):
        Contato.__init__(self)
        self.__parentesco = parentesco

    # ------------------------------------------------------------------ getter
    @property
    def parentesco(self):
        return self.__parentesco

    # ------------------------------------------------------------------ setter
    @parentesco.setter
    def parentesco(self, parentesco):
        self.__parentesco = parentesco

    # ----------------------------------------------------------------- metodos
    # edita parentesco
    def editar_parentesco(self):
        print('Selecione o parentesco:')
        print('1. Avó')
        print('2. Avô')
        print('3. Irmã')
        print('4. Irmão')
        print('5. Mãe')
        print('6. Pai')
        print('7. Prima')
        print('8. Primo')
        print('9. Outro\n')

        while True:
            try:
                parentesco = int(input('Selecione a opcao: '))
                if parentesco not in range(1, 10):
                    print('\nSelecione uma opcao valida.\n')
                elif parentesco == '':
                    print('\nCampo obrigatorio.\n')
                else:
                    if parentesco == 1:
                        parentesco = 'Avó'
                    elif parentesco == 2:
                        parentesco = 'Avô'
                    elif parentesco == 3:
                        parentesco = 'Irmã'
                    elif parentesco == 4:
                        parentesco = 'Irmão'
                    elif parentesco == 5:
                        parentesco = 'Mãe'
                    elif parentesco == 6:
                        parentesco = 'Pai'
                    elif parentesco == 7:
                        parentesco = 'Prima'
                    elif parentesco == 8:
                        parentesco = 'Primo'
                    else:
                        parentesco = 'Outro'
                    self.parentesco = parentesco
                    return
            except ValueError:
                print('\nDigite apenas numeros.\n')
