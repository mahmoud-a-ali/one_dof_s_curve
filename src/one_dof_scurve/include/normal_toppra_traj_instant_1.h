
    //#include <ros.h>
    #include <trajectory_msgs/JointTrajectory.h>
    #include <trajectory_msgs/JointTrajectoryPoint.h>
    //this script writes cpp file to instantiate JointTrajectory msg from yaml file"
    
trajectory_msgs::JointTrajectory generate_traj( ) 
 {
trajectory_msgs::JointTrajectory traj; 
   traj.joint_names.push_back("joint_1");
   traj.joint_names.push_back("joint_2");
   traj.joint_names.push_back("joint_3");
   traj.joint_names.push_back("joint_4");
   traj.joint_names.push_back("joint_5");
   traj.joint_names.push_back("joint_6");

        trajectory_msgs::JointTrajectoryPoint pt;  
        // copy info from Python pt to cpp pt
        
pt.positions = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
pt.velocities = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
pt.accelerations = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
pt.time_from_start = ros::Duration( 0 );
traj.points.push_back(pt);
pt.positions = {-9.035274107009172e-06, 7.66020989459422e-06, 8.133833482861516e-06, -2.1779174088603923e-06, -0.1748052395191716, 1.0893783997744316e-06};
pt.velocities = {-9.035274107009172e-06, 7.66020989459422e-06, 8.133833482861516e-06, -2.1779174088603923e-06, -0.1748052395191716, 1.0893783997744316e-06};
pt.accelerations = {-9.035274107009172e-06, 7.66020989459422e-06, 8.133833482861516e-06, -2.1779174088603923e-06, -0.1748052395191716, 1.0893783997744316e-06};
pt.time_from_start = ros::Duration( 239010518 );
traj.points.push_back(pt);
pt.positions = {-1.8070548214018348e-05, 1.5320419789188442e-05, 1.626766696572304e-05, -4.3558348177207855e-06, -0.34961047903834325, 2.1787567995488637e-06};
pt.velocities = {-1.8070548214018348e-05, 1.5320419789188442e-05, 1.626766696572304e-05, -4.3558348177207855e-06, -0.34961047903834325, 2.1787567995488637e-06};
pt.accelerations = {-1.8070548214018348e-05, 1.5320419789188442e-05, 1.626766696572304e-05, -4.3558348177207855e-06, -0.34961047903834325, 2.1787567995488637e-06};
pt.time_from_start = ros::Duration( 338011917 );
traj.points.push_back(pt);
pt.positions = {-2.7105822321027517e-05, 2.2980629683782655e-05, 2.440150044858455e-05, -6.533752226581176e-06, -0.5244157185575147, 3.2681351993232947e-06};
pt.velocities = {-2.7105822321027517e-05, 2.2980629683782655e-05, 2.440150044858455e-05, -6.533752226581176e-06, -0.5244157185575147, 3.2681351993232947e-06};
pt.accelerations = {-2.7105822321027517e-05, 2.2980629683782655e-05, 2.440150044858455e-05, -6.533752226581176e-06, -0.5244157185575147, 3.2681351993232947e-06};
pt.time_from_start = ros::Duration( 413978362 );
traj.points.push_back(pt);
pt.positions = {-3.614109642803669e-05, 3.064083957837688e-05, 3.253533393144607e-05, -8.71166963544157e-06, -0.6992209580766863, 4.3575135990977265e-06};
pt.velocities = {-3.614109642803669e-05, 3.064083957837688e-05, 3.253533393144607e-05, -8.71166963544157e-06, -0.6992209580766863, 4.3575135990977265e-06};
pt.accelerations = {-3.614109642803669e-05, 3.064083957837688e-05, 3.253533393144607e-05, -8.71166963544157e-06, -0.6992209580766863, 4.3575135990977265e-06};
pt.time_from_start = ros::Duration( 478021037 );
traj.points.push_back(pt);
pt.positions = {-4.517637053504587e-05, 3.83010494729711e-05, 4.066916741430759e-05, -1.0889587044301962e-05, -0.8740261975958581, 5.44689199887216e-06};
pt.velocities = {-4.517637053504587e-05, 3.83010494729711e-05, 4.066916741430759e-05, -1.0889587044301962e-05, -0.8740261975958581, 5.44689199887216e-06};
pt.accelerations = {-4.517637053504587e-05, 3.83010494729711e-05, 4.066916741430759e-05, -1.0889587044301962e-05, -0.8740261975958581, 5.44689199887216e-06};
pt.time_from_start = ros::Duration( 536027776 );
traj.points.push_back(pt);
pt.positions = {-5.4211644642055035e-05, 4.596125936756531e-05, 4.88030008971691e-05, -1.306750445316235e-05, -1.0488314371150294, 6.53627039864659e-06};
pt.velocities = {-5.4211644642055035e-05, 4.596125936756531e-05, 4.88030008971691e-05, -1.306750445316235e-05, -1.0488314371150294, 6.53627039864659e-06};
pt.accelerations = {-5.4211644642055035e-05, 4.596125936756531e-05, 4.88030008971691e-05, -1.306750445316235e-05, -1.0488314371150294, 6.53627039864659e-06};
pt.time_from_start = ros::Duration( 600070448 );
traj.points.push_back(pt);
pt.positions = {-6.324691874906422e-05, 5.362146926215954e-05, 5.693683438003063e-05, -1.5245421862022746e-05, -1.223636676634201, 7.625648798421022e-06};
pt.velocities = {-6.324691874906422e-05, 5.362146926215954e-05, 5.693683438003063e-05, -1.5245421862022746e-05, -1.223636676634201, 7.625648798421022e-06};
pt.accelerations = {-6.324691874906422e-05, 5.362146926215954e-05, 5.693683438003063e-05, -1.5245421862022746e-05, -1.223636676634201, 7.625648798421022e-06};
pt.time_from_start = ros::Duration( 676036888 );
traj.points.push_back(pt);
pt.positions = {-7.228219285607339e-05, 6.128167915675377e-05, 6.507066786289215e-05, -1.742333927088314e-05, -1.3984419161533728, 8.715027198195455e-06};
pt.velocities = {-7.228219285607339e-05, 6.128167915675377e-05, 6.507066786289215e-05, -1.742333927088314e-05, -1.3984419161533728, 8.715027198195455e-06};
pt.accelerations = {-7.228219285607339e-05, 6.128167915675377e-05, 6.507066786289215e-05, -1.742333927088314e-05, -1.3984419161533728, 8.715027198195455e-06};
pt.time_from_start = ros::Duration( 775038281 );
traj.points.push_back(pt);
pt.positions = {-8.131746696308258e-05, 6.894188905134799e-05, 7.320450134575366e-05, -1.960125667974353e-05, -1.5732471556725443, 9.804405597969886e-06};
pt.velocities = {-8.131746696308258e-05, 6.894188905134799e-05, 7.320450134575366e-05, -1.960125667974353e-05, -1.5732471556725443, 9.804405597969886e-06};
pt.accelerations = {-8.131746696308258e-05, 6.894188905134799e-05, 7.320450134575366e-05, -1.960125667974353e-05, -1.5732471556725443, 9.804405597969886e-06};
pt.time_from_start = ros::Duration( 1014048792 );
traj.points.push_back(pt);

          return traj;
        }
        