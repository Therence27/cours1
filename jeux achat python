def main():
    # Déclaration des variables
    argent = 100
    score = 0
    niveau = 1

    inventaire = [0, 0, 0, 0, 0]  # Liste pour stocker les objets du joueur

    while True:
        print("==== Mini Jeu Textuel ====")
        print("1. Acheter")
        print("2. Vendre")
        print("3. Explorer")
        print("4. Quitter")
        choix = int(input("Choisissez une option : "))

        if choix == 1:
            print("Vous avez choisi d'acheter.")
            argent -= 50
            inventaire[niveau - 1] += 1  # Ajoute un objet à l'inventaire
        elif choix == 2:
            print("Vous avez choisi de vendre.")
            if inventaire[niveau - 1] > 0:
                argent += 25
                inventaire[niveau - 1] -= 1  # Retire un objet de l'inventaire
            else:
                print("Vous n'avez pas cet objet dans votre inventaire.")
        elif choix == 3:
            print("Vous avez choisi d'explorer.")
            if niveau == 3:
                print("Vous avez trouvé un trésor ! Votre score augmente de 10.")
                score += 10
            else:
                print("Rien d'intéressant ici. Continuez à chercher.")
            niveau += 1
        elif choix == 4:
            print("Vous avez choisi de quitter. Fin du jeu.")
            return
        else:
            print("Option invalide. Veuillez choisir à nouveau.")

        # Affichage des informations du joueur
        print("Argent :", argent)
        print("Score :", score)
        print("Niveau :", niveau)

        print("Inventaire :", inventaire, "\n")


if __name__ == "__main__":
    main()
