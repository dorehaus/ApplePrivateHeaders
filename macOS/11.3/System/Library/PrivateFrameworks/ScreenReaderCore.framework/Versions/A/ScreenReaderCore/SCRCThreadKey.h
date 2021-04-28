/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {

	unsigned long long _threadID;
	NSString* _threadDescription;

}

@property (nonatomic,readonly) unsigned long long threadID; 
@property (nonatomic,readonly) NSString * threadDescription; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithObject:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(unsigned long long)threadID;
-(NSString *)threadDescription;
-(id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2 ;
-(id)_allCurrentThreadIDs;
@end

