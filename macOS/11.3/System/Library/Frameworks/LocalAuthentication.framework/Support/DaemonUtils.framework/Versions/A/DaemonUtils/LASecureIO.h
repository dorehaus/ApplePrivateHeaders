/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/Versions/A/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LASecureIODelegate;
@class LASecureIOCommunication, NSObject;

@interface LASecureIO : NSObject {

	LASecureIOCommunication* _client;
	NSObject*<LASecureIODelegate> _delegate;

}

@property (__weak) NSObject*<LASecureIODelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)secureIO;
-(long long)setInstructions:(id)arg1 forOperation:(long long)arg2 withCredentialSet:(id)arg3 ;
-(long long)showScene:(long long)arg1 forOperation:(long long)arg2 ;
-(long long)loadSceneDescriptionsForOperation:(long long)arg1 ;
-(id)getCurrentLanguage;
-(long long)getSceneCountForOperation:(long long)arg1 ;
-(long long)getLoadedSceneCountForOperation:(long long)arg1 andLanguage:(id)arg2 ;
-(long long)setSceneDescriptionsforOperation:(long long)arg1 andLanguage:(id)arg2 ;
-(long long)setSceneDescription:(id)arg1 withSignature:(id)arg2 ;
-(long long)updateKextBlacklistFromPath:(id)arg1 ;
-(long long)handleRequestCommand:(unsigned)arg1 version:(id)arg2 withData:(id)arg3 andResponse:(id*)arg4 ;
-(id)readSceneDescriptionFromFile:(id)arg1 ;
-(long long)getServerSupportedVersion;
-(id)init;
-(NSObject*<LASecureIODelegate>)delegate;
-(void)setDelegate:(NSObject*<LASecureIODelegate>)arg1 ;
-(long long)postNotification:(long long)arg1 ;
@end
