/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/Versions/A/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	[4 field1];
} SCD_Struct_DK0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned creationDate : 1;
	unsigned version : 1;
} SCD_Struct_HW2;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _compressed_pair<Vertex *, std::__1::allocator<Vertex>> {
	Vertex __value_;
} compressed_pair<Vertex *, std::__1::allocator<Vertex>>;

typedef struct vector<Vertex, std::__1::allocator<Vertex>> {
	Vertex __begin_;
	Vertex __end_;
	compressed_pair<Vertex *, std::__1::allocator<Vertex>> __end_cap_;
} vector<Vertex, std::__1::allocator<Vertex>>;

typedef struct _compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup>> {
	VertexGroup __value_;
} compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup>>;

typedef struct vector<VertexGroup, std::__1::allocator<VertexGroup>> {
	VertexGroup __begin_;
	VertexGroup __end_;
	compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup>> __end_cap_;
} vector<VertexGroup, std::__1::allocator<VertexGroup>>;

typedef struct _compressed_pair<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> {
	pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> __value_;
} compressed_pair<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>>;

typedef struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> {
	pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> __begin_;
	pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> __end_;
	compressed_pair<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> __end_cap_;
} vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>>;

typedef struct _compressed_pair<Page *, std::__1::allocator<Page>> {
	Page __value_;
} compressed_pair<Page *, std::__1::allocator<Page>>;

typedef struct vector<Page, std::__1::allocator<Page>> {
	Page __begin_;
	Page __end_;
	compressed_pair<Page *, std::__1::allocator<Page>> __end_cap_;
} vector<Page, std::__1::allocator<Page>>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned compressionAlgorithm : 1;
	unsigned decompressedLength : 1;
	unsigned strokeDataFieldCount : 1;
	unsigned strokesCount : 1;
	unsigned version : 1;
} SCD_Struct_HW15;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_DK16;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;
