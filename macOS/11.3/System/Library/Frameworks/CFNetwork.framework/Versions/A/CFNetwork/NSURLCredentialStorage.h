/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCredentialStorageInternal, NSDictionary;

@interface NSURLCredentialStorage : NSObject {

	NSURLCredentialStorageInternal* _internal;

}

@property (assign,nonatomic) char _useSystemKeychain; 
@property (copy,readonly) NSDictionary * allCredentials; 
+(id)sharedCredentialStorage;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(char)_useSystemKeychain;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(void)set_useSystemKeychain:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(NSDictionary *)allCredentials;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
@end

