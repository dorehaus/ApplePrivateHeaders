/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {

	NSString* _serviceClassName;
	char _singleton;
	char _main;
	unsigned _serviceClass;
	int _relativePriority;

}

@property (nonatomic,readonly) unsigned serviceClass;              //@synthesize serviceClass=_serviceClass - In the implementation block
@property (nonatomic,readonly) int relativePriority;               //@synthesize relativePriority=_relativePriority - In the implementation block
+(id)main;
+(id)utility;
+(id)serviceWithClass:(unsigned)arg1 ;
+(id)userInitiated;
+(id)userInteractive;
+(id)background;
+(id)serviceWithClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned)serviceClass;
-(int)relativePriority;
@end
