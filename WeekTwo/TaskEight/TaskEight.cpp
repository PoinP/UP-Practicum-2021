#include <iostream>

int main()
{
    int tomatoCount, pepperCount, carrotCount, oliveCount, potatoCount, flavourAmount;

    std::cout << "Traicho is hungry and needs some products to make himself some food!" << std::endl;
    std::cout << "Please help him get some!" << std::endl;

    std::cout << "How many tomatoes are you going to give him: ";
    std::cin >> tomatoCount;

    std::cout << "How many peppers are you going to give him: ";
    std::cin >> pepperCount;

    std::cout << "How many carrots are you going to give him: ";
    std::cin >> carrotCount;

    std::cout << "How many olives are you going to give him: ";
    std::cin >> oliveCount;

    std::cout << "How many potatoes are you going to give him: ";
    std::cin >> potatoCount;

    std::cout << "How much flavour are you going to give him(in ml): ";
    std::cin >> flavourAmount;

    std::cout << std::endl;

    bool canMakeGiuvech = tomatoCount >= 5 && pepperCount >= 6 && carrotCount >= 12 && oliveCount >= 7 && potatoCount >= 12 && flavourAmount >= 300;
    bool canMakeSoup = tomatoCount >= 2 && pepperCount >= 3 && carrotCount >= 5 && oliveCount >= 6 && potatoCount >= 10 && flavourAmount >= 200;
    bool canMakeSalad = tomatoCount >= 1 && pepperCount >= 2 && carrotCount >= 4 && oliveCount >= 3 && potatoCount >= 3 && flavourAmount >= 150;

    if (canMakeGiuvech)
    {
        std::cout << "Traicho is going to make himself a nice student giuvech!" << std::endl;
        std::cout << "He will also ask his friend to come and help him with preparing the food!" << std::endl;
    }
    else if (canMakeSoup)
    {
        std::cout << "Traicho is going to make himself a nice student soup!" << std::endl;
        std::cout << "He will also ask his friend to come and help him with preparing the food!" << std::endl;
    }
    else if (canMakeSalad)
    {
        std::cout << "Traichko is going to make himself a nice student salad!" << std::endl;
    }
    else
    {
        std::cout << "Oh no! Because of you Traico is going to be left starving. You didn't give him enough ingredients!" << std::endl;
        std::cout << "Good Job!" << std::endl;
    }
}