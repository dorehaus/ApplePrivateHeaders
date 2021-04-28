/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned long long _offset;
	unsigned _dataType : 16;
	id _details;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;
	unsigned long long _argumentIndex;
	unsigned long long _render_target;
	unsigned long long _raster_order_group;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long pixelFormat;                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned long long aluType;                         //@synthesize aluType=_aluType - In the implementation block
@property (readonly) unsigned long long render_target;                   //@synthesize render_target=_render_target - In the implementation block
@property (readonly) unsigned long long raster_order_group;              //@synthesize raster_order_group=_raster_order_group - In the implementation block
-(unsigned long long)aluType;
-(unsigned long long)render_target;
-(unsigned long long)raster_order_group;
-(BOOL)isMemberLayoutThreadSafeWith:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(unsigned long long)offset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)pixelFormat;
-(unsigned long long)indirectArgumentIndex;
-(id)structType;
-(id)arrayType;
-(id)pointerType;
-(id)dataTypeDescription;
-(unsigned long long)argumentIndex;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)indirectArgumentType;
-(id)textureReferenceType;
@end

