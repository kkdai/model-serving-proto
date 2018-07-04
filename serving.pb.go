// Code generated by protoc-gen-go. DO NOT EDIT.
// source: serving.proto

/*
Package serving is a generated protocol buffer package.

It is generated from these files:
	serving.proto

It has these top-level messages:
	DetectionResponse
	DetectionRequest
	Point
	Rectangle
	Region
	Shape
	Object
*/
package serving

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type DetectionResponse struct {
	Type       string       `protobuf:"bytes,1,opt,name=type" json:"type,omitempty"`
	Points     []*Point     `protobuf:"bytes,2,rep,name=points" json:"points,omitempty"`
	Objects    []*Object    `protobuf:"bytes,3,rep,name=objects" json:"objects,omitempty"`
	Rectangles []*Rectangle `protobuf:"bytes,4,rep,name=rectangles" json:"rectangles,omitempty"`
}

func (m *DetectionResponse) Reset()                    { *m = DetectionResponse{} }
func (m *DetectionResponse) String() string            { return proto.CompactTextString(m) }
func (*DetectionResponse) ProtoMessage()               {}
func (*DetectionResponse) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{0} }

func (m *DetectionResponse) GetType() string {
	if m != nil {
		return m.Type
	}
	return ""
}

func (m *DetectionResponse) GetPoints() []*Point {
	if m != nil {
		return m.Points
	}
	return nil
}

func (m *DetectionResponse) GetObjects() []*Object {
	if m != nil {
		return m.Objects
	}
	return nil
}

func (m *DetectionResponse) GetRectangles() []*Rectangle {
	if m != nil {
		return m.Rectangles
	}
	return nil
}

type DetectionRequest struct {
	Image []byte     `protobuf:"bytes,1,opt,name=image,proto3" json:"image,omitempty"`
	Rect  *Rectangle `protobuf:"bytes,2,opt,name=rect" json:"rect,omitempty"`
}

func (m *DetectionRequest) Reset()                    { *m = DetectionRequest{} }
func (m *DetectionRequest) String() string            { return proto.CompactTextString(m) }
func (*DetectionRequest) ProtoMessage()               {}
func (*DetectionRequest) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{1} }

func (m *DetectionRequest) GetImage() []byte {
	if m != nil {
		return m.Image
	}
	return nil
}

func (m *DetectionRequest) GetRect() *Rectangle {
	if m != nil {
		return m.Rect
	}
	return nil
}

type Point struct {
	X int32 `protobuf:"varint,1,opt,name=x" json:"x,omitempty"`
	Y int32 `protobuf:"varint,2,opt,name=y" json:"y,omitempty"`
}

func (m *Point) Reset()                    { *m = Point{} }
func (m *Point) String() string            { return proto.CompactTextString(m) }
func (*Point) ProtoMessage()               {}
func (*Point) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{2} }

func (m *Point) GetX() int32 {
	if m != nil {
		return m.X
	}
	return 0
}

func (m *Point) GetY() int32 {
	if m != nil {
		return m.Y
	}
	return 0
}

type Rectangle struct {
	X      int32 `protobuf:"varint,1,opt,name=x" json:"x,omitempty"`
	Y      int32 `protobuf:"varint,2,opt,name=y" json:"y,omitempty"`
	Width  int32 `protobuf:"varint,3,opt,name=width" json:"width,omitempty"`
	Height int32 `protobuf:"varint,4,opt,name=height" json:"height,omitempty"`
}

func (m *Rectangle) Reset()                    { *m = Rectangle{} }
func (m *Rectangle) String() string            { return proto.CompactTextString(m) }
func (*Rectangle) ProtoMessage()               {}
func (*Rectangle) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{3} }

func (m *Rectangle) GetX() int32 {
	if m != nil {
		return m.X
	}
	return 0
}

func (m *Rectangle) GetY() int32 {
	if m != nil {
		return m.Y
	}
	return 0
}

func (m *Rectangle) GetWidth() int32 {
	if m != nil {
		return m.Width
	}
	return 0
}

func (m *Rectangle) GetHeight() int32 {
	if m != nil {
		return m.Height
	}
	return 0
}

type Region struct {
	X      int32 `protobuf:"varint,1,opt,name=x" json:"x,omitempty"`
	Y      int32 `protobuf:"varint,2,opt,name=y" json:"y,omitempty"`
	Width  int32 `protobuf:"varint,3,opt,name=width" json:"width,omitempty"`
	Height int32 `protobuf:"varint,4,opt,name=height" json:"height,omitempty"`
}

func (m *Region) Reset()                    { *m = Region{} }
func (m *Region) String() string            { return proto.CompactTextString(m) }
func (*Region) ProtoMessage()               {}
func (*Region) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{4} }

func (m *Region) GetX() int32 {
	if m != nil {
		return m.X
	}
	return 0
}

func (m *Region) GetY() int32 {
	if m != nil {
		return m.Y
	}
	return 0
}

func (m *Region) GetWidth() int32 {
	if m != nil {
		return m.Width
	}
	return 0
}

func (m *Region) GetHeight() int32 {
	if m != nil {
		return m.Height
	}
	return 0
}

type Shape struct {
	ContentType string `protobuf:"bytes,1,opt,name=contentType" json:"contentType,omitempty"`
	// this field will be used when contentType == "polygon/points"
	Points []*Point `protobuf:"bytes,2,rep,name=points" json:"points,omitempty"`
	// this field will be used when contentType == "polygon/series"
	// [x1, y1, x2, y2, x3, y3, .... ]
	Series []int32 `protobuf:"varint,3,rep,packed,name=series" json:"series,omitempty"`
}

func (m *Shape) Reset()                    { *m = Shape{} }
func (m *Shape) String() string            { return proto.CompactTextString(m) }
func (*Shape) ProtoMessage()               {}
func (*Shape) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{5} }

func (m *Shape) GetContentType() string {
	if m != nil {
		return m.ContentType
	}
	return ""
}

func (m *Shape) GetPoints() []*Point {
	if m != nil {
		return m.Points
	}
	return nil
}

func (m *Shape) GetSeries() []int32 {
	if m != nil {
		return m.Series
	}
	return nil
}

type Object struct {
	Label string     `protobuf:"bytes,1,opt,name=label" json:"label,omitempty"`
	Box   *Rectangle `protobuf:"bytes,2,opt,name=box" json:"box,omitempty"`
	Shape *Shape     `protobuf:"bytes,3,opt,name=shape" json:"shape,omitempty"`
}

func (m *Object) Reset()                    { *m = Object{} }
func (m *Object) String() string            { return proto.CompactTextString(m) }
func (*Object) ProtoMessage()               {}
func (*Object) Descriptor() ([]byte, []int) { return fileDescriptor0, []int{6} }

func (m *Object) GetLabel() string {
	if m != nil {
		return m.Label
	}
	return ""
}

func (m *Object) GetBox() *Rectangle {
	if m != nil {
		return m.Box
	}
	return nil
}

func (m *Object) GetShape() *Shape {
	if m != nil {
		return m.Shape
	}
	return nil
}

func init() {
	proto.RegisterType((*DetectionResponse)(nil), "serving.DetectionResponse")
	proto.RegisterType((*DetectionRequest)(nil), "serving.DetectionRequest")
	proto.RegisterType((*Point)(nil), "serving.Point")
	proto.RegisterType((*Rectangle)(nil), "serving.Rectangle")
	proto.RegisterType((*Region)(nil), "serving.Region")
	proto.RegisterType((*Shape)(nil), "serving.Shape")
	proto.RegisterType((*Object)(nil), "serving.Object")
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// Client API for ShapeDetection service

type ShapeDetectionClient interface {
	Detect(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error)
}

type shapeDetectionClient struct {
	cc *grpc.ClientConn
}

func NewShapeDetectionClient(cc *grpc.ClientConn) ShapeDetectionClient {
	return &shapeDetectionClient{cc}
}

func (c *shapeDetectionClient) Detect(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error) {
	out := new(DetectionResponse)
	err := grpc.Invoke(ctx, "/serving.ShapeDetection/Detect", in, out, c.cc, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Server API for ShapeDetection service

type ShapeDetectionServer interface {
	Detect(context.Context, *DetectionRequest) (*DetectionResponse, error)
}

func RegisterShapeDetectionServer(s *grpc.Server, srv ShapeDetectionServer) {
	s.RegisterService(&_ShapeDetection_serviceDesc, srv)
}

func _ShapeDetection_Detect_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DetectionRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ShapeDetectionServer).Detect(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/serving.ShapeDetection/Detect",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ShapeDetectionServer).Detect(ctx, req.(*DetectionRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _ShapeDetection_serviceDesc = grpc.ServiceDesc{
	ServiceName: "serving.ShapeDetection",
	HandlerType: (*ShapeDetectionServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Detect",
			Handler:    _ShapeDetection_Detect_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "serving.proto",
}

// Client API for ObjectDetection service

type ObjectDetectionClient interface {
	DetectStream(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (ObjectDetection_DetectStreamClient, error)
	Detect(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error)
}

type objectDetectionClient struct {
	cc *grpc.ClientConn
}

func NewObjectDetectionClient(cc *grpc.ClientConn) ObjectDetectionClient {
	return &objectDetectionClient{cc}
}

func (c *objectDetectionClient) DetectStream(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (ObjectDetection_DetectStreamClient, error) {
	stream, err := grpc.NewClientStream(ctx, &_ObjectDetection_serviceDesc.Streams[0], c.cc, "/serving.ObjectDetection/DetectStream", opts...)
	if err != nil {
		return nil, err
	}
	x := &objectDetectionDetectStreamClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type ObjectDetection_DetectStreamClient interface {
	Recv() (*Object, error)
	grpc.ClientStream
}

type objectDetectionDetectStreamClient struct {
	grpc.ClientStream
}

func (x *objectDetectionDetectStreamClient) Recv() (*Object, error) {
	m := new(Object)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *objectDetectionClient) Detect(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error) {
	out := new(DetectionResponse)
	err := grpc.Invoke(ctx, "/serving.ObjectDetection/Detect", in, out, c.cc, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// Server API for ObjectDetection service

type ObjectDetectionServer interface {
	DetectStream(*DetectionRequest, ObjectDetection_DetectStreamServer) error
	Detect(context.Context, *DetectionRequest) (*DetectionResponse, error)
}

func RegisterObjectDetectionServer(s *grpc.Server, srv ObjectDetectionServer) {
	s.RegisterService(&_ObjectDetection_serviceDesc, srv)
}

func _ObjectDetection_DetectStream_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(DetectionRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(ObjectDetectionServer).DetectStream(m, &objectDetectionDetectStreamServer{stream})
}

type ObjectDetection_DetectStreamServer interface {
	Send(*Object) error
	grpc.ServerStream
}

type objectDetectionDetectStreamServer struct {
	grpc.ServerStream
}

func (x *objectDetectionDetectStreamServer) Send(m *Object) error {
	return x.ServerStream.SendMsg(m)
}

func _ObjectDetection_Detect_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DetectionRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ObjectDetectionServer).Detect(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/serving.ObjectDetection/Detect",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ObjectDetectionServer).Detect(ctx, req.(*DetectionRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _ObjectDetection_serviceDesc = grpc.ServiceDesc{
	ServiceName: "serving.ObjectDetection",
	HandlerType: (*ObjectDetectionServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Detect",
			Handler:    _ObjectDetection_Detect_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "DetectStream",
			Handler:       _ObjectDetection_DetectStream_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "serving.proto",
}

func init() { proto.RegisterFile("serving.proto", fileDescriptor0) }

var fileDescriptor0 = []byte{
	// 394 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xac, 0x53, 0x4d, 0x8f, 0xd3, 0x30,
	0x10, 0x5d, 0x6f, 0x3e, 0x56, 0x3b, 0x5b, 0x76, 0x61, 0x84, 0x56, 0x61, 0x4f, 0x91, 0xa9, 0xaa,
	0x72, 0xa9, 0x50, 0xb8, 0x23, 0x21, 0x71, 0xa7, 0x72, 0xe1, 0x07, 0x24, 0x61, 0x94, 0xb8, 0x6a,
	0xed, 0x10, 0x1b, 0x68, 0xff, 0x07, 0xbf, 0x83, 0xdf, 0x88, 0x62, 0xa7, 0x69, 0x54, 0x41, 0xc5,
	0xa1, 0xb7, 0xbe, 0x79, 0x6f, 0x5e, 0xdf, 0xe8, 0x39, 0xf0, 0xcc, 0x50, 0xfb, 0x43, 0xaa, 0x6a,
	0xd1, 0xb4, 0xda, 0x6a, 0xbc, 0xe9, 0x21, 0xff, 0xcd, 0xe0, 0xc5, 0x47, 0xb2, 0x54, 0x5a, 0xa9,
	0x95, 0x20, 0xd3, 0x68, 0x65, 0x08, 0x11, 0x42, 0xbb, 0x6f, 0x28, 0x61, 0x29, 0x9b, 0xdf, 0x0a,
	0xf7, 0x1b, 0x67, 0x10, 0x37, 0x5a, 0x2a, 0x6b, 0x92, 0xeb, 0x34, 0x98, 0xdf, 0x65, 0xf7, 0x8b,
	0x83, 0xe5, 0xb2, 0x1b, 0x8b, 0x9e, 0xc5, 0x37, 0x70, 0xa3, 0x8b, 0x35, 0x95, 0xd6, 0x24, 0x81,
	0x13, 0x3e, 0x0c, 0xc2, 0x4f, 0x6e, 0x2e, 0x0e, 0x3c, 0x66, 0x00, 0x2d, 0x95, 0x36, 0x57, 0xd5,
	0x86, 0x4c, 0x12, 0x3a, 0x35, 0x0e, 0x6a, 0x71, 0xa0, 0xc4, 0x48, 0xc5, 0x97, 0xf0, 0x7c, 0x94,
	0xf7, 0xdb, 0x77, 0x32, 0x16, 0x5f, 0x42, 0x24, 0xb7, 0x79, 0xe5, 0xf3, 0x4e, 0x84, 0x07, 0x38,
	0x83, 0xb0, 0xdb, 0x4b, 0xae, 0x53, 0xf6, 0x0f, 0x5f, 0xc7, 0xf3, 0xd7, 0x10, 0xb9, 0x0b, 0x70,
	0x02, 0x6c, 0xe7, 0x2c, 0x22, 0xc1, 0x76, 0x1d, 0xda, 0xbb, 0xdd, 0x48, 0xb0, 0x3d, 0xff, 0x02,
	0xb7, 0xc3, 0xde, 0x39, 0x61, 0x97, 0xe5, 0xa7, 0xfc, 0x6a, 0xeb, 0x24, 0x70, 0x13, 0x0f, 0xf0,
	0x11, 0xe2, 0x9a, 0x64, 0x55, 0xdb, 0x24, 0x74, 0xe3, 0x1e, 0x71, 0x01, 0xb1, 0xa0, 0x4a, 0x6a,
	0x75, 0x41, 0x4f, 0x09, 0xd1, 0xaa, 0xce, 0x1b, 0xc2, 0x14, 0xee, 0x4a, 0xad, 0x2c, 0x29, 0xfb,
	0xf9, 0x58, 0xe6, 0x78, 0xf4, 0xdf, 0x9d, 0x3e, 0x42, 0x6c, 0xa8, 0x95, 0xe4, 0x2b, 0x8d, 0x44,
	0x8f, 0xf8, 0x1a, 0x62, 0xdf, 0x69, 0x17, 0x71, 0x93, 0x17, 0xb4, 0xe9, 0xff, 0xc5, 0x03, 0x9c,
	0x42, 0x50, 0xe8, 0xdd, 0x99, 0x06, 0x3a, 0x1a, 0xa7, 0x10, 0x99, 0x2e, 0xb0, 0x3b, 0x6f, 0x1c,
	0xc2, 0x9d, 0x21, 0x3c, 0x99, 0xad, 0xe0, 0xde, 0xe1, 0xa1, 0x7d, 0xfc, 0x00, 0xb1, 0x07, 0xf8,
	0x6a, 0x58, 0x39, 0x7d, 0x1b, 0x4f, 0x4f, 0x7f, 0xa3, 0xfc, 0x33, 0xe7, 0x57, 0xd9, 0x2f, 0x06,
	0x0f, 0xfe, 0x82, 0xa3, 0xed, 0x7b, 0x98, 0x78, 0xb0, 0xb2, 0x2d, 0xe5, 0xdb, 0x73, 0xe6, 0xa7,
	0x4f, 0x9b, 0x5f, 0xbd, 0x65, 0x17, 0x88, 0x55, 0xc4, 0xee, 0x2b, 0x7d, 0xf7, 0x27, 0x00, 0x00,
	0xff, 0xff, 0x90, 0xcd, 0x18, 0xc5, 0xb6, 0x03, 0x00, 0x00,
}
