/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSPersistence/TSPObject.h>

@class KNUIState, KNTheme, KNSlideTree, TSSStylesheet, KNRecording, KNSoundtrack;

@interface KNShow : TSPObject {

	KNUIState* _uiState;
	KNTheme* _theme;
	KNSlideTree* _slideTree;
	TSSStylesheet* _stylesheet;
	KNRecording* _recording;
	CGSize _size;
	double _autoplayTransitionDelay;
	double _autoplayBuildDelay;
	double _idleTimerDelay;
	long long _mode;
	char _loopPresentation;
	char _idleTimerActive;
	char _automaticallyPlaysUponOpen;
	char _needsToUpdateThumbnails;
	char _wasImportedAsPreUFF;
	char _localizeDocument;
	KNSoundtrack* _soundtrack;

}

@property (assign,nonatomic) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) KNUIState * uiState;                            //@synthesize uiState=_uiState - In the implementation block
@property (nonatomic,retain) KNTheme * theme;                                //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) KNSlideTree * slideTree; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet;                   //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) double autoplayTransitionDelay; 
@property (assign,nonatomic) double autoplayBuildDelay; 
@property (assign,nonatomic) double idleTimerDelay; 
@property (assign,nonatomic) long long mode; 
@property (nonatomic,retain) KNSoundtrack * soundtrack; 
@property (nonatomic,retain) KNRecording * recording; 
@property (nonatomic,readonly) char hasInSyncRecording; 
@property (assign,nonatomic) char loopPresentation; 
@property (assign,nonatomic) char idleTimerActive; 
@property (assign,nonatomic) char automaticallyPlaysUponOpen; 
@property (nonatomic,readonly) char slideNumbersVisible; 
@property (nonatomic,readonly) char needsToUpdateThumbnails;                 //@synthesize needsToUpdateThumbnails=_needsToUpdateThumbnails - In the implementation block
@property (nonatomic,readonly) char wasImportedAsPreUFF;                     //@synthesize wasImportedAsPreUFF=_wasImportedAsPreUFF - In the implementation block
@property (assign,nonatomic) char localizeDocument;                          //@synthesize localizeDocument=_localizeDocument - In the implementation block
@property (getter=isPlayable,nonatomic,readonly) char playable; 
+(unsigned long long)minimumWidth;
+(unsigned long long)maximumWidth;
+(unsigned long long)maximumHeight;
+(unsigned long long)minimumHeight;
+(id)showWithSize:(CGSize)arg1 context:(id)arg2 ;
+(unsigned long long)maximumWidthForExport;
+(unsigned long long)maximumHeightForExport;
-(CGSize)size;
-(void)setMode:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(long long)mode;
-(CGPoint)center;
-(void)setTheme:(KNTheme *)arg1 ;
-(KNTheme *)theme;
-(char)isPlayable;
-(KNRecording *)recording;
-(void)setRecording:(KNRecording *)arg1 ;
-(TSSStylesheet *)stylesheet;
-(KNUIState *)uiState;
-(void)willModify;
-(void)saveToArchive:(ShowArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ShowArchive*)arg1 unarchiver:(id)arg2 ;
-(KNSlideTree *)slideTree;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(void)setUiState:(KNUIState *)arg1 ;
-(void)setLocalizeDocument:(char)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 context:(id)arg2 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(void)setSlideTree:(KNSlideTree *)arg1 ;
-(double)autoplayTransitionDelay;
-(void)setAutoplayTransitionDelay:(double)arg1 ;
-(double)autoplayBuildDelay;
-(void)setAutoplayBuildDelay:(double)arg1 ;
-(double)idleTimerDelay;
-(void)setIdleTimerDelay:(double)arg1 ;
-(char)loopPresentation;
-(void)setLoopPresentation:(char)arg1 ;
-(char)idleTimerActive;
-(void)setIdleTimerActive:(char)arg1 ;
-(char)automaticallyPlaysUponOpen;
-(void)setAutomaticallyPlaysUponOpen:(char)arg1 ;
-(KNSoundtrack *)soundtrack;
-(void)setSoundtrack:(KNSoundtrack *)arg1 ;
-(void)setStylesheetForThemePreview:(id)arg1 ;
-(char)slideNumbersVisible;
-(id)slideNodeAtIndex:(unsigned long long)arg1 ;
-(id)slideNodesAtIndexes:(id)arg1 ;
-(char)hasInSyncRecording;
-(char)needsToUpdateThumbnails;
-(char)wasImportedAsPreUFF;
-(char)localizeDocument;
@end
