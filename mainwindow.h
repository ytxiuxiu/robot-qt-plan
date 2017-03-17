#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <boost/shared_ptr.hpp>
#include <rl/kin/Kinematics.h>
#include <rl/mdl/Dynamic.h>
#include <rl/plan/DistanceModel.h>
#include <rl/plan/Optimizer.h>
#include <rl/plan/Planner.h>
#include <rl/plan/Sampler.h>
#include <rl/plan/Verifier.h>
#include <rl/plan/WorkspaceSphereExplorer.h>
#include <rl/sg/Model.h>
#include <rl/sg/so/Model.h>
#include <rl/sg/Scene.h>
#include <rl/sg/so/Scene.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    boost::shared_ptr< rl::math::Vector > goal;

    boost::shared_ptr< rl::kin::Kinematics > kin;

    boost::shared_ptr< rl::plan::DistanceModel > model;

    boost::shared_ptr< rl::plan::Planner > planner;

    boost::shared_ptr< rl::plan::Sampler > sampler;

    boost::shared_ptr< rl::sg::Scene > scene;

    rl::sg::Model* sceneModel;

    boost::shared_ptr< rl::math::Vector > start;

    boost::shared_ptr< rl::plan::Verifier > verifier;
};

#endif // MAINWINDOW_H
