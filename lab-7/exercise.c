#include <stdio.h>

struct Address {
    char house_no[20];
    char road[50];
    char district[50];
    char province[50];
};

struct Person {
    char name[50];
    char id[15];
    struct Address address;
    char tel[15];
};

int main() {
    struct Person p = {
        "POOM KONGHUAYROB",
        "69011014",
        {"3 Moo 2", "Chalongkrung Rd.", "Ladkrabang", "Bangkok"},
        "088 888 8888"
    };

    printf("Full name : %s, ID : %s\n", p.name, p.id);
    printf("Address : %s, %s\n%s, %s\n\n", p.address.house_no, p.address.road, p.address.district, p.address.province);
    printf("Tel. %s\n", p.tel);

    return 0;
}