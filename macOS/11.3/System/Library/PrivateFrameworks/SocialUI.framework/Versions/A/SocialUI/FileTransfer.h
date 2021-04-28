/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMFileTransfer.h>
#import <libobjc.A.dylib/FileTransferIconLoaderDelegate.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NSImage, IMHandle, NSNumber, IMServiceImpl;

@interface FileTransfer : IMFileTransfer <FileTransferIconLoaderDelegate, QLPreviewItem> {

	NSString* _displayNameCache;
	NSImage* _icon;
	NSImage* _previewImage;
	IMHandle* _otherIMHandle;
	unsigned _iconWasGuessedFromTransferInformation : 1;
	NSString* _livePhotoImagePath;
	NSString* _livePhotoVideoPath;
	NSURL* _livePhotoBundleURL;
	NSNumber* _photosAutoloopVideoValue;
	NSNumber* _qtAutoloopVideoValue;
	char _hasGeneratedPreviewImage;
	char _isCopying;
	IMServiceImpl* _service;
	NSNumber* _map;
	NSNumber* _pass;
	NSNumber* _image;
	NSNumber* _movie;
	NSNumber* _animatedEmoji;
	NSNumber* _livePhoto;

}

@property (nonatomic,retain) NSNumber * map;                                                       //@synthesize map=_map - In the implementation block
@property (nonatomic,retain) NSNumber * pass;                                                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) NSNumber * image;                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSNumber * movie;                                                     //@synthesize movie=_movie - In the implementation block
@property (nonatomic,retain) NSNumber * animatedEmoji;                                             //@synthesize animatedEmoji=_animatedEmoji - In the implementation block
@property (nonatomic,retain) NSNumber * livePhoto;                                                 //@synthesize livePhoto=_livePhoto - In the implementation block
@property (nonatomic,readonly) char isiMessage; 
@property (nonatomic,readonly) char isCKTapToDownloadImage; 
@property (nonatomic,readonly) char isMap; 
@property (nonatomic,readonly) char isPass; 
@property (nonatomic,readonly) char isImage; 
@property (nonatomic,readonly) char isMovie; 
@property (nonatomic,readonly) char isAnimatedEmoji; 
@property (nonatomic,readonly) char isLivePhoto; 
@property (nonatomic,retain) IMServiceImpl * service;                                              //@synthesize service=_service - In the implementation block
@property (getter=isPhotosAutoloopVideo,nonatomic,readonly) char photosAutoloopVideo; 
@property (getter=isQTAutoloopVideo,readonly) char qtAutoloopVideo; 
@property (assign,nonatomic) char isCopying;                                                       //@synthesize isCopying=_isCopying - In the implementation block
@property (nonatomic,readonly) NSString * livePhotoImagePath; 
@property (nonatomic,readonly) NSString * livePhotoVideoPath; 
@property (nonatomic,readonly) NSURL * livePhotoBundleURL; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
@property (readonly) id previewItemDisplayState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)downloadPath;
+(char)canExportToPhotos;
+(id)archiveLocalURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)displayName;
-(void)setImage:(NSNumber *)arg1 ;
-(NSNumber *)map;
-(id)errorString;
-(void)_setIcon:(id)arg1 ;
-(NSNumber *)image;
-(id)icon;
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(void)_cancel;
-(IMServiceImpl *)service;
-(void)setService:(IMServiceImpl *)arg1 ;
-(id)accountID;
-(void)openURL;
-(void)setMap:(NSNumber *)arg1 ;
-(id)previewImage;
-(NSNumber *)movie;
-(void)setMovie:(NSNumber *)arg1 ;
-(char)isImage;
-(char)isMovie;
-(void)download;
-(char)isMap;
-(char)_updateWithDictionaryRepresentation:(id)arg1 ;
-(NSNumber *)pass;
-(void)setPass:(NSNumber *)arg1 ;
-(char)isLivePhoto;
-(NSNumber *)livePhoto;
-(void)setLivePhoto:(NSNumber *)arg1 ;
-(id)otherIMHandle;
-(char)isQTAutoloopVideo;
-(char)isiMessage;
-(void)revealInFinder;
-(char)isPass;
-(char)isAnimatedEmoji;
-(char)isCKTapToDownloadImage;
-(char)isPhotosAutoloopVideo;
-(void)setIsCopying:(char)arg1 ;
-(NSString *)livePhotoVideoPath;
-(char)isCopying;
-(void)_revealInFinder:(id)arg1 ;
-(void)createUserVisibleLocation;
-(void)exportToPhotoLibraryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateDisplayNameCache;
-(void)_updateIconUsingLocalPath;
-(void)_updateIconUsingFileTransferInformation;
-(NSString *)livePhotoImagePath;
-(id)_tempLivePhotoBundleURL;
-(NSURL *)livePhotoBundleURL;
-(void)saveToLibrary:(id)arg1 ;
-(void)setDesktopPicture:(id)arg1 ;
-(id)newOpenMenuItem;
-(void)fileTransferIconDidLoad:(id)arg1 ;
-(id)otherPersonName;
-(id)newSaveToLibraryMenuItem;
-(id)newSetDesktopPictureMenuItemForScreen:(id)arg1 ;
-(id)menuItemsGivenQuickLookSelector:(SEL)arg1 target:(id)arg2 ;
-(NSNumber *)animatedEmoji;
-(void)setAnimatedEmoji:(NSNumber *)arg1 ;
@end
