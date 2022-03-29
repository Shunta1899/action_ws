#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

using namespace std::placeholders;

#define RAD2DEG 57.295779513

class MinimalPoseOdomSubscriber : public rclcpp::Node {
public:
    MinimalPoseOdomSubscriber()
        : Node("zed_odom_pose_tutorial") {

        

        rclcpp::QoS qos(10);
        qos.keep_last(10);
        qos.best_effort();
        qos.durability_volatile();

        // Create pose subscriber
        mPoseSub = create_subscription<geometry_msgs::msg::PoseStamped>(
                    "TB1/pose", qos,
                    std::bind(&MinimalPoseOdomSubscriber::poseCallback, this, _1) );
    }

protected:
    void poseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
        // Camera position in map frame
        double tx = msg->pose.position.x;
        double ty = msg->pose.position.y;
        double tz = msg->pose.position.z;

        // Orientation quaternion
        tf2::Quaternion q(
                    msg->pose.orientation.x,
                    msg->pose.orientation.y,
                    msg->pose.orientation.z,
                    msg->pose.orientation.w);

        // 3x3 Rotation matrix from quaternion
        tf2::Matrix3x3 m(q);

        // Roll Pitch and Yaw from rotation matrix
        double roll, pitch, yaw;
        m.getRPY(roll, pitch, yaw);

        // Output the measure
        RCLCPP_INFO(get_logger(), "Received frame : X: %.2f Y: %.2f Z: %.2f",
                 tx, ty, tz);
    }


private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr mPoseSub;
};



int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalPoseOdomSubscriber>());
    rclcpp::shutdown();
    return 0;
}
