/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate;

@interface HMDUnassociatedFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
+(id)hmbQueries;
+(id)sentinelParentUUID;
+(id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(char)arg1 ;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(id)createFaceCrop;
-(id)initWithFaceCrop:(id)arg1 ;
@end

