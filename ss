Analyse des performances : Comparaison des tirs à 50, 60 et 120 utilisateurs

L’analyse repose sur l’observation des temps de réponse moyens et au 90e percentile pour les trois campagnes de test (50, 60 et 120 Vusers), effectuées sur une même tranche de tir d’environ 15 minutes.
Objectif de la comparaison : Identifier les écarts de performance entre les différents niveaux de charge, et non pas directement comparer les résultats absolus, notamment dans le cas du tir à 120 utilisateurs qui utilise une stratégie multi-injecteur.
Observations générales
- Comportement global : Les tirs à 50 et 60 vUsers présentent des performances similaires, avec des temps moyens proches et peu d'écarts au 90ᵉ percentile.
- 120 utilisateurs : Certaines transactions montrent des temps plus rapides à 120 utilisateurs. Cela peut s’expliquer par l’utilisation d’un scénario multi-injecteurs, permettant de répartir la charge et d'éviter la saturation d’un seul injecteur.
Performances Variables
1. Transactions plus rapides avec 120 utilisateurs :
   - Par exemple : "Votre situation actuelle", "Votre situation fiscale actuelle", et "Actualisation budget" affichent parfois de meilleures performances à 120 vUsers.
   - Cette amélioration est probablement liée à l'optimisation de l'infrastructure de test (scalabilité horizontale via plusieurs injecteurs).
2. Transactions sensibles à la montée en charge :
   - Certaines étapes critiques comme "Connexion SIPP" ou "Génération de la feuille de route" montrent un temps de réponse au 90ᵉ percentile plus élevé, signalant un possible début de saturation ou une latence côté serveur.
Impact Global
L’augmentation de charge de 50 à 120 utilisateurs n’entraîne pas d’effondrement des performances globales.
Les écarts observés permettent de mieux comprendre les points sensibles du parcours, sans pour autant remettre en cause la capacité du système à absorber la montée en charge.
