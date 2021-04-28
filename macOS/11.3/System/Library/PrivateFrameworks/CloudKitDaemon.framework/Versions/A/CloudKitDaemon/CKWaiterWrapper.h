/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDZoneGatekeeperWaiter, OS_os_activity;
@class NSArray, NSObject, NSString;

@interface CKWaiterWrapper : NSObject {

	id<CKDZoneGatekeeperWaiter> _waiter;
	NSArray* _zoneIDs;
	NSObject*<OS_os_activity> _activity;
	/*^block*/id _completionHandler;
	NSString* _personaID;

}

@property (nonatomic,readonly) id<CKDZoneGatekeeperWaiter> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDs;                               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                            //@synthesize personaID=_personaID - In the implementation block
-(id)description;
-(id<CKDZoneGatekeeperWaiter>)waiter;
-(id)completionHandler;
-(NSObject*<OS_os_activity>)activity;
-(id)CKPropertiesDescription;
-(NSArray *)zoneIDs;
-(NSString *)personaID;
-(id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 activity:(id)arg4 ;
-(void)invokeCompletionHandler:(char)arg1 ;
@end

