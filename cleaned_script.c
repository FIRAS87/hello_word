
Action()
{
	web_submit_data("YXMFT_7", 
		"Action=https://static-r.tech.lcl.fr/9874701/YXMFT?cid=30&si=3&e=https%3A%2F%2Fuat-frontend-transac.hors-prod.caas.lcl.gca&t=&__tp=main_account", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://static-r.tech.lcl.fr/9874701/qQaA.html", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=d", "Value=...", ENDITEM, 
		LAST);

	web_url("aggregation_2", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/accounts/aggregation?contract_id=MDAzMTMwMjMwODA4MTUzMg", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/compte", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("eligibility_2", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/patrimony/eligibility?contract_id=MDAzMTMwMjMwODA4MTUzMg", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MON_ESPACE_3", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/blooped_operations/MON_ESPACE?contract_id=MDAzMTMwMjMwODA4MTUzMg", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("pre-access_2", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/messaging/pre-access", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("authorized_operations_3", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/authorized_operations?contract_id=MDAzMTMwMjMwODA4MTUzMg", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accounts_2", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/accounts?type=saving&contract_id=MDAzMTMwMjMwODA4MTUzMg&is_eligible_for_identity=false&include_aggregate_account=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("term_accounts", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/accounts/term_accounts?contract_id=0031302308081532", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("eligibility_3", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/patrimony/eligibility?contract_id=MDAzMTMwMjMwODA4MTUzMg", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_url("life_insurances", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/accounts/life_insurances?contract_id=MDAzMTMwMjMwODA4MTUzMg&include_aggregate_account=false", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("unread_2", 
		"URL=https://uat-frontend-transac.hors-prod.caas.lcl.gca/api/user/alerting/unread?resource=all", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://uat-frontend-transac.hors-prod.caas.lcl.gca/synthese/epargne", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);
}
