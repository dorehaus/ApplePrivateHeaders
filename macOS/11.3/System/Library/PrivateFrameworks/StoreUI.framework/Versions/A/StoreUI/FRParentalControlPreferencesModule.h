/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreUI/StoreUI-Structs.h>
#import <StoreUI/FRPreferencesModule.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>

@class SFAuthorizationView, NSPopUpButton, FRManagedUser, NSString;

@interface FRParentalControlPreferencesModule : FRPreferencesModule <NSMenuDelegate> {

	SFAuthorizationView* authorizationView;
	NSPopUpButton* limitPopUpButton;
	FRManagedUser* _user;

}

@property (readonly) FRManagedUser * user;                          //@synthesize user=_user - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)currentParentalControlLimitValue;
+(long long)defaultLimitValue;
+(char)validLimitValue:(long long)arg1 ;
+(id)limitValues;
-(FRManagedUser *)user;
@end

