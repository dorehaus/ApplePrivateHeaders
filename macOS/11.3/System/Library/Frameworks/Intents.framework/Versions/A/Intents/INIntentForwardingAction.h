/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INIntent;

@interface INIntentForwardingAction : NSObject <NSSecureCoding> {

	char _allowsScenelessAppLaunch;
	NSString* _appBundleIdentifier;
	INIntent* _intent;
	SCD_Struct_IN2 _hostProcessAuditToken;

}

@property (nonatomic,readonly) INIntent * intent;                                 //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                    //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IN2 hostProcessAuditToken;              //@synthesize hostProcessAuditToken=_hostProcessAuditToken - In the implementation block
@property (assign,nonatomic) char allowsScenelessAppLaunch;                       //@synthesize allowsScenelessAppLaunch=_allowsScenelessAppLaunch - In the implementation block
+(char)supportsSecureCoding;
+(Class)responseClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INIntent *)intent;
-(NSString *)appBundleIdentifier;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 appHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_IN2)hostProcessAuditToken;
-(char)allowsScenelessAppLaunch;
-(void)setAllowsScenelessAppLaunch:(char)arg1 ;
@end
