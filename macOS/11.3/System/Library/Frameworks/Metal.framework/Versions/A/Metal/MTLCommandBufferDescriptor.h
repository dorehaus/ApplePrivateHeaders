/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandBufferDescriptor : NSObject <NSCopying> {

	char _retainedReferences;
	unsigned long long _errorOptions;

}

@property (assign,nonatomic) char retainedReferences;                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (assign,nonatomic) unsigned long long errorOptions;              //@synthesize errorOptions=_errorOptions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)retainedReferences;
-(unsigned long long)errorOptions;
-(void)setRetainedReferences:(char)arg1 ;
-(void)setErrorOptions:(unsigned long long)arg1 ;
@end

