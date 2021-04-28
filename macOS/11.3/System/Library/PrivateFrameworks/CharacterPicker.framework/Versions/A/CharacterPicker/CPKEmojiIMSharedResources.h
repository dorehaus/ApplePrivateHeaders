/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSBundle, NSObject, NSMutableArray, NSImage;

@interface CPKEmojiIMSharedResources : NSObject {

	char _emojiViewOncePrepared;
	char _isDataReady;
	char _isRTLDirection;
	NSBundle* _frameworkBundle;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMutableArray* _displayingRecents;
	NSMutableArray* _localRecents;
	NSMutableArray* _categoryDataArray;
	NSImage* _recentsImage;
	NSMutableArray* _categoryImages;

}

@property (retain) NSBundle * frameworkBundle;                              //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
@property (assign) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (retain) NSMutableArray * displayingRecents;                      //@synthesize displayingRecents=_displayingRecents - In the implementation block
@property (retain) NSMutableArray * localRecents;                           //@synthesize localRecents=_localRecents - In the implementation block
@property (retain) NSMutableArray * categoryDataArray;                      //@synthesize categoryDataArray=_categoryDataArray - In the implementation block
@property (retain) NSImage * recentsImage;                                  //@synthesize recentsImage=_recentsImage - In the implementation block
@property (retain) NSMutableArray * categoryImages;                         //@synthesize categoryImages=_categoryImages - In the implementation block
@property (assign) char isDataReady;                                        //@synthesize isDataReady=_isDataReady - In the implementation block
@property (assign) char isRTLDirection;                                     //@synthesize isRTLDirection=_isRTLDirection - In the implementation block
@property (assign) char emojiViewOncePrepared;                              //@synthesize emojiViewOncePrepared=_emojiViewOncePrepared - In the implementation block
+(id)sharedInstance;
+(id)createCloseButtonWithWidth:(double)arg1 ;
+(char)isUIDirectionRTL;
+(id)searchButtonImage;
+(Class)CPDataClass;
-(void)dealloc;
-(id)init;
-(id)imageNamed:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSBundle *)frameworkBundle;
-(id)localizedString:(id)arg1 ;
-(long long)categoryCount;
-(id)categoryImageForCategoryIndex:(long long)arg1 ;
-(id)categoryNameForCategoryIndex:(long long)arg1 ;
-(id)_emojiPreference;
-(void)_didChangedRecentsInCharacterPicker:(id)arg1 ;
-(void)_loadSystemRecentsWithFilling:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_waitForinitialization;
-(void)_saveRecentsWithNewCharacter:(id)arg1 ;
-(char)isRTLDirection;
-(char)_isEmojiString:(id)arg1 ;
-(id)charactersForCategoryIndex:(long long)arg1 ;
-(id)skinTonedCharacterForCharacter:(id)arg1 ;
-(char)hasSelectedSkinToneForCharacter:(id)arg1 ;
-(void)didSelectedCharacter:(id)arg1 ;
-(char)emojiViewOncePrepared;
-(void)setEmojiViewOncePrepared:(char)arg1 ;
-(void)setFrameworkBundle:(NSBundle *)arg1 ;
-(NSMutableArray *)displayingRecents;
-(void)setDisplayingRecents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localRecents;
-(void)setLocalRecents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categoryDataArray;
-(void)setCategoryDataArray:(NSMutableArray *)arg1 ;
-(NSImage *)recentsImage;
-(void)setRecentsImage:(NSImage *)arg1 ;
-(NSMutableArray *)categoryImages;
-(void)setCategoryImages:(NSMutableArray *)arg1 ;
-(char)isDataReady;
-(void)setIsDataReady:(char)arg1 ;
-(void)setIsRTLDirection:(char)arg1 ;
@end

