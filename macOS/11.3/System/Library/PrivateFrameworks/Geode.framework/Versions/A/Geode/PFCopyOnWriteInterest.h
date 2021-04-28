/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, PFCopyOnWriteHolder;

@interface PFCopyOnWriteInterest : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	PFCopyOnWriteHolder* _holder;
	/*^block*/id _copyOnWriteHandler;

}

@property (copy) id copyOnWriteHandler;              //@synthesize copyOnWriteHandler=_copyOnWriteHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(void)write:(/*^block*/id)arg1 ;
-(void)read:(/*^block*/id)arg1 ;
-(id)_copyObject:(id)arg1 ;
-(id)copyOnWriteHandler;
-(id)initWithHolder:(id)arg1 ;
-(id)copyWithWrite;
-(void)setCopyOnWriteHandler:(id)arg1 ;
@end

