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
