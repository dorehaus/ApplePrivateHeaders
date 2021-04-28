/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPSharing.framework/Versions/A/AMPSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AMPLSharingClient;

@interface AMPSPhotoSharingPrefs : NSObject {

	BOOL _enabled;
	unsigned char _sourceID;
	NSDictionary* _photoSharingSettings;
	AMPLSharingClient* _client;

}

@property (nonatomic,retain) AMPLSharingClient * client;                         //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned char sourceID;                           //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * photoSharingSettings;              //@synthesize photoSharingSettings=_photoSharingSettings - In the implementation block
-(BOOL)enabled;
-(AMPLSharingClient *)client;
-(void)setClient:(AMPLSharingClient *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(unsigned char)sourceID;
-(void)enablePhotoSharingWithSourceID:(id)arg1 settings:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)disablePhotoSharingWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)photoSharingSettings;
-(void)updatePrefs:(char)arg1 sourceID:(id)arg2 settings:(id)arg3 ;
@end

