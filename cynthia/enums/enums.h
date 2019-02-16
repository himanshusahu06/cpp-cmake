namespace cynthia { namespace enums {
    /**
     * element of `enum class` are scope bound to it's class itself
     * and elements do not bleed to upper scope
     * usage: cynthia::mathematica::Color::WHITE
     * s
     * By default, an enum class has only assignment, initialization, and comparisons (e.g., == and <) defined
     * */
    enum class Color {
        RED,
        BLUE,
        BLACK,
        WHITE
    };

    /**
     * elements of `enum` are not scope bound and bleed to upper scope
     * usage: cynthia::mathematica::WHITE
     * */
    enum Traffic_light {
        RED,
        YELLOW,
        GREEN
    };

}}