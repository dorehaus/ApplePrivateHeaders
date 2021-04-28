/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SUCorePower : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _activePowerAssertions;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue;              //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activePowerAssertions;                       //@synthesize activePowerAssertions=_activePowerAssertions - In the implementation block
+(id)sharedPowerManager;
+(void)_enablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)_disablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)setPowerAssertion:(char)arg1 forIdentifierDomain:(id)arg2 ;
+(int)getPowerAssertionCountForIdentifierDomain:(id)arg1 ;
-(NSMutableDictionary *)activePowerAssertions;
-(void)setActivePowerAssertions:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
@end
