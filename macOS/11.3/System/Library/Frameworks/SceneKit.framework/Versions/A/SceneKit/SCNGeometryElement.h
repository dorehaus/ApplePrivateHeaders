/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLBuffer;
@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding> {

	_C3DMeshElement* _meshElement;
	NSData* _elementData;
	long long _primitiveType;
	long long _primitiveCount;
	NSRange _primitiveRange;
	long long _indicesChannelCount;
	char _interleavedIndicesChannels;
	long long _bytesPerIndex;
	float _pointSize;
	float _minimumPointScreenSpaceRadius;
	float _maximumPointScreenSpaceRadius;
	id<MTLBuffer> _mtlBuffer;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) long long primitiveType; 
@property (nonatomic,readonly) long long primitiveCount; 
@property (assign,nonatomic) NSRange primitiveRange; 
@property (nonatomic,readonly) long long bytesPerIndex; 
@property (assign,nonatomic) double pointSize; 
@property (assign,nonatomic) double minimumPointScreenSpaceRadius; 
@property (assign,nonatomic) double maximumPointScreenSpaceRadius; 
+(char)supportsSecureCoding;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)geometryElementWithMDLSubmesh:(id)arg1 ;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(char)arg5 bytesPerIndex:(long long)arg6 ;
+(id)geometryElementWithMeshElementRef:(_C3DMeshElement*)arg1 ;
+(id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(char)arg5 bytesPerIndex:(long long)arg6 ;
+(id)geometryElementWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(double)pointSize;
-(long long)primitiveType;
-(unsigned long long)indexCount;
-(id)scene;
-(C3DSceneRef)sceneRef;
-(const void*)__CFObject;
-(_C3DMeshElement*)meshElement;
-(id)initWithMeshElement:(_C3DMeshElement*)arg1 ;
-(long long)primitiveCount;
-(long long)bytesPerIndex;
-(long long)indicesChannelCount;
-(char)hasInterleavedIndicesChannels;
-(void)setPrimitiveRange:(NSRange)arg1 ;
-(NSRange)primitiveRange;
-(double)minimumPointScreenSpaceRadius;
-(void)setMinimumPointScreenSpaceRadius:(double)arg1 ;
-(double)maximumPointScreenSpaceRadius;
-(void)setMaximumPointScreenSpaceRadius:(double)arg1 ;
-(void)_printData;
-(id)initWithBuffer:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(char)arg5 bytesPerIndex:(long long)arg6 ;
-(id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(char)arg5 bytesPerIndex:(long long)arg6 ;
-(void)_optimizeTriangleIndices;
-(double)_computeACMR;
@end

