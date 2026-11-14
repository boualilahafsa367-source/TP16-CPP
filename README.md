# Exercice 1 : Implémentation du patron Singleton
Figure 1 : Compilation et exécution du Singleton
<img width="1920" height="599" alt="image" src="https://github.com/user-attachments/assets/c3152007-3a03-40e9-bf91-4d48e8ad577e" />

Dans cet exercice, nous avons implémenté le patron Singleton à travers la classe Configuration. Ce patron garantit qu'une seule instance de la classe est créée et utilisée dans toute l'application. Pour cela, nous avons déclaré le constructeur comme privé et supprimé le constructeur de copie ainsi que l'opérateur d'affectation. La méthode statique getInstance() permet de récupérer l'instance unique grâce à une variable locale static. Nous avons également ajouté les méthodes afficherParametres() et modifierParametres() pour consulter et modifier les informations de configuration. Les tests vérifient que deux références obtenues par getInstance() désignent le même objet et que les modifications sont partagées.
# Exercice 2 : Utilisation du patron Fabrique (Factory Method)
Figure 2 : Compilation et exécution du patron Factory
<img width="1920" height="733" alt="image" src="https://github.com/user-attachments/assets/3edc4c92-757b-469e-b72f-c6db29ea4d94" />

Dans cet exercice, nous avons appliqué le patron Factory pour faciliter la création de formes géométriques. Nous avons commencé par définir une classe abstraite Forme, puis trois classes concrètes : Cercle, Carre et Triangle. Chaque classe possède ses propres attributs et redéfinit la méthode virtuelle afficher(). La classe FabriqueForme centralise la création des objets selon le type demandé. Les objets sont retournés sous forme de pointeurs intelligents std::unique_ptr<Forme>, ce qui permet de profiter du polymorphisme tout en assurant une gestion automatique de la mémoire. Les tests vérifient la création des trois formes ainsi que la gestion d'un type non reconnu à l'aide d'une exception.
# Exercice 3 : Application du patron Observateur (Observer)
Figure 3 : Compilation et exécution du patron Observer
<img width="1920" height="812" alt="image" src="https://github.com/user-attachments/assets/94e246cd-6393-4693-80ac-93b5cbc17b1e" />

Dans cet exercice, nous avons développé une application météo basée sur le patron Observer. La classe StationMeteo représente le sujet et conserve les mesures de température, d'humidité et de pression. L'interface abstraite Observateur définit la méthode mettreAJour(), qui est implémentée par les classes AffichageTemperature, AffichageHumidite et AffichagePression. La station utilise une liste d'observateurs pour transmettre automatiquement les nouvelles mesures après chaque modification. Les méthodes ajouterObservateur() et retirerObservateur() permettent de gérer dynamiquement les inscriptions. Les tests montrent que les affichages sont actualisés automatiquement et qu'un observateur retiré ne reçoit plus les notifications.
# Exercice 4 : Mise en œuvre du patron Stratégie (Strategy)
Figure 4 : Compilation et exécution du patron Strategy
<img width="1920" height="620" alt="image" src="https://github.com/user-attachments/assets/7730c02f-190a-4384-8f40-84a49df733bf" />

Dans cet exercice, nous avons implémenté le patron Strategy afin de proposer plusieurs méthodes de tri pour un même vecteur de chaînes de caractères. Nous avons défini l'interface abstraite StrategieTri, puis trois stratégies concrètes : TriCroissant, TriDecroissant et TriParLongueur. La classe GestionnaireTri utilise une stratégie à travers un pointeur intelligent std::unique_ptr, ce qui permet de changer d'algorithme pendant l'exécution. Chaque stratégie possède sa propre implémentation de la méthode trier(). Les tests utilisent un ensemble de chaînes de caractères personnalisé pour comparer les trois méthodes de tri. Cet exercice montre qu'il est possible de modifier le comportement du programme sans changer la classe qui utilise les stratégies.

