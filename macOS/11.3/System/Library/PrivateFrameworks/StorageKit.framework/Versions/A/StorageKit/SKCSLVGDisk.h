/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageKit.framework/Versions/A/StorageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StorageKit/SKDisk.h>

@class NSString, NSArray;

@interface SKCSLVGDisk : SKDisk {

	NSString* _csLVGUUID;
	NSArray* _csPVChildrenUUIDs;

}

@property (retain) NSString * csLVGUUID;                     //@synthesize csLVGUUID=_csLVGUUID - In the implementation block
@property (retain) NSArray * csPVChildrenUUIDs;              //@synthesize csPVChildrenUUIDs=_csPVChildrenUUIDs - In the implementation block
-(char)matchesDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)children;
-(void)updateWithDictionary:(id)arg1 ;
-(id)physicalVolumes;
-(void)addChildVolumeToEmptyLVGWithProgress:(/*^block*/id)arg1 completetionBlock:(/*^block*/id)arg2 ;
-(char)canResize;
-(id)minimalDictionaryRepresentation;
-(void)setCsLVGUUID:(NSString *)arg1 ;
-(NSString *)csLVGUUID;
-(void)setCsPVChildrenUUIDs:(NSArray *)arg1 ;
-(NSArray *)csPVChildrenUUIDs;
@end

