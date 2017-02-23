void Person::readPerson() {
    ifstream ifs("./personDB.txt"); 
    std::string person;
    if (ifs.is_open())
        std::getline(ifs, person);
    else
        throw "can't open personDB.txt";
    
    ifs >> idx
        >> fName
        >> lName
        >> city
        >> state
        >> zip
        >> dob;
    ifs.close();
}

void Person::writePerson() {
    ofstream ofs("./personDB.txt");
    ofs << idx << " "
        << fName << " "
        << lName << " "
        << city << " "
        << state << " "
        << zip << " "
        << dob;
    ofs.close();
}

void Person::display() {
    std::cout << idx << ". " << fName << " " << lName
              << ", " << city << ", " << state
              << ", " << zip << ", " << calcAge() 
              << std::endl;
}

int calcAge() {
    std::istringstream ssDoB(dob);
    std::string tok;
    int arrDoB[3];
    int i = 0;
    while(std::getline(ssDoB, tok, ':')) {
        istringstream ss(tok);
        ss >> arrDoB[i];
        i++;
    }

    time_t now;
    struct tm tmDoB;

    time(&now);

    tmDoB.tm_hour = 0;
    tmDoB.tm_min = 0;
    tmDoB.tm_sec = 0;
    tmDoB.tm_mon = arrDoB[1];
    tmDoB.tm_mday = arrDoB[0];
    tmDoB.tm_year = arrDoB[2] - 1900;

}
