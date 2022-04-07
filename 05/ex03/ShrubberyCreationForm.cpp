#include "ShrubberyCreationForm.hpp"

/* --- Coplien ------------------------------------------------------------ */
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation", false, 145, 137, target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.isSigned(), src.getSignGrade(), src.getExecGrade(), src.getTarget()) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	if (this != &src) {
		if (src.getSignGrade() > Form::lowlvl || src.getExecGrade() > Form::lowlvl) {
			throw Form::GradeTooLowException((src.getSignGrade() > Form::lowlvl) ? src.getSignGrade() : src.getExecGrade());
		}
		else if (src.getSignGrade() < Form::higlvl || src.getExecGrade() < Form::higlvl) {
			throw Form::GradeTooHighException((src.getSignGrade() < Form::higlvl) ? src.getSignGrade() : src.getExecGrade());
		}
		else
			(*this) = src;
	}
	return (*this);
}
/* --- Coplien ------------------------------------------------------------ */



/* --- Others ------------------------------------------------------------- */
void						ShrubberyCreationForm::operate(void) const {
	std::ofstream	ofs(this->getTarget() + "_shrubbery", std::ofstream::trunc|std::ofstream::out);
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMWMMWWWXKKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXXWXkk0NWMMWWXkolo0WMMMMMMMMMMWKOKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMNKNWMW0oxNXxcldKWMNOolccl0WMMMMMMMWWWN0od0NXOOKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNklkNWW0xOKxoxOk0NNOodollxXWMMMMMMMWKxdxdkKOdlxKX0KWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWMWWMMMWMMNKXNWKdlkNX0OKXxllON0OKX0Okx0KX00NMMMMMWWKkkddkKK0KNWOlo0WMWWWWWWWWWWMWWMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWMNkdk0KK00KXOd0XkxkOkll0WX0KNWW0oxXMMWWWNkld0KKXNNKOk0OxxkNWN0000XWWWWWWMWWWWWWWWWWWMMWWWWWMMWWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMWWWWWWMMWWWXOxk0XKxd0Kdd0KXN0dooOKX0xx0KK0XWNKOOXkllokkdk00xolxOkOKXKOxddloxKWWWWWWWWWWWWWWWWMMMMWWWMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMWWWWXNWWWWMMWWWWXXNWKkOKNKO000XX0xdxxkKklodkKKOxlck0xdddXXkxkK0xdooxKWNK00K0kkkKWWWWWWWWWWWWWMWWMMWWWWWWWWWMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMXxodOXWMWWWWW0xk0KXXkdkkxolx0xllONNWKk0K00kddxONN000XNXXKXNX00KX0xkXWK0KOxx0WXk0WWWWWMMMWWMMMMMMMWWWMMMWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMWWNxllld0NN0KNWXxldxOkolxK000koood0KXWKKNXXXK00KNWWXKOxodOkddO0OKN0olkN0dxddONNkokNWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWW0oldod0kloONXKKKXX0kOOxxKWNOlx0xlxXKkkddddoookNW0ddldKWNkodxdoxK0OOkk0XOdONWK0XNWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK0NWMMMW0dxOxkxlloOkox0K0000OdoONXXxcllcl0koxddoloxxdOK0K0OKNWWWK00OxddxkkOXNN0dd0NNKKKWMWMMWMMMMMMMMMMMWMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMWNWMKocd0WWNWWXKKNXkoddxdccodxxOKKOk0Kxodlcdoldk00OkO0XNOld0X0kdokXWXxlddddxxOXNXKK0000KN0do0WWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMXkx00ocloOXkdOkx0NNKOO0KdcoldKX0kxxkO0OdddlokOdkXkdxKWWXkx0KKOxxOXW0clxkxolloOK0xdloOXK0WNOdKWWNNXNWMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMWOddkxodxx0xlddllk0OxdxkxdkdkXXKOxxOXX0O0Xo,k0kXNOddO0xdkOkxxOXWWW0;:Okl::cdOKKkkkkOOkx0NXXNX0kdookXMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMN0xxxddx0X0kkOxxkOkdloddx0KXkxKXOkOXXXOxKO,:ddKNWNXxodkkxkkkOXKko;';::oolc,;ddodxOOxdkOxoxK0xxdx0NWMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMWNXXKOdolcodkXXOxOKXXK0Okkk00kKNOx00xokNMMNkOXc'ooldO0ocdocldXNKxoccoddookK0O0OclxxodkkddxxxkkkxOXNNXKKNWWWMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMNkllooxxkOkO00K0kx0XNKOkkkxkOkoxk0NKddXWWWNKkOolOxloc:lxkxk0Xkc,;lxXN0xk0KxoxKN0::dloKWNXOkkOOdlkNX0kolokKWWWMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMN0kddxkKWXkooxKNNNWXkddxk0XKxl:ox00kKWWNkd0dclcxK0kl;xKkk0kc.;kK00X0k0NKxdkKOxxclkkxKWKkx0XKOkdxxxxkkxddxKWMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMWXXXXNXXNKO00KXNXOk0XNX0O0NW0ccx0X0ddKXkllOOol':XWO::odlc;..:kOkxk0kodkxxk0K0OKOldOOXXxoxKXKKXKOddONWWWWWWMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMWXOdodxKKxxKNKxdkXNXOdkNWW0doxKNklld0XKXX0kxkXXx;.,0MxcokKx;.,ldxk000OO0KkokX0xodOXOoooOXK0K0OdlokOxcdNWMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMWKdlloxOXOodOOxxOOOOOkxxkOOkdlokXXockXX0Ok0O00koko..OWdcOXK:.:KMXxxKNOxkKXKOOXN0OOKNWXOxk0KOdd0K00KNXk0WMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMWX00KXNN0dllloxxxookKNKxkX0kdooxxdl':0NKkxOOddlo0d..kWocOKx;;OWWNOokNXK000Oxk0KX0kKWWNXOdx0OxdkXNNXKOkOXWMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMNXXNKkxdodkxllldO00koxOdoddkOkkdc;,oKXKX0dk0KXx..xWd;ol:cld0WWNKXWNKOxk0kd0WKdo0NK0XKx0WWWNNNKkd00k0NWWWNXNNWMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMNxlx0XXklxXOdx0XNKKXKXNXKOxolldkXXk::kKKdlKXOxo:,xMk'...,oxOXKOXKO00OKkk0kONX00Ok0NWXkkKWNO0NOdOXkokKXKOxoookXWMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMWXOk0KkooxNNOdxKNWXOkOKKxxKOdOXNNOOKkco0o:xdccl:,dW0; . ,OKKK0KOoo0WXxd0XXKOkOXX00KNKkdOKxlxXNNNNKOkOK0kdodOXWMMMMMMMMMMMMMMMMMM\n";
ofs << "MMWWWWMMMMMMMMMMMMWWWWN0kk0KOkkxO0kkO0XKOxk0X0kKW0oxXWXdlOXxclc:loocl:'oWNo''.:kxdoxO0O0K0dldXN0O00xok0KXN0dlOKOxk0XXKOO0XXK00koodkXWMWMMMMMMMMMWWWWWW\n";
ofs << "WWWWWWMMMMWWWMMWWWKOOOKKkodk0XOdkOxkKWWNKOkkO00OOkddkOkdokXKdc:cxkdo:'.lNK:...l00000XWNXOdlo0NX0kO0OddxxOKKkkOO0XOxkKXOooxxdodO0OkkKNMMMMMMMMMMMWWWWWW\n";
ofs << "WWWWWMMMMMWWWMMWWWXxlldOKNXK0Okk0KKkxKKkolld0NKxod0NNKOxxxxdxxo;ckKKl,'cXx,'',ldxOKKKKKKK0ox0xONKdx000KKkdOXKxlokKKKOkxdoxkoclkWMMMMMMMMMMMMMMMMWWMMMW\n";
ofs << "WMMMWWWWMMWWWMWWWWWKxlxkxKXOxdxO0K0x0NXkloOXXKOkOKOkXXxlOWXOxol,.cKOll:lk:..'ldodddkOO00XWdlO000xo0X00XOocokOkkkOXKkdlldkKN0doOWMMMMMMMMMMMMMMMMWWWWWW\n";
ofs << "MMMMMMWWMMMWWWMMMMWWN0O00K0xodkkxx00OKOoldxOkoxxd0KO0kolx0xkXXk;..lkolllo:''.oKOdxkkKWN0kkc;xOdoldKKkdddlodxddxOOOO0OxodkKWWNXNMMMMMMMMMMMMMMMMMWMMMMM\n";
ofs << "WWWWWWWWWWWWWWWWWWWNXKXNWXXKkxxOOkkK0oooo0xlkOKKO00OOkOkxocl0WMKc.;Od,,,;,. 'kWN0kOKXKkocdd:lkxd:,cldkOOdooO0ddKKxdKNOxOOKNNNNWWMMMMMMMMMMMMMMMMWWWWWW\n";
ofs << "WWWWWWWWWWWWWWWWWNWXxodxk0KXWNXKXKO0Kxox0Wkl00xxOK0k00Okooll0WWW0,.dx.......:XWXOook0kddkK0:d0o:;lONNNWNKOxOX0xd0KkxxldXXOxddddx0WMMMMMMMMMMMMMMWWWWWW\n";
ofs << "MMMMMMMMMMMMMMMMMWMWKdclldxOKWKddO0Okxl:lkk:dXOxxO00K0doxdd0X0k0No.;d'  ....dWWWWKkdkklxX0dc:'.l0WWWX0OxdkK0xlcdKKkollON0xdlodxOXWMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMWXOddxk0K0kolo0MW0doooo:,clcclodkXXkdONNOlco0k..l;..  .;kWWWWXxlxxcoxlc;.,kNWWWKkocld0KOxxkKNX0kkKNWN0kddxxOXWMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMWNK00KXKkooxKMWOllkXW0lc:cc;';lkKXkdXKocccxO; :c.   'ckK0O0kxONkckd;'.'oxxdxxdlccd0K0xkX0kx0NWWWNNN0xocld0NMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMN0dolldxkOkOO0KOdodkNXkodOK0xl,..;:,dOlldldKl 'l'   .;x0dlcldkXdoO:..cxOOxllokOkdooddolxOxllkXXkokKX0O0XNWMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMWN0kdodxO0KKOxxkxoodxxdllodxxxoc;'...;;d0dkNd..c:...',o00kxdxk0o,,..dNNXKX0xkXWW0xolo0K0OkxxOKkolONNKOkO0XWMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMWWNX0OxolodkXWKkdllldOKK0Okxkkkkd:..':xXWO, 'l,.:cllllodx0NNl. .dKOxoxKOldOOxkOxoo0N0xodOXNKOOXNXOxollxKWMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxxxOKNKxoccodk0Odolcoxdxx0Xk:...c0Nc .::..',;cclddkXx' .lxocclx0koooloO0OKKXNXKK0OkkK0kxxk0KXXXNWMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMWXK00KXX0xddddolcldKWMNx'  'xk' .c'   ..cxk0Kd. .:dddlcdXWNKOkkKKO0K0KWWX0OxookK0kxxkXWMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWNNNXkx0NWWWWWO,. .oc. ,;.    .dKOc...:00kolodolc:,;::clllcodoccco0XXXXXXXNWWMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMWWMMMMMMWWK:. .c, .'.     ...   'xko;'...'..'::ldocclx00xooxKNN0xoldkXWMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK:. ,l. ..     ...   ....,:okO0kooxloxdooloOKkdkKXNNK00KXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK: .cc.  .         ..,:d0NWNOxxdodxxxkxdookOxoodkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO, .c;    .. .   .;dkxoldkXXkollcdKOxkdld0XKOkxxONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx. .' .       .,kKkdollccoOXKdlcdKNkollcdKWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWX:  .     .   ,OWMWX0kxddod0WN0kKWWWXkoll0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWMMMMMMMMMMMMMMMMMMMMWMMMMMMWk. .        .kMMMMMMWWWNNNWWMMMMMMMMWN00XWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWMMMMMMMMMMMMMMWWWWWMWWMMX:         .lNMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWMMMMMMMMMMMWWMWWMWWWMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWMWWWWWWWWWWWWWWWWWWWMWWMMWo. .    . .kMWMMMMMMMMMMMMMMMMMMMMMMMWWWMWWWWWWWWWWWWWWWWWWWMWWWWWWMMWWMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWMWWWWWWWWWWMWWWWWWWWWWWWMWMMMMk. .   .. '0MMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWMMMMMMMWWWMWMWWWMWWWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWMMMWWWWMMWWWWWMMWWWWWWMMWWWMMMx.        ,0WWMMMMMMMMMMMMMMMMMMMMMMMMWWMMWWWWMMMMWWMMMWWMMMMWWWWWWWWMMWWMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMWWMMWWWWWWMMWWMMWWWMMMMWMWWWWMXc.        .kWWMMMMMMMMMMMMMMMMMMMMMMMMWWMWWWWWWWWWWWWWWWWWMMMWWWMMMWWWWWWMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWNWWWNWWWWWWWWWWWWWWWWWWNWWWMWx.         .lNMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNWWMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMWWWWWWWWWWMMWWMMWWWWWWWWWWMWW0,           .xWMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMWWWWWWWWWMMMWWWWWWWWWWWMWWMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO;.            'xNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWNNNNNNNXXXXXXXXXKkc.               .l0KKXXXXXXXXXXXXXXNNNNNNNWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMWWWWWWWWNNNNNNNNNXXXXXXXXXXKKKKKKKK000000OOOkkkOOOxdoooloooooooooooooooxkkOOOOOOOOOOOOO00000KKKKKKKKKXXXXXXXXXNNNNNNNWWWWWWWMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMWWMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMWWWWWWWWWWWWWWNNNNNNNNNNNNNNXXXXXXXKKKKK000Okoc::::::::::::::::::::::::::::::cdkOOOOO00000KKKKKKKKXXXXXXXNNNNNNNNWWWWWWWWWMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMWWMWWWNNWMWWNXKOxoc;'..   ..       ....   ..  ..    ..:okKNNWMMMMMMWMMWMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMWWXXKK000kkkkkxxxkxxdool::loollc:'....,;,. .,'.  .   .,:,;'  .''..','.. .';;:::clllloodk0XNNNXXXKKXNNNNWWWWMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMWNXXXXXK0xxO0kdodOO00Oxook00koccooddxd:. .:kk:. .,...;dkddo...;xxdol::cc'.,lxkOOOxc;cooooc;coxkOOO0KKXXNNWWMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "WWWWWWWMMMMMMMMMMMWWWWMWWWWNNXXNNKXX0XK00OOKNKkxddkKNWNOo;.'ckXXl..,:::,,;xN0OKo;',d000Kkdodkxl;.,x0KKKOk0KKKklxdoxOO000KXXXXNWWMMMMMMMMMMMMMMMMWWWWWW\n";
ofs << "WWWWWWWWWWWWWWWWWWWWWWWMMWWMMWNNNNWX00XXNWWXkddk0KKklc:,:xOOKNO:..ldcx0:.'dXXXWXo,':kKXXXXX0kO0Kx::d00Ok0XXK0KO0XXNNNNWWMMMMMMMMMMMMMMMMMMMMMMMMWWMMMW\n";
ofs << "WWWWWWWMMMMMMMWWWWWMMWWMWWWMMWWWMMMWXNWWWMKdd0XXXOc,,;xK0XXXOc..lO0c;OWO, 'ckNXOOkl,:ooxOKXWNXKKXKkc:xOxxKK0KXXKXWMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMWWWWWW\n";
ofs << "WWMMMMMWWWWWWWWWMWWWWWWMWMMMWMMMMMMWWWWWMNkONWWNx,ckxkNWNXKd'.c0WKcoOkX0o:,';dOO0NWXKOoldocloxOXNNNKo:d0KNXXXXXXXNNWMMWMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMW\n";
ofs << "WWWWWMWWWWWMWWWMMWWWMMMWWWMWWMMMMMMMMMWNNK0XNNXd,d0kkXMWWNd.,ONWKllOK0kdOK:...'oO000KNK0KKOkdolco0NWWk:cx0XWMWWMMWNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMM\n";
ofs << "WWWWWWWWWWWWWWWWWWWWWWWWNWWWMMMMMMMMMMMMWNXWWWO;oNKXXKWWWk.'OWMNOx0N0KXO0Kc..,:;:dOO0XXXK0KKKXXKo:dXWNOkOOO0KXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWW\n";
ofs << "MWWWWWWWWWMMMWWWWWWWWWWWWWWMMMMMMMMMMMMMWWWMMXodKNNNNNWXOc.c0NMXKK0NXKNNKx' 'ON0:',ckKNWWNXXNNNNKo;lXWXXWMWNNXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMOxNWNNNKK0xOd'xXKNNXNXNNXWWO,,lkWNkxOl..;lox0XNWWWNKXxcOWNNWMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK0WWNKXXNN0Kk;kWXXWXNWWNNKd,;OWNNK0KKKk,.ok;;kKXWMNXWXdkMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWNWMWWNXWkc0WNNWNNWNOl,lxONWWWWNXNWNc.dWk:dKXNWWNNW0kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWxoKNWWWNXKkccONXXWWWWNNNNXo.,OMXdx0OXNWWWWWXXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0OXNXXWNKK0dkNNXXKOxOXKKOdc,:kO0NKkOXNNWWWMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXNMMWXNNNWOONNXXXK00XWXkc,o0OxO0KKKKXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNWMWXXWNNKKK0O0kclOkoOX0KKXNNXWMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMWWNXXNX00KO::KWX00XWMNXWMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNWWWKKOdcldxXXXWWWWMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMNKxllcxKXNNWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNKk0WkxXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNWWWNNMXOKWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMNKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWMMMMMMMMMMMMWMMWWMMMMMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWMMWWWWWWWWWWWWMMWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMWWWWWWWWWWWWWWWWWWWWMWWWWWWMMMMMMMMMM\n";
ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMWWWWWWMMWWWWWWWWWWWMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWMMMMMMMWWWMMMMWWMMMMMMMMMMMMMM\n";
	std::cout	<< this->getTarget()	<< "_shrubbery has been created"
				<< std::endl;
}

Form*						ShrubberyCreationForm::clone(std::string const &target) const {
	return new ShrubberyCreationForm(target);
}
/* --- Others ------------------------------------------------------------- */
