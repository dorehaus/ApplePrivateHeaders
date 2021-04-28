/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (nonatomic,retain) NSString * longDescription; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)listOfSyncedProperties;
-(void)willSave;
-(void)prepareForDeletion;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(char)isSyncableChange;
@end

