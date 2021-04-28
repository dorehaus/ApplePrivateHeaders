/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, NSNumber, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _subtitle;
	NSString* _genre;
	NSString* _platform;
	NSNumber* _isHiddenFromSpringboard;
	NSNumber* _hasMessagesExtension;
	LPiTunesMediaAsset* _icon;
	LPiTunesMediaAsset* _messagesAppIcon;
	NSArray* _screenshots;
	LPiTunesMediaAsset* _previewVideo;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;                     //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * platform;                                 //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSNumber * isHiddenFromSpringboard;                  //@synthesize isHiddenFromSpringboard=_isHiddenFromSpringboard - In the implementation block
@property (nonatomic,copy) NSNumber * hasMessagesExtension;                     //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * messagesAppIcon;              //@synthesize messagesAppIcon=_messagesAppIcon - In the implementation block
@property (nonatomic,retain) NSArray * screenshots;                             //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * previewVideo;                 //@synthesize previewVideo=_previewVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)genre;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setIcon:(LPiTunesMediaAsset *)arg1 ;
-(LPiTunesMediaAsset *)icon;
-(id)resolve;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setHasMessagesExtension:(NSNumber *)arg1 ;
-(NSNumber *)hasMessagesExtension;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSNumber *)isHiddenFromSpringboard;
-(NSArray *)screenshots;
-(void)setScreenshots:(NSArray *)arg1 ;
-(LPiTunesMediaAsset *)previewVideo;
-(void)setPreviewVideo:(LPiTunesMediaAsset *)arg1 ;
-(LPiTunesMediaAsset *)messagesAppIcon;
-(void)setMessagesAppIcon:(LPiTunesMediaAsset *)arg1 ;
-(id)assetsToFetch;
-(void)setIsHiddenFromSpringboard:(NSNumber *)arg1 ;
@end

