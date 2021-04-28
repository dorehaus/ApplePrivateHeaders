/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/QLSeamlessOpenerDelegate.h>
#import <libobjc.A.dylib/NSPasteboardWriting.h>
#import <libobjc.A.dylib/QLSeamlessOpenerDelegate.h>

@class NSNumber, NSString, PRSRankingItem, NSURL, NSArray, NSDate, NSData, NSImage, SFImage, LSApplicationProxy;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <QLSeamlessOpenerDelegate, NSPasteboardWriting, QLSeamlessOpenerDelegate> {

	unsigned long long _matchBits;
	char _lastRestrictionStatus;
	char _needsPreviewUpdate;
	char _autoLaunch;
	char _isFirstTopHit;
	char _isAnyTopHit;
	char _isShowAllInFinder;
	char _isTTR;
	char _isSynthetic;
	char _forceNoTopHit;
	char _isFolderQuery;
	char _supportsSubView;
	char _needsShortcut;
	char _isUsed;
	char _hasUsage;
	char _isSafariTopHit;
	float _l2score;
	NSNumber* _groupId;
	NSString* _groupName;
	PRSRankingItem* _rankingItem;
	NSString* _relatedIdentifier;
	NSString* _uniqueIdentifier;
	NSNumber* _documentIdentifier;
	NSString* _displayName;
	NSURL* _fastLaunchURL;
	NSArray* _otherTypes;
	NSArray* _otherNames;
	NSDate* _lastUsedDate;
	NSString* _distinguishPathString;
	NSURL* _altPath;
	long long _dpos;
	NSString* _NLPConfidence;
	NSString* _NLPCategory;
	double _cep;
	long long _feedbackBlockId;
	NSString* _customOpenSearchString;
	NSData* _suggestionsFeedbackData;
	NSImage* _iconImageForSuggestion;
	T _rank;

}

@property (readonly) char isPhotoImageOrMovie; 
@property (readonly) NSString * filePath; 
@property (readonly) NSString * parentPath; 
@property (readonly) NSImage * iconImage; 
@property (readonly) NSImage * largeIconImage; 
@property (readonly) NSImage * iconImageForApplication; 
@property (readonly) NSString * displayInfo; 
@property (readonly) NSImage * alternateIconImageForSuggestion; 
@property (readonly) SFImage * alternateLeadingImage; 
@property (readonly) NSArray * alternateDetails; 
@property (readonly) NSString * fastPath; 
@property (readonly) NSURL * fastURL; 
@property (readonly) NSString * targetString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PRSRankingItem * rankingItem;                            //@synthesize rankingItem=_rankingItem - In the implementation block
@property (readonly) LSApplicationProxy * appProxy; 
@property (readonly) NSString * relatedIdentifier;                                    //@synthesize relatedIdentifier=_relatedIdentifier - In the implementation block
@property (readonly) NSString * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSNumber * documentIdentifier;                                   //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * category; 
@property (readonly) NSURL * fastLaunchURL;                                           //@synthesize fastLaunchURL=_fastLaunchURL - In the implementation block
@property (readonly) NSString * contentDescription; 
@property (getter=isAutoLaunch) char autoLaunch;                                      //@synthesize autoLaunch=_autoLaunch - In the implementation block
@property (assign,nonatomic) char isFirstTopHit;                                      //@synthesize isFirstTopHit=_isFirstTopHit - In the implementation block
@property (assign,nonatomic) char isAnyTopHit;                                        //@synthesize isAnyTopHit=_isAnyTopHit - In the implementation block
@property (assign,nonatomic) char isShowAllInFinder;                                  //@synthesize isShowAllInFinder=_isShowAllInFinder - In the implementation block
@property (assign,nonatomic) char isTTR;                                              //@synthesize isTTR=_isTTR - In the implementation block
@property (assign,nonatomic) char isSynthetic;                                        //@synthesize isSynthetic=_isSynthetic - In the implementation block
@property (assign,nonatomic) char forceNoTopHit;                                      //@synthesize forceNoTopHit=_forceNoTopHit - In the implementation block
@property (readonly) NSArray * otherTypes;                                            //@synthesize otherTypes=_otherTypes - In the implementation block
@property (readonly) NSArray * otherNames;                                            //@synthesize otherNames=_otherNames - In the implementation block
@property (readonly) NSDate * lastUsedDate;                                           //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (assign) char isFolderQuery;                                                //@synthesize isFolderQuery=_isFolderQuery - In the implementation block
@property (retain) NSString * distinguishPathString;                                  //@synthesize distinguishPathString=_distinguishPathString - In the implementation block
@property (assign,nonatomic) T rank;                                                  //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) T score; 
@property (assign,nonatomic) float l2score;                                           //@synthesize l2score=_l2score - In the implementation block
@property (readonly) char allowsCPRecording; 
@property (assign) char supportsSubView;                                              //@synthesize supportsSubView=_supportsSubView - In the implementation block
@property (retain) NSURL * altPath;                                                   //@synthesize altPath=_altPath - In the implementation block
@property (assign,nonatomic) long long dpos;                                          //@synthesize dpos=_dpos - In the implementation block
@property (nonatomic,readonly) id<NSPasteboardWriting> pasteboardObject; 
@property (assign) char needsShortcut;                                                //@synthesize needsShortcut=_needsShortcut - In the implementation block
@property (retain) NSString * NLPConfidence;                                          //@synthesize NLPConfidence=_NLPConfidence - In the implementation block
@property (retain) NSString * NLPCategory;                                            //@synthesize NLPCategory=_NLPCategory - In the implementation block
@property (assign,nonatomic) double cep;                                              //@synthesize cep=_cep - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign) char isUsed;                                                       //@synthesize isUsed=_isUsed - In the implementation block
@property (nonatomic,retain) NSString * groupName;                                    //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSNumber * groupId;                                      //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) long long feedbackBlockId;                               //@synthesize feedbackBlockId=_feedbackBlockId - In the implementation block
@property (nonatomic,retain) NSString * customOpenSearchString;                       //@synthesize customOpenSearchString=_customOpenSearchString - In the implementation block
@property (nonatomic,retain) NSData * suggestionsFeedbackData;                        //@synthesize suggestionsFeedbackData=_suggestionsFeedbackData - In the implementation block
@property (assign) char hasUsage;                                                     //@synthesize hasUsage=_hasUsage - In the implementation block
@property (readonly) char isPrefixMatch; 
@property (readonly) char isExactMatch; 
@property (readonly) char isLocalResult; 
@property (readonly) char isDir; 
@property (readonly) NSImage * iconImageForSuggestion;                                //@synthesize iconImageForSuggestion=_iconImageForSuggestion - In the implementation block
@property (assign,nonatomic) char isSafariTopHit;                                     //@synthesize isSafariTopHit=_isSafariTopHit - In the implementation block
+(id)quickGlanceDomains;
+(void)initialize;
-(char)isApplication;
-(char)isSelectable;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)previewItemURL;
-(id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2 ;
-(NSString *)displayInfo;
-(NSString *)parentPath;
-(void)markAsUsed;
-(char)isApplicationManaged;
-(id)adamID;
-(char)isMusic;
-(char)isFolder;
-(char)isLocalResult;
-(id)pathForApplicationToOpen;
-(unsigned long long)resultOpenOptions;
-(NSString *)fastPath;
-(char)isPhotoImageOrMovie;
-(id<NSPasteboardWriting>)pasteboardObject;
-(char)isPrefixMatchWithName:(id)arg1 ;
-(char)isExactMatchWithName:(id)arg1 ;
-(char)utiTypeConformsTo:(id)arg1 ;
-(char)isGroupHeading;
-(char)isIndexingProgress;
-(char)isQuickGlance;
-(NSImage *)iconImageForApplication;
-(char)hasAlternateData;
-(NSImage *)iconImageForSuggestion;
-(char)isPrefPane;
-(char)isUsedWithinDays:(double)arg1 ;
-(NSImage *)iconImage;
-(id)prefPaneImage;
-(id)unknownImage;
-(char)useFinderIconAsPrefPaneImageForBundle:(id)arg1 ;
-(id)iconForBundle:(id)arg1 key:(id)arg2 ;
-(char)isImage;
-(char)isMovie;
-(void)markAsEngaged;
-(id)emailURLForAttachment;
-(char)isBoundEmailAttachment;
-(id)subjectForEmailAttachment;
-(char)needsPreviewUpdate;
-(void)setNeedsPreviewUpdate:(char)arg1 ;
-(void)setLastRestrictionStatus:(char)arg1 ;
-(char)isCompatibleWithPreviewController:(id)arg1 ;
-(id)previewController;
-(void)setMatchName:(id)arg1 ;
-(void)addAdamID:(id)arg1 ;
-(char)isFile;
-(char)isApplicationQueryResult;
-(char)isValidResultForFeedback;
-(char)isVideo;
-(char)isContact;
-(char)isCalendarEvent;
-(char)isEmail;
-(char)isCalculation;
-(int)isTopHit;
-(char)shouldNotBeTopHit;
-(NSImage *)alternateIconImageForSuggestion;
-(SFImage *)alternateLeadingImage;
-(NSArray *)alternateDetails;
-(char)isShortcutAllowed;
-(char)isVeryRecentlyUsed;
-(char)isRecentlyUsed;
-(char)isSomewhatRecentlyUsed;
-(NSURL *)fastURL;
-(NSImage *)largeIconImage;
-(id)title_note;
-(id)contactImage;
-(id)safariDocumentImage;
-(id)newCustomPreviewController;
-(int)qlPreviewMode;
-(char)allowShowPath;
-(NSString *)targetString;
-(id)quickLookItemForQueryString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)URL;
-(NSString *)uniqueIdentifier;
-(NSString *)displayName;
-(NSString *)filePath;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(T)score;
-(id)valueForAttribute:(id)arg1 ;
-(void)prepare;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSDate *)lastUsedDate;
-(NSString *)contentDescription;
-(void)setScore:(T)arg1 ;
-(void)setRank:(T)arg1 ;
-(T)rank;
-(NSNumber *)documentIdentifier;
-(char)isDir;
-(void)setGroupId:(NSNumber *)arg1 ;
-(NSNumber *)groupId;
-(unsigned long long)matchQuality;
-(id)initWithResult:(id)arg1 ;
-(char)isEqualToResult:(id)arg1 ;
-(void)setAutoLaunch:(char)arg1 ;
-(void)prepareIcons;
-(PRSRankingItem *)rankingItem;
-(void)setRankingItem:(PRSRankingItem *)arg1 ;
-(id)initWithContentType:(id)arg1 displayName:(id)arg2 ;
-(char)isLocalResult;
-(NSURL *)altPath;
-(id<NSPasteboardWriting>)pasteboardObject;
-(char)isTTR;
-(NSImage *)iconImageForSuggestion;
-(NSString *)customOpenSearchString;
-(NSArray *)otherNames;
-(NSURL *)fastURL;
-(id)valueForAttribute:(id)arg1 withType:(Class)arg2 ;
-(id)initWithFastLaunchURL:(id)arg1 contentType:(id)arg2 displayName:(id)arg3 ;
-(void)setHasUsage:(char)arg1 ;
-(void)setIsFolderQuery:(char)arg1 ;
-(void)setNLPConfidence:(NSString *)arg1 ;
-(void)setNeedsShortcut:(char)arg1 ;
-(void)setCustomOpenSearchString:(NSString *)arg1 ;
-(void)setIsShowAllInFinder:(char)arg1 ;
-(NSString *)distinguishPathString;
-(char)isFirstTopHit;
-(char)isAnyTopHit;
-(char)isShowAllInFinder;
-(NSString *)NLPConfidence;
-(NSString *)relatedIdentifier;
-(LSApplicationProxy *)appProxy;
-(char)needsShortcut;
-(void)setIsTTR:(char)arg1 ;
-(char)allowsCPRecording;
-(float)l2score;
-(char)isSynthetic;
-(char)isSafariTopHitForQuery:(id)arg1 ;
-(char)isSafariTopHit;
-(void)setIsFirstTopHit:(char)arg1 ;
-(NSURL *)fastLaunchURL;
-(void)setDistinguishPathString:(NSString *)arg1 ;
-(void)setIsUsed:(char)arg1 ;
-(void)updateRenderOrEngagementCountsForKey:(id)arg1 date:(id)arg2 ;
-(NSArray *)otherTypes;
-(char)isExactMatch;
-(id)initWithContentType:(id)arg1 displayName:(id)arg2 groupId:(id)arg3 ;
-(id)initWithResult:(id)arg1 groupId:(id)arg2 ;
-(char)isAutoLaunch;
-(char)isFolderQuery;
-(char)supportsSubView;
-(long long)dpos;
-(NSString *)NLPCategory;
-(double)cep;
-(char)isUsed;
-(long long)feedbackBlockId;
-(char)hasUsage;
-(id)initWithFastLaunchURL:(id)arg1 contentType:(id)arg2 displayName:(id)arg3 groupId:(id)arg4 ;
-(id)cachedImageForKey:(id)arg1 ;
-(void)cacheImage:(id)arg1 forKey:(id)arg2 ;
-(char)isPrefixMatch;
-(void)setIsAnyTopHit:(char)arg1 ;
-(void)setIsSynthetic:(char)arg1 ;
-(char)forceNoTopHit;
-(void)setForceNoTopHit:(char)arg1 ;
-(void)setL2score:(float)arg1 ;
-(void)setSupportsSubView:(char)arg1 ;
-(void)setAltPath:(NSURL *)arg1 ;
-(void)setDpos:(long long)arg1 ;
-(void)setNLPCategory:(NSString *)arg1 ;
-(void)setCep:(double)arg1 ;
-(void)setFeedbackBlockId:(long long)arg1 ;
-(NSData *)suggestionsFeedbackData;
-(void)setSuggestionsFeedbackData:(NSData *)arg1 ;
-(void)setIsSafariTopHit:(char)arg1 ;
@end

