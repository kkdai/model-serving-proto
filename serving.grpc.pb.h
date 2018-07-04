// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: serving.proto
// Original file comments:
// vim:sw=2:ts=2:sts=2:
#ifndef GRPC_serving_2eproto__INCLUDED
#define GRPC_serving_2eproto__INCLUDED

#include "serving.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace serving {

class ShapeDetection final {
 public:
  static constexpr char const* service_full_name() {
    return "serving.ShapeDetection";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Detect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::serving::DetectionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Detect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::serving::DetectionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Detect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Detect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDetect(::grpc::ServerContext* context, ::serving::DetectionRequest* request, ::grpc::ServerAsyncResponseWriter< ::serving::DetectionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Detect<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Detect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Detect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::serving::DetectionRequest, ::serving::DetectionResponse>(std::bind(&WithStreamedUnaryMethod_Detect<BaseClass>::StreamedDetect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDetect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::serving::DetectionRequest,::serving::DetectionResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Detect<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Detect<Service > StreamedService;
};

class ObjectDetection final {
 public:
  static constexpr char const* service_full_name() {
    return "serving.ObjectDetection";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::serving::Object>> DetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::serving::Object>>(DetectStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::serving::Object>> AsyncDetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::serving::Object>>(AsyncDetectStreamRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::serving::Object>> PrepareAsyncDetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::serving::Object>>(PrepareAsyncDetectStreamRaw(context, request, cq));
    }
    virtual ::grpc::Status Detect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::serving::DetectionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientReaderInterface< ::serving::Object>* DetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::serving::Object>* AsyncDetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::serving::Object>* PrepareAsyncDetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::serving::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::serving::Object>> DetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::serving::Object>>(DetectStreamRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::serving::Object>> AsyncDetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::serving::Object>>(AsyncDetectStreamRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::serving::Object>> PrepareAsyncDetectStream(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::serving::Object>>(PrepareAsyncDetectStreamRaw(context, request, cq));
    }
    ::grpc::Status Detect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::serving::DetectionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReader< ::serving::Object>* DetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request) override;
    ::grpc::ClientAsyncReader< ::serving::Object>* AsyncDetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::serving::Object>* PrepareAsyncDetectStreamRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::serving::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::serving::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_DetectStream_;
    const ::grpc::internal::RpcMethod rpcmethod_Detect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status DetectStream(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::grpc::ServerWriter< ::serving::Object>* writer);
    virtual ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_DetectStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DetectStream() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_DetectStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DetectStream(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::grpc::ServerWriter< ::serving::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDetectStream(::grpc::ServerContext* context, ::serving::DetectionRequest* request, ::grpc::ServerAsyncWriter< ::serving::Object>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Detect() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDetect(::grpc::ServerContext* context, ::serving::DetectionRequest* request, ::grpc::ServerAsyncResponseWriter< ::serving::DetectionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_DetectStream<WithAsyncMethod_Detect<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_DetectStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DetectStream() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_DetectStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DetectStream(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::grpc::ServerWriter< ::serving::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Detect() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Detect() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::serving::DetectionRequest, ::serving::DetectionResponse>(std::bind(&WithStreamedUnaryMethod_Detect<BaseClass>::StreamedDetect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::serving::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDetect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::serving::DetectionRequest,::serving::DetectionResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Detect<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_DetectStream : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_DetectStream() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::serving::DetectionRequest, ::serving::Object>(std::bind(&WithSplitStreamingMethod_DetectStream<BaseClass>::StreamedDetectStream, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_DetectStream() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DetectStream(::grpc::ServerContext* context, const ::serving::DetectionRequest* request, ::grpc::ServerWriter< ::serving::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedDetectStream(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::serving::DetectionRequest,::serving::Object>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_DetectStream<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_DetectStream<WithStreamedUnaryMethod_Detect<Service > > StreamedService;
};

}  // namespace serving


#endif  // GRPC_serving_2eproto__INCLUDED
