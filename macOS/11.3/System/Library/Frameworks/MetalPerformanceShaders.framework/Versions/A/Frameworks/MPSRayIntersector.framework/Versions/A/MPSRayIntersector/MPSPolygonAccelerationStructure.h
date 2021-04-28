/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSRayIntersector.framework/Versions/A/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSRayIntersector/MPSAccelerationStructure.h>

@protocol MTLArgumentEncoder;
@class NSArray;

@interface MPSPolygonAccelerationStructure : MPSAccelerationStructure {

	unsigned _indexType;
	unsigned long long _polygonType;
	MPSPrimitiveBVH* _bvh;
	NSArray* _polygonBuffers;
	id<MTLArgumentEncoder> _resourceEncoder;
	MPSBufferRange* _resourceBufferRange;
	unsigned long long _vertexStride;

}

@property (assign,nonatomic) unsigned long long polygonType; 
@property (assign,nonatomic) unsigned long long vertexStride;                    //@synthesize vertexStride=_vertexStride - In the implementation block
@property (assign,nonatomic) unsigned indexType; 
@property (nonatomic,retain) id<MTLBuffer> vertexBuffer; 
@property (assign,nonatomic) unsigned long long vertexBufferOffset; 
@property (nonatomic,retain) id<MTLBuffer> indexBuffer; 
@property (assign,nonatomic) unsigned long long indexBufferOffset; 
@property (nonatomic,retain) id<MTLBuffer> maskBuffer; 
@property (assign,nonatomic) unsigned long long maskBufferOffset; 
@property (assign,nonatomic) unsigned long long polygonCount; 
@property (nonatomic,retain) NSArray * polygonBuffers;                           //@synthesize polygonBuffers=_polygonBuffers - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(id)boundingBoxBuffer;
-(unsigned long long)vertexStride;
-(unsigned long long)vertexBufferOffset;
-(unsigned long long)indexBufferOffset;
-(unsigned)indexType;
-(id)statistics;
-(void)validate;
-(MPSAxisAlignedBoundingBoxRef)boundingBox;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setIndexType:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(NSArray *)polygonBuffers;
-(void)setPolygonBuffers:(NSArray *)arg1 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)polygonCount;
-(void)setPolygonCount:(unsigned long long)arg1 ;
-(id)newResourceEncoder;
-(void)sharedInitPolygonAccelerationStructure;
-(id)initWithGroup:(id)arg1 ;
-(void)decodePolygonAccelerationStructureWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 group:(id)arg2 ;
-(void)rebuild;
-(void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 group:(id)arg2 ;
-(id)copyPolygonAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(char)useResourceBuffer;
-(void)encodeResourcesToBuffer:(id)arg1 ;
-(unsigned long long)polygonType;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(MPSBVH*)bvh;
-(MPSBufferRange*)primitiveIndexBufferRange;
-(MPSBufferRange*)innerNodeBufferRange;
-(MPSBufferRange*)leafNodeBufferRange;
-(MPSBufferRange*)pageTable0BufferRange;
-(MPSBufferRange*)pageTable1BufferRange;
-(MPSBufferRange*)pageBufferRange;
-(int)rootNodeType;
-(unsigned long long)leafNodeCount;
-(unsigned long long)innerNodeCount;
-(unsigned long long)innerNodeStride;
-(unsigned long long)branchingFactor;
-(int)nodeLayout;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(void)setVertexStride:(unsigned long long)arg1 ;
@end

