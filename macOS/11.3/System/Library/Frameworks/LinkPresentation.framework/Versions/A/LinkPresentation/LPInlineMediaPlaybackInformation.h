/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL, LPLyricExcerptMetadata, LPAudio;

@interface LPInlineMediaPlaybackInformation : NSObject {

	unsigned long long _type;
	NSString* _storeIdentifier;
	NSString* _storefrontIdentifier;
	NSArray* _offers;
	NSURL* _previewURL;
	LPLyricExcerptMetadata* _lyricExcerpt;
	NSString* _persistentIdentifier;
	LPAudio* _audio;

}

@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (nonatomic,readonly) char isAvailableForAnonymousDownload; 
@property (nonatomic,copy) NSURL * previewURL;                                    //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,retain) LPLyricExcerptMetadata * lyricExcerpt;               //@synthesize lyricExcerpt=_lyricExcerpt - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) LPAudio * audio;                                     //@synthesize audio=_audio - In the implementation block
-(unsigned long long)type;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)availability;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(LPAudio *)audio;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(void)setAudio:(LPAudio *)arg1 ;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(NSURL *)previewURL;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(char)isAvailableForAnonymousDownload;
-(LPLyricExcerptMetadata *)lyricExcerpt;
-(void)setLyricExcerpt:(LPLyricExcerptMetadata *)arg1 ;
@end

