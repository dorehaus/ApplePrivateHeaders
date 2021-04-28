/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) NSMutableSet * listeners;               //@synthesize listeners=_listeners - In the implementation block
-(IDSServiceMonitor *)monitor;
-(id)initWithService:(id)arg1 ;
-(NSMutableSet *)listeners;
-(char)removeListenerID:(id)arg1 ;
-(char)hasListenerID:(id)arg1 ;
-(char)addListenerID:(id)arg1 ;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
@end

