/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ClearBrowsingDataController : NSObject {

	NSArray* _availableIntervals;

}

@property (readonly) NSArray * availableIntervals;              //@synthesize availableIntervals=_availableIntervals - In the implementation block
+(id)allTimeInterval;
-(id)init;
-(void)clearAllData;
-(void)_deleteUnusedSafariDesktopPictureFiles;
-(void)_clearDataAddedAfterDate:(id)arg1 ;
-(void)_clearBackForwardListForAllTabs;
-(void)_clearVisitedLinksForAllTabs;
-(void)_clearOCSPCache;
-(void)_clearNonTemporalDataIncludingFavicons:(char)arg1 ;
-(void)_clearNonContaineredLibraryCachesAfter:(id)arg1 ;
-(void)clearOnlySafariHistoryFromInterval:(id)arg1 ;
-(void)clearDataFromInterval:(id)arg1 ;
-(NSArray *)availableIntervals;
@end
