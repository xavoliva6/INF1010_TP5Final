/********************************************
* Titre: Travail pratique #4 - utilisateurPremium.cpp
* Date: 19 octobre 2018
* Auteur: Wassim Khene & Ryan Hardie
*******************************************/

#include "utilisateurPremium.h"


UtilisateurPremium::UtilisateurPremium(const string& nom, MethodePaiement methodePaiement,
	unsigned int joursRestants, const string& courriel, const string& idPaypal)
	: Utilisateur(nom, methodePaiement, courriel, idPaypal), joursRestants_(joursRestants)
{}

unsigned int UtilisateurPremium::getJoursRestants() const {
	return joursRestants_;
}

void UtilisateurPremium::setJoursRestants(unsigned int joursRestants) {
	joursRestants_ = joursRestants;
}

void UtilisateurPremium::print(ostream & os) const
{
	os << "\t- Utilisateur (Premium) " << nom_ << " :" << endl;
	os << setprecision(2) << fixed << "\t\tTotal a payer: " << balanceTransferts_ << "$ (" << -balanceFrais_ << "$ economises)" << endl;
	os << "\t\tJours restants: "<< joursRestants_ << endl;
	Utilisateur::print(os);
	os << endl;
}
