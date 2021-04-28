/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKFollowUpItemFactory.h>

@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory> {

	NSString* _extensionIdentifier;
	NSString* _representingBundlePath;
	NSString* _bundleIconName;

}

@property (nonatomic,copy) NSString * extensionIdentifier;                 //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * representingBundlePath;              //@synthesize representingBundlePath=_representingBundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIconName;                      //@synthesize bundleIconName=_bundleIconName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2 ;
-(id)_actionsFromPayload:(id)arg1 ;
-(id)_notificationFromPayload:(id)arg1 ;
-(id)_actionFromInfo:(id)arg1 ;
-(id)actionWithTitle:(id)arg1 andActionKey:(id)arg2 ;
-(NSString *)representingBundlePath;
-(void)setRepresentingBundlePath:(NSString *)arg1 ;
-(NSString *)bundleIconName;
-(void)setBundleIconName:(NSString *)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(id)_clearAction;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2 ;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1 ;
-(char)IsFollowUpItemNotificationForced:(id)arg1 ;
@end
