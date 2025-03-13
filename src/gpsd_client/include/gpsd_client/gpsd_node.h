#ifndef BUILD_GPSD_NODE_H
#define BUILD_GPSD_NODE_H

#include "rclcpp/rclcpp.hpp"
#include <memory>
#include "gpsd_client/msg/gps_fix.hpp"
#include <libgpsmm.h>
#include <cmath>

using namespace std::chrono_literals;
using namespace std;

class GpsdNode : public rclcpp::Node {
public:
    GpsdNode();

    ~GpsdNode();

private:
    /// Variables
    gpsmm *gps_ = nullptr;
    string frame_id_ = "gps";
    bool last_msg_no_fix_ = false;
    bool publish_when_no_fix_ = true;

    /// Rclcpp
    rclcpp::TimerBase::SharedPtr timer_;
    std::chrono::milliseconds loop_dt_ = 100ms; // loop dt

    /// Topics / Services
    rclcpp::Publisher<gpsd_client::msg::GpsFix>::SharedPtr publisher_fix_;

    /**
     *  Init and get parameters of the Node
     */
    void init_parameters();

    /**
     * Init topics to this node (publishers & subscribers)
     */
    void init_interfaces();

    /**
     * Process the data recevied from gpsd to send a ros message
     * @param p
     */
    void process_data(struct gps_data_t* p);

    /**
     * Callback of the timer
     */
    void timer_callback();
};

#endif //BUILD_GPSD_NODE_H
