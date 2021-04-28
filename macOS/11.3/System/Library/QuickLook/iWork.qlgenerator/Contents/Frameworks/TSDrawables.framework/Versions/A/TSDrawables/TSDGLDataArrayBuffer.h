/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDGLDataBufferAccessor.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {

	NSMutableArray* _vertexAttributes;
	unsigned long long _vertexCount;
	unsigned long long _dataTypeSizeInBytes;
	unsigned _bufferUsage;
	char _usesMetalBuffer;
	long long* _needsUpdateFirstIndex;
	long long* _needsUpdateLastIndex;
	char* _gLData;
	char _dataBufferHasBeenSetup;
	unsigned* _gLDataBuffers;
	NSMutableDictionary* _attributeOffsetsDictionary;
	NSArray* _metalDataBuffers;
	unsigned long long _bufferIndex;
	unsigned long long _dataBufferEntrySize;
	unsigned long long _bufferCount;
	unsigned long long _currentBufferIndex;

}

@property (nonatomic,readonly) char hasUpdatedData; 
@property (nonatomic,readonly) unsigned long long dataBufferEntrySize;              //@synthesize dataBufferEntrySize=_dataBufferEntrySize - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferCount;                      //@synthesize bufferCount=_bufferCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentBufferIndex;                 //@synthesize currentBufferIndex=_currentBufferIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(char*)dataPointer;
-(unsigned long long)vertexCount;
-(unsigned long long)bufferCount;
-(unsigned long long)dataBufferEntrySize;
-(void)addIndexRangeNeedsUpdate:(NSRange)arg1 ;
-(void)addIndexNeedsUpdate:(long long)arg1 ;
-(void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1 ;
-(unsigned long long)currentBufferIndex;
-(void)setCurrentBufferIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3 ;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3 ;
-(void)addAllIndexesNeedUpdate;
-(void)enableArrayBufferWithDevice:(id)arg1 ;
-(void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2 ;
-(void)swapGPUDataBuffers;
-(char)hasUpdatedData;
-(void)setGLPoint2D:(SCD_Struct_TS14)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setGLPoint3D:(SCD_Struct_TS20)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setGLPoint4D:(SCD_Struct_TS21)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS20)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(SCD_Struct_TS21)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)p_setupGLDataBufferIfNecessary;
-(void)updateDataBufferIfNecessary;
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(SCD_Struct_TS14)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
-(void)disableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
@end

