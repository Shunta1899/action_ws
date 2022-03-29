// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from action_tutorials_interfaces:action/NavigateToPose.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Goal __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_Goal_
{
  using Type = NavigateToPose_Goal_<ContainerAllocator>;

  explicit NavigateToPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  explicit NavigateToPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    behavior_tree(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_tree = "";
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _behavior_tree_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _behavior_tree_type behavior_tree;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__behavior_tree(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->behavior_tree = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Goal
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Goal
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_Goal_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->behavior_tree != other.behavior_tree) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_Goal_

// alias to use template instance with default allocator
using NavigateToPose_Goal =
  action_tutorials_interfaces::action::NavigateToPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Result __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_Result_
{
  using Type = NavigateToPose_Result_<ContainerAllocator>;

  explicit NavigateToPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit NavigateToPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Result
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Result
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_Result_

// alias to use template instance with default allocator
using NavigateToPose_Result =
  action_tutorials_interfaces::action::NavigateToPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'current_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'navigation_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Feedback __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_Feedback_
{
  using Type = NavigateToPose_Feedback_<ContainerAllocator>;

  explicit NavigateToPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    navigation_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
    }
  }

  explicit NavigateToPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    navigation_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_recoveries = 0;
      this->distance_remaining = 0.0f;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _navigation_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _navigation_time_type navigation_time;
  using _number_of_recoveries_type =
    int16_t;
  _number_of_recoveries_type number_of_recoveries;
  using _distance_remaining_type =
    float;
  _distance_remaining_type distance_remaining;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__navigation_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->navigation_time = _arg;
    return *this;
  }
  Type & set__number_of_recoveries(
    const int16_t & _arg)
  {
    this->number_of_recoveries = _arg;
    return *this;
  }
  Type & set__distance_remaining(
    const float & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Feedback
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_Feedback
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_Feedback_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->navigation_time != other.navigation_time) {
      return false;
    }
    if (this->number_of_recoveries != other.number_of_recoveries) {
      return false;
    }
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_Feedback_

// alias to use template instance with default allocator
using NavigateToPose_Feedback =
  action_tutorials_interfaces::action::NavigateToPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/navigate_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Request __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_SendGoal_Request_
{
  using Type = NavigateToPose_SendGoal_Request_<ContainerAllocator>;

  explicit NavigateToPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit NavigateToPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const action_tutorials_interfaces::action::NavigateToPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Request
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Request
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_SendGoal_Request_

// alias to use template instance with default allocator
using NavigateToPose_SendGoal_Request =
  action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Response __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_SendGoal_Response_
{
  using Type = NavigateToPose_SendGoal_Response_<ContainerAllocator>;

  explicit NavigateToPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit NavigateToPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Response
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_SendGoal_Response
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_SendGoal_Response_

// alias to use template instance with default allocator
using NavigateToPose_SendGoal_Response =
  action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace action_tutorials_interfaces
{

namespace action
{

struct NavigateToPose_SendGoal
{
  using Request = action_tutorials_interfaces::action::NavigateToPose_SendGoal_Request;
  using Response = action_tutorials_interfaces::action::NavigateToPose_SendGoal_Response;
};

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Request __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_GetResult_Request_
{
  using Type = NavigateToPose_GetResult_Request_<ContainerAllocator>;

  explicit NavigateToPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit NavigateToPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Request
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Request
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_GetResult_Request_

// alias to use template instance with default allocator
using NavigateToPose_GetResult_Request =
  action_tutorials_interfaces::action::NavigateToPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/navigate_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Response __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_GetResult_Response_
{
  using Type = NavigateToPose_GetResult_Response_<ContainerAllocator>;

  explicit NavigateToPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigateToPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const action_tutorials_interfaces::action::NavigateToPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Response
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_GetResult_Response
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_GetResult_Response_

// alias to use template instance with default allocator
using NavigateToPose_GetResult_Response =
  action_tutorials_interfaces::action::NavigateToPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces

namespace action_tutorials_interfaces
{

namespace action
{

struct NavigateToPose_GetResult
{
  using Request = action_tutorials_interfaces::action::NavigateToPose_GetResult_Request;
  using Response = action_tutorials_interfaces::action::NavigateToPose_GetResult_Response;
};

}  // namespace action

}  // namespace action_tutorials_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/navigate_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_FeedbackMessage __declspec(deprecated)
#endif

namespace action_tutorials_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct NavigateToPose_FeedbackMessage_
{
  using Type = NavigateToPose_FeedbackMessage_<ContainerAllocator>;

  explicit NavigateToPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit NavigateToPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const action_tutorials_interfaces::action::NavigateToPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_FeedbackMessage
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__action_tutorials_interfaces__action__NavigateToPose_FeedbackMessage
    std::shared_ptr<action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToPose_FeedbackMessage_

// alias to use template instance with default allocator
using NavigateToPose_FeedbackMessage =
  action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace action_tutorials_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace action_tutorials_interfaces
{

namespace action
{

struct NavigateToPose
{
  /// The goal message defined in the action definition.
  using Goal = action_tutorials_interfaces::action::NavigateToPose_Goal;
  /// The result message defined in the action definition.
  using Result = action_tutorials_interfaces::action::NavigateToPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = action_tutorials_interfaces::action::NavigateToPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = action_tutorials_interfaces::action::NavigateToPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = action_tutorials_interfaces::action::NavigateToPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = action_tutorials_interfaces::action::NavigateToPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct NavigateToPose NavigateToPose;

}  // namespace action

}  // namespace action_tutorials_interfaces

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_POSE__STRUCT_HPP_
