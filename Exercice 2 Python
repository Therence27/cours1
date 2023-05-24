# Classe représentant un ordinateur
class Ordinateur:
    def __init__(self, marque, modele, stock, prix):
        self.marque = marque
        self.modele = modele
        self.stock = stock
        self.prix = prix

    def afficher_details(self):
        print("Marque :", self.marque)
        print("Modèle :", self.modele)
        print("Stock :", self.stock)
        print("Prix :", self.prix)

# Variables globales
ordinateurs = []
total_ordinateurs = 0

# Fonction pour ajouter un nouvel ordinateur
def ajouter_ordinateur():
    if total_ordinateurs == 50:
        print("La capacité maximale d'ordinateurs est atteinte.")
        return

    marque = input("Marque : ")
    modele = input("Modèle : ")
    stock = int(input("Stock : "))
    prix = float(input("Prix : "))

    nouvel_ordinateur = Ordinateur(marque, modele, stock, prix)
    ordinateurs.append(nouvel_ordinateur)
    total_ordinateurs += 1

    print("L'ordinateur a été ajouté avec succès.")

# Fonction pour afficher tous les ordinateurs
def afficher_ordinateurs():
    if total_ordinateurs == 0:
        print("Aucun ordinateur enregistré.")
        return

    print("==== Liste des ordinateurs ====")
    for i, ordinateur in enumerate(ordinateurs, start=1):
        print("Ordinateur", i)
        ordinateur.afficher_details()
        print()

# Fonction pour mettre à jour le stock d'un ordinateur
def mettre_a_jour_stock():
    if total_ordinateurs == 0:
        print("Aucun ordinateur enregistré.")
        return

    choix = int(input("Choisissez l'ordinateur à mettre à jour (1-{}): ".format(total_ordinateurs)))

    if choix < 1 or choix > total_ordinateurs:
        print("Choix invalide.")
        return

    nouvel_stock = int(input("Nouveau stock : "))
    ordinateurs[choix - 1].stock = nouvel_stock

    print("Le stock de l'ordinateur a été mis à jour avec succès.")

# Fonction principale
def main():
    while True:
        print("==== Gestion du magasin d'informatique ====")
        print("1. Ajouter un nouvel ordinateur")
        print("2. Afficher tous les ordinateurs")
        print("3. Mettre à jour le stock d'un ordinateur")
        print("4. Quitter")
        choix = int(input("Choisissez une option : "))

        if choix == 1:
            ajouter_ordinateur()
        elif choix == 2:
            afficher_ordinateurs()
        elif choix == 3:
            mettre_a_jour_stock()
        elif choix == 4:
            print("Fin du programme.")
            break
        else:
            print("Option invalide. Veuillez choisir à nouveau.")

if __name__ == "__main__":
    main()
