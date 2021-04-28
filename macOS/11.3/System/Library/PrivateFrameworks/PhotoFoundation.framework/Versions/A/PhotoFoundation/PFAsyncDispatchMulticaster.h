/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {

	PFDispatchQueue* _sendQueue;

}
+(void)initialize;
-(id)init;
-(void)resume;
-(void)suspend;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(id)_defaultDistributionQueue;
-(void)flushMessagesAndNotify:(/*^block*/id)arg1 ;
-(void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
@end

