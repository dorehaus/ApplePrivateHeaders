/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Tourist.framework/Versions/A/Tourist
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Tourist/Tourist-Structs.h>
@class NSURL, NSString, NSArray, NSDate;

@interface APDTour : NSObject {

	char _isWaxwingTour;
	NSURL* _url;
	NSURL* _assetURL;
	NSString* _localAssetURL;
	unsigned long long _type;
	NSArray* _boardIDs;
	NSArray* _productHashes;
	double _minimumScale;
	NSString* _notificationTitle;
	NSString* _notificationText;
	NSString* _menuLabel;
	NSString* _tourID;
	NSString* _platform;
	NSArray* _forSystems;
	NSString* _showNotificationText;
	NSString* _closeNotificationText;
	NSString* _laterNotificationText;
	NSArray* _remindMeLaterTitles;
	NSString* _neverRemindMeText;
	NSString* _locale;

}

@property (retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * assetURL;                                           //@synthesize assetURL=_assetURL - In the implementation block
@property (retain) NSString * localAssetURL;                                   //@synthesize localAssetURL=_localAssetURL - In the implementation block
@property (assign) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (retain) NSArray * boardIDs;                                         //@synthesize boardIDs=_boardIDs - In the implementation block
@property (retain) NSArray * productHashes;                                    //@synthesize productHashes=_productHashes - In the implementation block
@property (assign) double minimumScale;                                        //@synthesize minimumScale=_minimumScale - In the implementation block
@property (retain) NSString * notificationTitle;                               //@synthesize notificationTitle=_notificationTitle - In the implementation block
@property (retain) NSString * notificationText;                                //@synthesize notificationText=_notificationText - In the implementation block
@property (retain) NSString * menuLabel;                                       //@synthesize menuLabel=_menuLabel - In the implementation block
@property (assign) unsigned long long numberOfNotificationsShown; 
@property (retain) NSString * tourID;                                          //@synthesize tourID=_tourID - In the implementation block
@property (retain) NSString * platform;                                        //@synthesize platform=_platform - In the implementation block
@property (retain) NSArray * forSystems;                                       //@synthesize forSystems=_forSystems - In the implementation block
@property (retain) NSString * showNotificationText;                            //@synthesize showNotificationText=_showNotificationText - In the implementation block
@property (retain) NSString * closeNotificationText;                           //@synthesize closeNotificationText=_closeNotificationText - In the implementation block
@property (retain) NSString * laterNotificationText;                           //@synthesize laterNotificationText=_laterNotificationText - In the implementation block
@property (retain) NSArray * remindMeLaterTitles;                              //@synthesize remindMeLaterTitles=_remindMeLaterTitles - In the implementation block
@property (retain) NSString * neverRemindMeText;                               //@synthesize neverRemindMeText=_neverRemindMeText - In the implementation block
@property (retain) NSString * locale;                                          //@synthesize locale=_locale - In the implementation block
@property (retain) NSDate * nextNotificationDue; 
@property (assign) char isWaxwingTour;                                         //@synthesize isWaxwingTour=_isWaxwingTour - In the implementation block
+(id)cachePath;
+(id)cachedObjectForKey:(id)arg1 ;
+(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
+(id)cachedDictionary;
+(id)cachedTours;
+(id)matchesForProfile:(id)arg1 inList:(id)arg2 fromCache:(char)arg3 ;
+(void)persistCacheDictionary:(id)arg1 ;
+(id)getCachedTour:(id)arg1 ;
+(id)tourWithDictionary:(id)arg1 forConfig:(char)arg2 ;
+(id)validateConfigURL:(id)arg1 ;
+(void)removeCachedConfig;
+(id)safeConfigURL:(id)arg1 ;
+(id)cachePathForImageAtURL:(id)arg1 forTour:(id)arg2 ;
+(char)cacheIsRecent:(id)arg1 forProfile:(id)arg2 ;
+(void)cacheTour:(id)arg1 index:(unsigned long long)arg2 tourCount:(unsigned long long)arg3 ;
+(void)cacheImagesForTours:(id)arg1 ;
+(void)clearCachedConfig;
+(id)toursForConfig:(id)arg1 forProfile:(id)arg2 ;
+(unsigned long long)indexOfTour:(id)arg1 ;
+(id)addLocalizedStringForKey:(id)arg1 inLocalizedStrings:(id)arg2 inDictionary:(id)arg3 ;
+(id)loadLocalizedTextForPreferredLocalizations:(id)arg1 forJSON:(id)arg2 atConfigURL:(id)arg3 ;
+(id)lprojURLsForTour:(id)arg1 preferredLocalizations:(id)arg2 ;
+(id)cacheMergedDictionaryForJSON:(id)arg1 tour:(id)arg2 andLocalizedStrings:(id)arg3 forID:(id)arg4 forLocale:(id)arg5 atURL:(id)arg6 ;
+(void)loadLocalizedTextForTour:(id)arg1 configJSON:(id)arg2 atConfigURL:(id)arg3 preferredLocalizations:(id)arg4 ;
+(id)localesURLForTour:(id)arg1 ;
+(id)cachedConfig:(id)arg1 forProfile:(id)arg2 ;
+(char)_loadToursForJSON:(id)arg1 atURL:(id)arg2 forProfile:(id)arg3 ;
+(id)notifyableMatchesForProfile:(id)arg1 inList:(id)arg2 ;
+(id)jsonForTours:(id)arg1 forConfig:(char)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)platform;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)typeDescription;
-(void)setPlatform:(NSString *)arg1 ;
-(double)minimumScale;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)notificationText;
-(void)setNotificationText:(NSString *)arg1 ;
-(NSString *)localAssetURL;
-(NSString *)notificationTitle;
-(void)setNotificationTitle:(NSString *)arg1 ;
-(char)isReachable;
-(void)setHasBeenViewed:(char)arg1 ;
-(char)matchesSystem:(id)arg1 ;
-(NSString *)menuLabel;
-(void)openInSafari:(id)arg1 ;
-(NSString *)tourID;
-(char)hasBeenViewedInProfile:(id)arg1 ;
-(id)dictionaryRepresentationForConfig:(char)arg1 ;
-(id)initWithURL:(id)arg1 tourID:(id)arg2 platform:(id)arg3 type:(unsigned long long)arg4 notificationTitle:(id)arg5 notificationText:(id)arg6 imagePath:(id)arg7 menuLabel:(id)arg8 boardIDs:(id)arg9 productHashes:(id)arg10 minimumScale:(double)arg11 previousSystems:(id)arg12 forSystems:(id)arg13 locales:(id)arg14 ;
-(void)setLocalAssetURL:(NSString *)arg1 ;
-(void)setIsWaxwingTour:(char)arg1 ;
-(void)setShowNotificationText:(NSString *)arg1 ;
-(void)setCloseNotificationText:(NSString *)arg1 ;
-(void)setLaterNotificationText:(NSString *)arg1 ;
-(void)setRemindMeLaterTitles:(NSArray *)arg1 ;
-(void)setNeverRemindMeText:(NSString *)arg1 ;
-(void)setMenuLabel:(NSString *)arg1 ;
-(char)isWaxwingTour;
-(unsigned long long)numberOfNotificationsShown;
-(NSString *)showNotificationText;
-(NSString *)closeNotificationText;
-(NSString *)laterNotificationText;
-(NSArray *)remindMeLaterTitles;
-(NSString *)neverRemindMeText;
-(NSArray *)forSystems;
-(NSArray *)boardIDs;
-(NSArray *)productHashes;
-(char)isIrrelevantInList:(id)arg1 forProfile:(id)arg2 ;
-(char)matchesProfile:(id)arg1 fromCache:(char)arg2 ;
-(void)setTourID:(NSString *)arg1 ;
-(void)setBoardIDs:(NSArray *)arg1 ;
-(void)setProductHashes:(NSArray *)arg1 ;
-(void)setMinimumScale:(double)arg1 ;
-(void)setForSystems:(NSArray *)arg1 ;
-(char)matchesHardware:(id)arg1 ;
-(char)matchesPlatform:(id)arg1 ;
-(char)matchesLocale:(id)arg1 fromCache:(char)arg2 ;
-(char)validateString:(id)arg1 ;
-(void)loadLocalizedTextFromCache;
-(char)validateStrings;
-(id)constructURLWithParameters;
-(void)updateKVStoreItems:(id)arg1 ;
-(CFStringRef)numNotificationsPrefsKey;
-(CFStringRef)nextNotificationDueKey;
-(CFStringRef)viewedPrefsKey;
-(CFStringRef)sierraViewedPrefsKey;
-(void)sychronizeHasBeenViewediCloud:(id)arg1 ;
-(void)setNumberOfNotificationsShown:(unsigned long long)arg1 ;
-(NSDate *)nextNotificationDue;
-(void)setNextNotificationDue:(NSDate *)arg1 ;
@end

