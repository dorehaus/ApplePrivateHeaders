/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDAction.h>

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

@interface HMDShortcutAction : HMDAction {

	NSData* _shortcutData;
	WFHomeWorkflow* _shortcut;
	WFHomeWorkflowController* _controller;

}

@property (readonly) WFHomeWorkflow * shortcut;                          //@synthesize shortcut=_shortcut - In the implementation block
@property (readonly) WFHomeWorkflowController * controller;              //@synthesize controller=_controller - In the implementation block
+(char)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3 ;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(WFHomeWorkflowController *)controller;
-(WFHomeWorkflow *)shortcut;
-(Class)modelClass;
-(char)requiresDeviceUnlock;
-(char)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3 ;
-(id)stateDump;
-(unsigned long long)entitlementsForNotification;
-(id)removeShortcut;
-(void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)associatedAccessories;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
@end

