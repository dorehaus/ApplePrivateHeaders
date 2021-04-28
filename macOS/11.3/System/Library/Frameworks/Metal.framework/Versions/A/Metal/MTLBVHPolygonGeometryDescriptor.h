/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLBVHGeometryDescriptor.h>

@protocol MTLBuffer;
@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor {

	unsigned long long _polygonType;
	id<MTLBuffer> _vertexBuffer;
	unsigned long long _vertexBufferOffset;
	unsigned long long _vertexStride;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexBufferOffset;
	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long polygonType;                     //@synthesize polygonType=_polygonType - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;                         //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long vertexBufferOffset;              //@synthesize vertexBufferOffset=_vertexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStride;                    //@synthesize vertexStride=_vertexStride - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> indexBuffer;                          //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;               //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                       //@synthesize indexType=_indexType - In the implementation block
-(void)dealloc;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)indexBuffer;
-(void)setIndexBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)vertexStride;
-(unsigned long long)vertexBufferOffset;
-(unsigned long long)indexBufferOffset;
-(unsigned long long)indexType;
-(unsigned long long)primitiveType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 ;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)polygonType;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(void)setVertexStride:(unsigned long long)arg1 ;
@end
