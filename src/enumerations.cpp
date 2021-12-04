//
// Created by disooqi on 2020-04-04.
//
enum class Color {RED, GREEN, BLUE};
enum class Traffic_light {GREEN, YELLOW, RED};

Traffic_light& operator++(Traffic_light& t){
    switch (t){
        case Traffic_light::GREEN:
            return t = Traffic_light::YELLOW;
        case Traffic_light::YELLOW:
            return t = Traffic_light::RED;
        case Traffic_light::RED:
            return t = Traffic_light::GREEN;
    }
}

Color c = Color::RED;
//Color e = 1;  // ERROR

//Traffic_light r = Color::RED; // ERROR

Traffic_light light = Traffic_light::YELLOW;
Traffic_light next = ++light;