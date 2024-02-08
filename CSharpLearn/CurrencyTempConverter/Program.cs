using System.Runtime.InteropServices;

Console.WriteLine("Welcome! Please enter C for currency converter or T for temperature converter.");
string answer = Console.ReadLine();
if (answer == "C" || answer == "c")
{
    Console.WriteLine("You have selected Currency Converter.");
    Console.WriteLine("Please enter the amount you would like to convert.");
    double amount = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("Please enter the currency you would like to convert from.");
    Console.WriteLine("USD, EUR, GBP, TL");
    string fromCurrency = Console.ReadLine();
    Console.WriteLine("Please enter the currency you would like to convert to.");
    Console.WriteLine("USD, EUR, GBP, TL");
    string toCurrency = Console.ReadLine();
    if (fromCurrency == "USD")
    {
        if (toCurrency == "USD")
        {
            Console.WriteLine("The amount of dollars is " + amount * 1);
        }
        else if (toCurrency == "EUR")
        {
            Console.WriteLine("The amount of euros is " + amount * 0.93);
        }
        else if (toCurrency == "GBP")
        {
            Console.WriteLine("The amount of pounds is " + amount * 0.80);
        }
        else if (toCurrency == "TL")
        {
            Console.WriteLine("The amount of liras is " + amount * 26.85);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    if (fromCurrency == "EUR")
    {
        if (toCurrency == "USD")
        {
            Console.WriteLine("The amount of dollars is " + amount * 1.07);
        }
        else if (toCurrency == "EUR")
        {
            Console.WriteLine("The amount of euros is " + amount * 1);
        }
        else if (toCurrency == "GBP")
        {
            Console.WriteLine("The amount of pounds is " + amount * 0.86);
        }
        else if (toCurrency == "TL")
        {
            Console.WriteLine("The amount of liras is " + amount * 28.78);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    if (fromCurrency == "GBP")
    {
        if (toCurrency == "USD")
        {
            Console.WriteLine("The amount of dollars is " + amount * 1.25);
        }
        else if (toCurrency == "EUR")
        {
            Console.WriteLine("The amount of euros is " + amount * 1.17);
        }
        else if (toCurrency == "GBP")
        {
            Console.WriteLine("The amount of pounds is " + amount * 1);
        }
        else if (toCurrency == "TL")
        {
            Console.WriteLine("The amount of liras is " + amount * 33.54);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    if (fromCurrency == "TL")
    {
        if (toCurrency == "USD")
        {
            Console.WriteLine("The amount of dollars is " + amount * 0.037);
        }
        else if (toCurrency == "EUR")
        {
            Console.WriteLine("The amount of euros is " + amount * 0.035);
        }
        else if (toCurrency == "GBP")
        {
            Console.WriteLine("The amount of pounds is " + amount * 0.030);
        }
        else if (toCurrency == "TL")
        {
            Console.WriteLine("The amount of liras is " + amount * 1);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
}
if (answer == "T" || answer == "t")
{
    Console.WriteLine("You have selected Currency Converter.");
    Console.WriteLine("Please select the temperature.");
    Console.WriteLine("C for Celsius, F for Fahrenheit, K for Kelvin");
    string temperature = Console.ReadLine();
    if (temperature == "C" || temperature == "c")
    {
        Console.WriteLine("Which temperature you want to convert to?");
        Console.WriteLine("F for Fahrenheit, K for Kelvin");
        string temperature2 = Console.ReadLine();
        if (temperature2 == "F" || temperature2 == "f")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Fahrenheit is " + (temp * 9 / 5) + 32);
        }
        else if (temperature2 == "K" || temperature2 == "k")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Kelvin is " + (temp + 273.15));
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    else if (temperature == "F" || temperature == "f")
    {
        Console.WriteLine("Which temperature you want to convert to?");
        Console.WriteLine("C for Celsius, K for Kelvin");
        string temperature2 = Console.ReadLine();
        if (temperature2 == "C" || temperature2 == "c")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Celsius is " + (temp - 32) * 5 / 9);
        }
        else if (temperature2 == "K" || temperature2 == "k")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Kelvin is " + (temp - 32) * 5 / 9 + 273.15);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    else if (temperature == "K" || temperature == "k")
    {
        Console.WriteLine("Which temperature you want to convert to?");
        Console.WriteLine("C for Celsius, F for Fahrenheit");
        string temperature2 = Console.ReadLine();
        if (temperature2 == "C" || temperature2 == "c")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Celsius is " + (temp - 273.15));
        }
        else if (temperature2 == "F" || temperature2 == "f")
        {
            Console.WriteLine("Please enter the temperature.");
            double temp = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("The temperature in Fahrenheit is " + (temp - 273.15) * 9 / 5 + 32);
        }
        else
        {
            Console.WriteLine("You have made a mistake. Please try again.");
        }
    }
    else
    {
        Console.WriteLine("You have made a mistake. Please try again.");
    }
}
