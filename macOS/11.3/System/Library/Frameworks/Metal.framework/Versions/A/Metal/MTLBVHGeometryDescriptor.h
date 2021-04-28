/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface MTLBVHGeometryDescriptor : NSObject {

	unsigned long long _primitiveCount;
	id<MTLBuffer> _maskBuffer;
	unsigned long long _maskBufferOffset;

}

@property (nonatomic,readonly) unsigned long long primitiveType; 
@property (assign,nonatomic) unsigned long long primitiveCount;                //@synthesize primitiveCount=_primitiveCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> maskBuffer;                         //@synthesize maskBuffer=_maskBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long maskBufferOffset;              //@synthesize maskBufferOffset=_maskBufferOffset - In the implementation block
-(void)setPrimitiveCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)primitiveType;
-(id<MTLBuffer>)maskBuffer;
-(void)setMaskBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)maskBufferOffset;
-(void)setMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)primitiveCount;
@end

