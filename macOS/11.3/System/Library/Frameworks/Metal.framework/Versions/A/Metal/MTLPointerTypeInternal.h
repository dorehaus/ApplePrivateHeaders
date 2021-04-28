/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLPointerType.h>

@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {

	unsigned long long _dataType;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	unsigned long long _access;
	unsigned long long _alignment;
	unsigned long long _dataSize;
	char _elementIsArgumentBuffer;
	char _isConstantBuffer;
	char _doRetain;

}
-(char)isConstantBuffer;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(char)arg6 isConstantBuffer:(char)arg7 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(char)arg6 isConstantBuffer:(char)arg7 doRetain:(char)arg8 ;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)alignment;
-(unsigned long long)access;
-(unsigned long long)elementType;
-(id)elementStructType;
-(id)elementArrayType;
-(id)structType;
-(char)elementIsArgumentBuffer;
-(char)elementIsIndirectArgumentBuffer;
-(id)elementTypeDescription;
-(unsigned long long)dataSize;
@end

