/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/Versions/A/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding> {

	char _enabled;
	char _supportsIncrementalUpdates;
	NSString* _localizedDisplayName;
	id _credentialIdentityStoreIdentifier;

}

@property (getter=isEnabled,nonatomic,readonly) char enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) char supportsIncrementalUpdates;                        //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                   //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) id credentialIdentityStoreIdentifier;              //@synthesize credentialIdentityStoreIdentifier=_credentialIdentityStoreIdentifier - In the implementation block
+(char)supportsSecureCoding;
+(id)credentialProviderExtensionWithDisabledState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEnabled;
-(NSString *)localizedDisplayName;
-(id)initWithEnabledState:(char)arg1 supportsIncrementalUpdates:(char)arg2 ;
-(id)initWithEnabledState:(char)arg1 supportsIncrementalUpdates:(char)arg2 localizedDisplayName:(id)arg3 credentialIdentityStoreIdentifier:(id)arg4 ;
-(char)supportsIncrementalUpdates;
-(id)credentialIdentityStoreIdentifier;
@end

