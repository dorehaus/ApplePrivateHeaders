/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSSet, NSArray;


@protocol PLPhotosHighlightData <PLMomentRefreshable,PLHighlightItem>
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * localStartDate; 
@property (nonatomic,retain,readonly) NSDate * localEndDate; 
@property (assign,nonatomic) int startTimeZoneOffset; 
@property (assign,nonatomic) int endTimeZoneOffset; 
@property (assign,nonatomic) char isCurated; 
@property (assign,nonatomic) double promotionScore; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short kind; 
@property (assign,nonatomic) unsigned short category; 
@property (assign,nonatomic) unsigned short visibilityState; 
@property (assign,nonatomic) unsigned short enrichmentState; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentPhotosHighlight; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentDayGroupPhotosHighlight; 
@property (nonatomic,retain) NSSet * childPhotosHighlights; 
@property (nonatomic,retain) NSSet * childDayGroupPhotosHighlights; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) NSSet * moments; 
@property (nonatomic,retain,readonly) NSArray * momentsSortedByTime; 
@property (nonatomic,retain) id<PLMomentAssetData> keyAssetForKind; 
@property (nonatomic,retain) id<PLMomentAssetData> monthFirstAsset; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * summaryAssets; 
@property (nonatomic,retain) NSSet * extendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupAssets; 
@property (nonatomic,retain) NSSet * dayGroupExtendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupSummaryAssets; 
@required
+(id)sortByTimeSortDescriptors;
-(void)setType:(unsigned short)arg1;
-(NSString *)uuid;
-(unsigned short)type;
-(void)setUuid:(id)arg1;
-(void)setTitle:(id)arg1;
-(unsigned short)kind;
-(unsigned short)category;
-(void)setCategory:(unsigned short)arg1;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setKind:(unsigned short)arg1;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(NSSet *)assets;
-(void)setAssets:(id)arg1;
-(char)isDeleted;
-(void)delete;
-(unsigned short)visibilityState;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1;
-(void)setVisibilityState:(unsigned short)arg1;
-(void)setIsCurated:(char)arg1;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id<PLMomentAssetData>)keyAssetForKind;
-(char)isCurated;
-(int)startTimeZoneOffset;
-(int)endTimeZoneOffset;
-(id<PLPhotosHighlightData>)parentPhotosHighlight;
-(void)refreshAssets;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSSet *)childPhotosHighlights;
-(NSSet *)childDayGroupPhotosHighlights;
-(id<PLPhotosHighlightData>)parentDayGroupPhotosHighlight;
-(NSSet *)summaryAssets;
-(NSSet *)extendedAssets;
-(NSSet *)moments;
-(id<PLMomentAssetData>)monthFirstAsset;
-(NSSet *)dayGroupAssets;
-(NSSet *)dayGroupExtendedAssets;
-(NSSet *)dayGroupSummaryAssets;
-(NSArray *)momentsSortedByTime;
-(void)bumpHighlightVersion;
-(void)removeAssetData:(id)arg1;
-(void)setStartTimeZoneOffset:(int)arg1;
-(void)setEndTimeZoneOffset:(int)arg1;
-(void)setParentPhotosHighlight:(id)arg1;
-(void)setParentDayGroupPhotosHighlight:(id)arg1;
-(void)setChildPhotosHighlights:(id)arg1;
-(void)setChildDayGroupPhotosHighlights:(id)arg1;
-(void)setMoments:(id)arg1;
-(void)setKeyAssetForKind:(id)arg1;
-(void)setMonthFirstAsset:(id)arg1;
-(void)setSummaryAssets:(id)arg1;
-(void)setExtendedAssets:(id)arg1;
-(void)setDayGroupAssets:(id)arg1;
-(void)setDayGroupExtendedAssets:(id)arg1;
-(void)setDayGroupSummaryAssets:(id)arg1;

@end
