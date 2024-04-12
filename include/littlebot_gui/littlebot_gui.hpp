#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>

#include "littlebot_gui/littlebot_gui_node.hpp"
#include "littlebot_gui/lineedit.hpp"

class MainGUI : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainGUI(const std::shared_ptr<Ros2Node>&  ros2_node, QWidget* parent = nullptr);
    ~MainGUI() override;
private:
    void publish_button_clicked();

    const std::shared_ptr<Ros2Node> ros2_node;

    QWidget* main_widget;
    LineEdit* lineedit;
    QPushButton* publish_button;
};
