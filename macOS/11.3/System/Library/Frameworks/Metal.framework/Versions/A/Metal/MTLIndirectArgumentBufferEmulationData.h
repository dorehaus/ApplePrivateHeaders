/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLIndirectArgumentBufferEmulationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	char* _bufferIndices;
	char* _textureIndices;
	char* _samplerIndices;
	const void* _dataPtr;
	unsigned long long _dataSize;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)bindIndirectArgumentsWithFunctions:(SCD_Struct_MT18)arg1 ;
@end

