/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADCapService, NSMutableDictionary, NSMutableSet, ADDESRecordsManager;

@interface ADMetricManager : NSObject {

	ADCapService* _capService;
	NSMutableDictionary* _activeAdvertisementsByInstanceID;
	NSMutableSet* _clickCapUpdated;
	NSMutableSet* _downloadCapUpdated;
	NSMutableSet* _frequencyCapUpdated;
	ADDESRecordsManager* _desRecordManager;

}

@property (nonatomic,retain) ADCapService * capService;                                           //@synthesize capService=_capService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeAdvertisementsByInstanceID;              //@synthesize activeAdvertisementsByInstanceID=_activeAdvertisementsByInstanceID - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickCapUpdated;                                      //@synthesize clickCapUpdated=_clickCapUpdated - In the implementation block
@property (nonatomic,retain) NSMutableSet * downloadCapUpdated;                                   //@synthesize downloadCapUpdated=_downloadCapUpdated - In the implementation block
@property (nonatomic,retain) NSMutableSet * frequencyCapUpdated;                                  //@synthesize frequencyCapUpdated=_frequencyCapUpdated - In the implementation block
@property (nonatomic,retain) ADDESRecordsManager * desRecordManager;                              //@synthesize desRecordManager=_desRecordManager - In the implementation block
+(id)sharedInstance;
+(id)testInstance;
-(id)init;
-(void)completed:(id)arg1 ;
-(NSMutableSet *)frequencyCapUpdated;
-(NSMutableDictionary *)activeAdvertisementsByInstanceID;
-(ADDESRecordsManager *)desRecordManager;
-(ADCapService *)capService;
-(void)interacted:(id)arg1 ;
-(id)buttonStateToString:(long long)arg1 ;
-(NSMutableSet *)downloadCapUpdated;
-(long long)buttonStateToDownloadType:(long long)arg1 ;
-(void)updateStoreKitAttribution:(id)arg1 targetAdvertisement:(id)arg2 ;
-(void)updateClickCap:(id)arg1 targetAdvertisement:(id)arg2 ;
-(NSMutableSet *)clickCapUpdated;
-(void)deactivateAdvertisementsByInstanceIDs:(id)arg1 ;
-(void)setCapService:(ADCapService *)arg1 ;
-(void)placed:(id)arg1 ;
-(void)onScreen:(id)arg1 ;
-(void)offScreen:(id)arg1 ;
-(void)visible:(id)arg1 start:(id)arg2 duration:(double)arg3 ;
-(void)adMarkerInteracted:(id)arg1 ;
-(void)getApp:(id)arg1 buttonState:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)received:(id)arg1 ;
-(void)activateAdvertisements:(id)arg1 ;
-(void)deactivateAdvertisements:(id)arg1 ;
-(void)deactivateAllAdvertisements;
-(void)replaceCapService:(id)arg1 ;
-(id)frequencyCapTypeToString:(long long)arg1 ;
-(void)setActiveAdvertisementsByInstanceID:(NSMutableDictionary *)arg1 ;
-(void)setClickCapUpdated:(NSMutableSet *)arg1 ;
-(void)setDownloadCapUpdated:(NSMutableSet *)arg1 ;
-(void)setFrequencyCapUpdated:(NSMutableSet *)arg1 ;
-(void)setDesRecordManager:(ADDESRecordsManager *)arg1 ;
@end

