/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIRTTUtilities.h>

@class RTTTelephonyUtilities, NSString;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {

	RTTTelephonyUtilities* _utilityProvider;

}

@property (nonatomic,retain) RTTTelephonyUtilities * utilityProvider;              //@synthesize utilityProvider=_utilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithUtilityProvider:(id)arg1 ;
-(id)nts_lazyUtilityProvider;
-(RTTTelephonyUtilities *)utilityProvider;
-(char)contactIsTTYContact:(id)arg1 ;
-(char)relayIsSupported;
-(void)setUtilityProvider:(RTTTelephonyUtilities *)arg1 ;
@end

