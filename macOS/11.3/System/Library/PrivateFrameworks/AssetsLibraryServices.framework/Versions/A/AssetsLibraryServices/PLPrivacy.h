/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject, PLAssetsdPrivacySupportClient;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _authRightFullAccess;
	long long _authRightAddOnly;
	PLAssetsdPrivacySupportClient* _privacySupportClient;
	char _hasHandledLimitedLibraryReprompt;
	char _limitedLibrarySupported;

}

@property (assign) char hasHandledLimitedLibraryReprompt;                                                //@synthesize hasHandledLimitedLibraryReprompt=_hasHandledLimitedLibraryReprompt - In the implementation block
@property (assign,getter=isLimitedLibrarySupported,nonatomic) char limitedLibrarySupported;              //@synthesize limitedLibrarySupported=_limitedLibrarySupported - In the implementation block
+(id)sharedInstance;
+(char)_isLimitedLibrarySupportedInClient;
-(id)init;
-(long long)checkPhotosAccessAllowedWithScope:(long long)arg1 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 ;
-(void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
-(void)_resolvePreflightStatusForScope:(long long)arg1 ;
-(void)_setAuthStatus:(long long)arg1 scope:(long long)arg2 ;
-(long long)_authStatusForScope:(long long)arg1 ;
-(void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 promptIfUnknown:(char)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(char)arg2 synchronous:(char)arg3 resultHandler:(/*^block*/id)arg4 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(SCD_Struct_PL11)arg2 clientAuthorization:(id)arg3 ;
-(void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1 ;
-(char)hasHandledLimitedLibraryReprompt;
-(void)setHasHandledLimitedLibraryReprompt:(char)arg1 ;
-(char)isLimitedLibrarySupported;
-(void)setLimitedLibrarySupported:(char)arg1 ;
@end

