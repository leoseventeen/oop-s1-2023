void read(Records& records){
        _file.open(_filename, ios::in);
        if (_file.is_open()){
            string line;
            while (getline(_file, line)){
                // when stoi fails use try catch
                try{
                    records.push_back(stoi(line));
                }
                catch(exception e){
                    cout << "Error: " << e.what() << endl;
                }
            }
            _file.close();
        }
    }