/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLSyncContext.h>

@class NSArray, NSMutableDictionary, PLPhotoLibrary, PLCloudRecordOrganizer, NSString;

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {

	NSMutableDictionary* _assetAdjustmentStatesByCloudIdentifier;
	NSArray* _personUUIDsToDedupe;
	PLPhotoLibrary* _photoLibrary;
	PLCloudRecordOrganizer* _recordOrganizer;

}

@property (readonly) PLPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) PLCloudRecordOrganizer * recordOrganizer;              //@synthesize recordOrganizer=_recordOrganizer - In the implementation block
@property (nonatomic,readonly) char serverSupportsVision; 
@property (nonatomic,readonly) char serverSupportsGraphHome; 
@property (nonatomic,copy) NSArray * personUUIDsToDedupe;                   //@synthesize personUUIDsToDedupe=_personUUIDsToDedupe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)deleteFaces:(id)arg1 ;
-(char)serverSupportsVision;
-(PLCloudRecordOrganizer *)recordOrganizer;
-(char)serverSupportsGraphHome;
-(NSArray *)personUUIDsToDedupe;
-(id)makeFace;
-(id)personForUUID:(id)arg1 ;
-(char)personUUIDIsDeleted:(id)arg1 ;
-(id)assetAdjustmentStateForCloudIdentifier:(id)arg1 ;
-(void)setPersonUUIDsToDedupe:(NSArray *)arg1 ;
-(void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2 ;
@end
