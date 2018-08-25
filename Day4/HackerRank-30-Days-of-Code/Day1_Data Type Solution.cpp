  // Declare second integer, double, and String variables.
    
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>i2;
    cin>>d2;
    cin.get();
    getline(cin, s2);
    // Print the sum of both integer variables on a new line.
    
    cout<<i+i2<<endl;
    // Print the sum of the double variables on a new line.

    
    d = d+d2;
    cout<< std::fixed <<std::setprecision(1)<< d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<s2;
