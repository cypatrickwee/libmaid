#ifndef MAID_CONTROLLER_H
#define MAID_CONTROLLER_H
#include <google/protobuf/service.h>
#include <google/protobuf/stubs/common.h>
#include <ev.h>

#include "controller.pb.h"

namespace maid
{
namespace channel
{
class Channel;
}

namespace controller
{

class Controller : public google::protobuf::RpcController
{
public:
    Controller(struct ev_loop* loop);

    void Reset();

    bool Failed() const;

    std::string ErrorText() const;

    void StartCancel();

    void SetFailed(const std::string& reason);

    bool IsCanceled() const;

    void NotifyOnCancel(google::protobuf::Closure* callback);

    maid::proto::ControllerMeta& get_meta_data();

    void set_request(google::protobuf::Message* request);
    void set_response(google::protobuf::Message* response);
    void set_done(google::protobuf::Closure* done);

    google::protobuf::Message* get_request();
    google::protobuf::Message* get_response();
    google::protobuf::Closure* get_done();

    void set_next(Controller* next);
    Controller* get_next();

    void Destroy();
    void Ref();
private:
    static void OnGC(EV_P_ ev_check* w, int32_t revents);
    ~Controller(); // diable delete except GC;

private:
    maid::proto::ControllerMeta meta_data_;

    maid::controller::Controller* controller_;
    google::protobuf::Message* request_;
    google::protobuf::Message* response_;
    google::protobuf::Closure* done_;
    Controller* next_;

private:
    struct ev_loop* loop_;
    struct ev_check gc_;
    int32_t ref_;
    int32_t in_gc_;
};

} /* controller */

} /* maid */

#endif /*MAID_CONTROLLER_H*/
