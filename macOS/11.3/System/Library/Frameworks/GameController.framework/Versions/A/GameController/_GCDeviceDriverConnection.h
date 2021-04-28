/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCDeviceDriverConnection
@property (getter=isInvalid,nonatomic,readonly) char invalid; 
@required
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1;
-(char)isInvalid;
-(id)addInvalidationHandler:(/*^block*/id)arg1;
-(id)addInterruptionHandler:(/*^block*/id)arg1;
-(void)connectToDeviceService:(id)arg1 withClient:(id)arg2 reply:(/*^block*/id)arg3;

@end

