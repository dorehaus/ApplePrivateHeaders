/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/UserNotificationPolicyData.h>

@class NSString, NSArray;

@interface RemoteNotificationPolicyData : UserNotificationPolicyData {

	NSString* _websiteIdentifier;
	NSString* _deviceToken;
	NSArray* _allowedDomains;

}

@property (nonatomic,readonly) NSString * websiteIdentifier;              //@synthesize websiteIdentifier=_websiteIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceToken;                    //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,readonly) NSArray * allowedDomains;                  //@synthesize allowedDomains=_allowedDomains - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithWebsiteIdentifier:(id)arg1 displayName:(id)arg2 icon:(id)arg3 policy:(int)arg4 deviceToken:(id)arg5 allowedDomains:(id)arg6 ;
-(NSArray *)allowedDomains;
-(void)updatePermission:(int)arg1 ;
-(NSString *)websiteIdentifier;
-(NSString *)deviceToken;
@end
