/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSDGLDataArrayBuffer, TSDGPUDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject {

	char _isNormalized;
	unsigned _bufferUsage;
	int _componentCount;
	int _locationInShader;
	NSString* _name;
	long long _dataType;
	unsigned long long _bufferOffset;
	TSDGLDataArrayBuffer* _dataArrayBuffer;
	TSDGPUDataBuffer* _dataBuffer;

}

@property (assign,nonatomic) int locationInShader;                                //@synthesize locationInShader=_locationInShader - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;                     //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) TSDGLDataArrayBuffer * dataArrayBuffer;              //@synthesize dataArrayBuffer=_dataArrayBuffer - In the implementation block
@property (assign,nonatomic) TSDGPUDataBuffer * dataBuffer;                       //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned bufferUsage;                              //@synthesize bufferUsage=_bufferUsage - In the implementation block
@property (nonatomic,readonly) long long dataType;                                //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) int componentCount;                                //@synthesize componentCount=_componentCount - In the implementation block
@property (nonatomic,readonly) char isNormalized;                                 //@synthesize isNormalized=_isNormalized - In the implementation block
+(id)attributeWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(char)arg4 componentCount:(unsigned long long)arg5 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)dataType;
-(unsigned long long)bufferOffset;
-(TSDGPUDataBuffer *)dataBuffer;
-(int)componentCount;
-(id)initWithName:(id)arg1 bufferUsage:(unsigned)arg2 dataType:(long long)arg3 normalized:(char)arg4 componentCount:(unsigned long long)arg5 ;
-(unsigned)bufferUsage;
-(char)isNormalized;
-(void)setBufferUsage:(unsigned)arg1 ;
-(void)setComponentCount:(int)arg1 ;
-(int)locationInShader;
-(void)setLocationInShader:(int)arg1 ;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(TSDGLDataArrayBuffer *)dataArrayBuffer;
-(void)setDataArrayBuffer:(TSDGLDataArrayBuffer *)arg1 ;
-(void)setDataBuffer:(TSDGPUDataBuffer *)arg1 ;
@end

