/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2LoggingObject.h>

@protocol NSLocking;
@class NSString;

@interface HAP2Lock : HAP2LoggingObject {

	AQ _lockCount;
	id<NSLocking> _internalLock;

}

@property (nonatomic,readonly) id<NSLocking> internalLock;              //@synthesize internalLock=_internalLock - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)new;
+(id)lockWithName:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id<NSLocking>)internalLock;
-(void)assertOwner;
-(id)initWithLock:(id)arg1 name:(id)arg2 ;
-(void)_performBlock:(/*^block*/id)arg1 allowRecursive:(char)arg2 ;
@end
