/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NUGLVertexAttribute : NSObject {

	char _normalized;
	unsigned _type;
	int _size;
	NSString* _name;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) int size;                               //@synthesize size=_size - In the implementation block
@property (readonly) long long sizeInBytes; 
@property (nonatomic,readonly) char normalized;              //@synthesize normalized=_normalized - In the implementation block
+(id)vec2Attribute:(id)arg1 ;
+(id)vec4Attribute:(id)arg1 ;
-(int)size;
-(id)init;
-(NSString *)name;
-(unsigned)type;
-(long long)sizeInBytes;
-(char)normalized;
-(long long)_typeSize;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 size:(int)arg3 normalized:(char)arg4 ;
@end

