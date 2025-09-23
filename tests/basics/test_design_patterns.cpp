/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_design_patterns.cpp
 * @desc : Unit tests for design patterns in src/basics
 */

#include <cassert>
#include <iostream>
#include <string>

// Include headers and implementations (to satisfy standalone test linking)
#include "../../src/basics/adapter_pattern.h"
#include "../../src/basics/adapter_pattern.cpp"

#include "../../src/basics/bridge_pattern.h"
#include "../../src/basics/bridge_pattern.cpp"

#include "../../src/basics/builder_pattern.h"
#include "../../src/basics/builder_pattern.cpp"

#include "../../src/basics/composite_pattern.h"
#include "../../src/basics/composite_pattern.cpp"

#include "../../src/basics/chain_of_responsibility_pattern.h"
#include "../../src/basics/chain_of_responsibility_pattern.cpp"

#include "../../src/basics/command_pattern.h"
#include "../../src/basics/command_pattern.cpp"

#include "../../src/basics/decorator_pattern.h"
#include "../../src/basics/decorator_pattern.cpp"

#include "../../src/basics/facade_pattern.h"
#include "../../src/basics/facade_pattern.cpp"

#include "../../src/basics/factory_pattern.h"
#include "../../src/basics/factory_pattern.cpp"

#include "../../src/basics/flyweight_pattern.h"
#include "../../src/basics/flyweight_pattern.cpp"

#include "../../src/basics/interpreter_pattern.h"
#include "../../src/basics/interpreter_pattern.cpp"

#include "../../src/basics/iterator_pattern.h"
#include "../../src/basics/iterator_pattern.cpp"

#include "../../src/basics/mediator_pattern.h"
#include "../../src/basics/mediator_pattern.cpp"

#include "../../src/basics/memento_pattern.h"
#include "../../src/basics/memento_pattern.cpp"

#include "../../src/basics/observer_pattern.h"
#include "../../src/basics/observer_pattern.cpp"

#include "../../src/basics/prototype_pattern.h"
#include "../../src/basics/prototype_pattern.cpp"

#include "../../src/basics/proxy_pattern.h"
#include "../../src/basics/proxy_pattern.cpp"

#include "../../src/basics/singleton_pattern.h"
#include "../../src/basics/singleton_pattern.cpp"

#include "../../src/basics/strategy_pattern.h"
#include "../../src/basics/strategy_pattern.cpp"

#include "../../src/basics/template_method_pattern.h"
#include "../../src/basics/template_method_pattern.cpp"

#include "../../src/basics/state_pattern.h"
#include "../../src/basics/state_pattern.cpp"

#include "../../src/basics/visitor_pattern.h"
#include "../../src/basics/visitor_pattern.cpp"

using std::string;

void test_adapter() {
    using namespace DesignPatterns;
    AudioPlayer p;
    string r1 = p.play("mp3", "a.mp3");
    string r2 = p.play("mp4", "b.mp4");
    assert(r1.find("Playing mp3") != string::npos);
    assert(r2.find("Playing mp4") != string::npos);
}

void test_command() {
    using namespace DesignPatterns;
    Light light;
    RemoteControl rc;
    rc.setCommands(std::make_unique<LightOnCommand>(light), std::make_unique<LightOffCommand>(light));
    string on = rc.pressOn();
    string off = rc.pressOff();
    assert(on.find("ON") != string::npos);
    assert(off.find("OFF") != string::npos);
}

void test_bridge() {
    using namespace DesignPatterns;
    auto vr = std::make_shared<VectorRenderer>();
    CircleBridge c(vr, 0, 0, 1);
    string out = c.draw();
    assert(out.find("Vector:") != string::npos);
}

void test_builder() {
    using namespace DesignPatterns;
    Burger b = BurgerBuilder{}.bun("brioche").patty("beef").sauce("bbq").cheese(true).build();
    string d = b.description();
    assert(d.find("brioche") != string::npos);
    assert(d.find("cheese") != string::npos);
}

void test_composite() {
    using namespace DesignPatterns;
    auto root = std::make_shared<DirectoryComposite>("root");
    root->add(std::make_shared<FileLeaf>("a.txt", 10));
    root->add(std::make_shared<FileLeaf>("b.txt", 15));
    assert(root->size() == 25);
}

void test_facade() {
    using namespace DesignPatterns;
    ComputerFacade pc;
    string s = pc.start();
    assert(s.find("CPU") != string::npos);
}

void test_flyweight() {
    using namespace DesignPatterns;
    auto oak1 = TreeFactory::getTreeType("oak", "green");
    auto oak2 = TreeFactory::getTreeType("oak", "green");
    assert(oak1 == oak2);
    string d = oak1->draw(1,2);
    assert(d.find("oak") != string::npos);
}

void test_proxy() {
    using namespace DesignPatterns;
    ProxyImage img("x.png");
    string s = img.display();
    assert(s.find("Displaying") != string::npos);
}

void test_iterator() {
    using namespace DesignPatterns;
    NameRepository repo({"A","B"});
    auto it = repo.createIterator();
    assert(it->hasNext());
    assert(it->next() == "A");
    assert(it->hasNext());
    assert(it->next() == "B");
    assert(!it->hasNext());
}

void test_mediator() {
    using namespace DesignPatterns;
    ChatRoom room;
    ChatUser alice("Alice", room);
    ChatUser bob("Bob", room);
    room.registerUser("Alice", &alice);
    room.registerUser("Bob", &bob);
    string r = alice.send("Bob", "Hi");
    assert(r.find("Bob received from Alice") != string::npos);
}

void test_memento() {
    using namespace DesignPatterns;
    Editor editor;
    EditorHistory hist;
    editor.type("Hello");
    hist.push(editor.save());
    editor.type("World");
    assert(editor.content().find("Hello World") != string::npos);
    auto m = hist.pop();
    editor.restore(m);
    assert(editor.content() == "Hello");
}

void test_state() {
    using namespace DesignPatterns;
    Context ctx(std::make_unique<LockedState>());
    string t1 = ctx.request();
    string t2 = ctx.request();
    assert(t1.find("Locked -> Unlocked") != string::npos);
    assert(t2.find("Unlocked -> Locked") != string::npos);
}

void test_template_method() {
    using namespace DesignPatterns;
    Tea tea;
    string s = tea.prepareRecipe();
    assert(s.find("Boiling") != string::npos);
    assert(s.find("Steeping") != string::npos);
}

void test_visitor() {
    using namespace DesignPatterns;
    CircleElement c(1.0f);
    RectangleElement r(2.0f, 3.0f);
    AreaVisitor v;
    string a1 = c.accept(v);
    string a2 = r.accept(v);
    assert(a1.find("Area(Circle)") != string::npos);
    assert(a2.find("Area(Rectangle)") != string::npos);
}

void test_chain_of_responsibility() {
    using namespace DesignPatterns;
    auto info = std::make_unique<InfoLogger>();
    auto debug = std::make_unique<DebugLogger>();
    auto error = std::make_unique<ErrorLogger>();
    info->setNext(std::move(debug));
    // chain: info -> debug; error standalone
    string s1 = info->log(LogLevel::INFO, "ok");
    string s2 = info->log(LogLevel::DEBUG, "dbg");
    string s3 = error->log(LogLevel::ERROR, "bad");
    assert(s1.find("INFO:") != string::npos);
    assert(s2.find("DEBUG:") != string::npos);
    assert(s3.find("ERROR:") != string::npos);
}

void test_interpreter() {
    using namespace DesignPatterns;
    auto expr = std::make_unique<AddExpression>(
        std::make_unique<NumberExpression>(5),
        std::make_unique<SubtractExpression>(
            std::make_unique<NumberExpression>(10),
            std::make_unique<NumberExpression>(3)));
    assert(expr->interpret() == 12);
}

void test_prototype() {
    using namespace DesignPatterns;
    CircleProto c(5);
    auto c2 = c.clone();
    assert(c.draw().find("Circle") != string::npos);
    assert(c2->draw().find("Circle") != string::npos);
}

void test_decorator() {
    using namespace DesignPatterns;
    std::unique_ptr<Coffee> coffee = std::make_unique<SimpleCoffee>();
    coffee = std::make_unique<MilkDecorator>(std::move(coffee));
    coffee = std::make_unique<SugarDecorator>(std::move(coffee));
    string desc = coffee->getDescription();
    double cost = coffee->getCost();
    assert(desc.find("Milk") != string::npos);
    assert(desc.find("Sugar") != string::npos);
    assert(cost > 2.0);
}

void test_strategy() {
    using namespace DesignPatterns;
    std::vector<int> data = {3,1,2};
    Sorter sorter(std::make_unique<BubbleSort>());
    sorter.sortData(data);
    assert((data == std::vector<int>({1,2,3})));
}

void test_factory() {
    using namespace DesignPatterns;
    ConcreteShapeFactory factory;
    auto circle = factory.createShape("circle");
    assert(circle);
}

void test_observer() {
    using namespace DesignPatterns;
    auto agency = std::make_unique<NewsAgency>();
    auto ch = std::make_shared<NewsChannel>("Ch1");
    agency->attach(ch);
    agency->setNews("Hello");
    // No direct getter from channel, we just ensure no crash and subject has news
    assert(agency->getLatestNews() == "Hello");
}

void test_singleton() {
    using namespace DesignPatterns;
    auto& s1 = Singleton::getInstance();
    auto& s2 = Singleton::getInstance();
    assert(&s1 == &s2);
}

int main() {
    try {
        test_adapter();
        test_command();
        test_bridge();
        test_builder();
        test_composite();
        test_facade();
        test_flyweight();
        test_proxy();
        test_iterator();
        test_mediator();
        test_memento();
        test_state();
        test_template_method();
        test_visitor();
        test_chain_of_responsibility();
        test_interpreter();
        test_prototype();
        test_decorator();
        test_strategy();
        test_factory();
        test_observer();
        test_singleton();
        std::cout << "\n=== Basics pattern tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}


