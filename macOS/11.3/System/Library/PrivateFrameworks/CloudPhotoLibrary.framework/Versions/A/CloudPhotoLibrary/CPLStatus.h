/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLStatusDelegate;
@class NSURL, NSMutableDictionary, NSObject, NSDate, NSData, NSArray, NSDictionary, CPLAccountFlags;

@interface CPLStatus : NSObject {

	char _forCPL;
	NSURL* _statusFileURL;
	NSMutableDictionary* _status;
	NSObject*<OS_dispatch_queue> _lock;
	id<CPLStatusDelegate> _delegate;

}

@property (nonatomic,copy) NSDate * lastCompletePrefetchDate; 
@property (nonatomic,copy) NSDate * lastPruneDate; 
@property (assign,nonatomic) char hasChangesToProcess; 
@property (assign,nonatomic) char iCloudLibraryClientVersionTooOld; 
@property (nonatomic,copy) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,copy) NSDate * initialSyncDate; 
@property (assign,nonatomic) char isExceedingQuota; 
@property (nonatomic,copy) NSDate * exitDeleteTime; 
@property (assign,nonatomic) char iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) char iCloudLibraryExists; 
@property (nonatomic,copy) NSData * accountFlagsData; 
@property (nonatomic,readonly) NSDate * cloudAssetCountPerTypeLastCheckDate; 
@property (assign,nonatomic) char lowDiskSpace; 
@property (nonatomic,copy) NSArray * disabledFeatures; 
@property (nonatomic,readonly) char hasValidSystemBudget; 
@property (nonatomic,readonly) char hasCellularBudget; 
@property (nonatomic,readonly) char hasBatteryBudget; 
@property (nonatomic,readonly) NSDictionary * cloudAssetCountPerType; 
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (getter=isConnectedToNetwork,nonatomic,readonly) char connectedToNetwork; 
@property (getter=isCellularRestricted,nonatomic,readonly) char cellularRestricted; 
@property (getter=isInAirplaneMode,nonatomic,readonly) char inAirplaneMode; 
@property (nonatomic,readonly) char isConstrainedNetwork; 
@property (assign,nonatomic,__weak) id<CPLStatusDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(id<CPLStatusDelegate>)delegate;
-(void)setDelegate:(id<CPLStatusDelegate>)arg1 ;
-(void)_save;
-(id)statusDescription;
-(char)isExceedingQuota;
-(NSDate *)initialSyncDate;
-(NSDate *)exitDeleteTime;
-(NSDate *)lastSuccessfulSyncDate;
-(NSDate *)lastCompletePrefetchDate;
-(NSDictionary *)cloudAssetCountPerType;
-(CPLAccountFlags *)accountFlags;
-(char)writeInitialSyncMarker:(id*)arg1 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(char)isCellularRestricted;
-(char)isInAirplaneMode;
-(char)iCloudLibraryHasBeenWiped;
-(void)setLastPruneDate:(NSDate *)arg1 ;
-(void)setLastCompletePrefetchDate:(NSDate *)arg1 ;
-(void)setInitialSyncDate:(NSDate *)arg1 ;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(char)lowDiskSpace;
-(NSDate *)lastPruneDate;
-(NSArray *)disabledFeatures;
-(id)initWithClientLibraryBaseURLForCPLEngine:(id)arg1 ;
-(void)_loadIfNecessary;
-(char)_writeInitialSyncMarkerForDate:(id)arg1 error:(id*)arg2 ;
-(char)_deleteInitialSyncMarkerWithError:(id*)arg1 ;
-(void)checkInitialSyncMarker;
-(void)refetchFromDisk;
-(void)setLastSuccessfulSyncDate:(NSDate *)arg1 ;
-(char)hasChangesToProcess;
-(void)setHasChangesToProcess:(char)arg1 ;
-(void)setIsExceedingQuota:(char)arg1 ;
-(void)setICloudLibraryHasBeenWiped:(char)arg1 ;
-(char)iCloudLibraryExists;
-(void)setICloudLibraryExists:(char)arg1 ;
-(char)iCloudLibraryClientVersionTooOld;
-(void)setICloudLibraryClientVersionTooOld:(char)arg1 ;
-(void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(char)arg2 ;
-(NSDate *)cloudAssetCountPerTypeLastCheckDate;
-(void)_statusDidChange;
-(void)setHasCellularBudget:(char)arg1 hasBatteryBudget:(char)arg2 isConstrainedNetwork:(char)arg3 isBudgetValid:(char)arg4 ;
-(char)hasValidSystemBudget;
-(char)hasCellularBudget;
-(char)hasBatteryBudget;
-(char)isConnectedToNetwork;
-(char)isConstrainedNetwork;
-(void)setConnectedToNetwork:(char)arg1 cellularIsRestricted:(char)arg2 inAirplaneMode:(char)arg3 ;
-(void)setLowDiskSpace:(char)arg1 ;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(void)setDisabledFeatures:(NSArray *)arg1 ;
@end

