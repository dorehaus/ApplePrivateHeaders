/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCTagSettingsDelegate;
@class NSMutableDictionary, FCKeyValueStore;

@interface FCTagSettings : NSObject {

	NSMutableDictionary* _tagSettingsEntriesByTagID;
	FCKeyValueStore* _localStore;
	id<FCTagSettingsDelegate> _delegate;

}
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(char)arg2 ;
-(id)webAccessOptedInTagIDs;
-(void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(char)arg3 ;
-(id)accessTokenForTagID:(id)arg1 ;
-(id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2 ;
-(void)handleSyncWithTagSettingsRecord:(id)arg1 ;
-(void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1 ;
-(id)allTagSettingsRecordNames;
-(id)allTagSettingsRecords;
-(void)syncForTagID:(id)arg1 ;
-(void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2 ;
-(id)fontSizeForTagID:(id)arg1 ;
-(void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2 ;
-(id)contentScaleForTagID:(id)arg1 ;
-(id)authenticatedAccessTokensByTagID;
@end
