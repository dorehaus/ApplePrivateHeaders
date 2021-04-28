/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKRepairZonePCSOperationCallbacks.h>

@class NSArray, CKRepairZonePCSOperationInfo;

@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks> {

	/*^block*/id _zoneRepairedBlock;
	NSArray* _zoneIDs;

}

@property (nonatomic,readonly) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKRepairZonePCSOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * zoneIDs;                                                                 //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id zoneRepairedBlock;                                                                //@synthesize zoneRepairedBlock=_zoneRepairedBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)zoneRepairedBlock;
-(void)handleZonePCSRepairForID:(id)arg1 pcsInfo:(id)arg2 error:(id)arg3 ;
-(id)initWithZoneIDsToRepair:(id)arg1 ;
-(void)setZoneRepairedBlock:(id)arg1 ;
@end

