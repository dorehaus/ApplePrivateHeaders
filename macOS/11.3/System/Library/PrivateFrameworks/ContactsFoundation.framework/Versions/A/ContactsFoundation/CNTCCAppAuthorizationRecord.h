/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNTCCAppAuthorizationRecord : NSObject {

	NSString* _bundleIdentifier;
	NSString* _localizedName;
	long long _recordType;
	long long _authorizationStatus;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) long long recordType;                     //@synthesize recordType=_recordType - In the implementation block
@property (assign) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(long long)authorizationStatusFromAuthorizationRight:(unsigned long long)arg1 ;
+(unsigned long long)authorizationRightFromAuthorizationStatus:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(long long)recordType;
-(long long)authorizationStatus;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2 recordType:(long long)arg3 authorizationStatus:(long long)arg4 ;
-(id)initWithTCCAuthorizationRecord:(id)arg1 ;
@end

